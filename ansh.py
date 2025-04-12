import math

def calculate_U_coil(mass_flow, Cp, mu, k, L_coil, T_hot_in, T_hot_out, T_cold_in, 
T_cold_out, fouling, Q, tube_thickness, tube_k,rho, is_forced=True):

    max_iterations = 100
    tolerance = 5
    U_old = 500  # Initial guess

    # Calculate log mean temperature difference (LMTD)
    delta_T1 = T_hot_in - T_cold_out
    delta_T2 = T_hot_out - T_cold_in
    delta_T_lm = (delta_T1 - delta_T2) / math.log(delta_T1 / delta_T2)
    
    # Calculate initial heat transfer area
    A_coil = Q / (U_old * delta_T_lm)  # Initial area estimation
    for _ in range(max_iterations):
        # Estimate bulk temperature
        T_bulk = (T_hot_in + T_hot_out + T_cold_in + T_cold_out) / 4
        
        # Calculate properties at bulk temperature
        Pr = (Cp * mu) / k
        
        # Estimate coil inner diameter from initial area
        D_inner =  A_coil / (math.pi * L_coil)
        D_outer = D_inner + 2 * tube_thickness  # Define outer diameter properly
        
        # Calculate Reynolds number
        V = (mass_flow/rho) / (math.pi * (D_inner ** 2) / 4)
        Re_inner = (D_inner * V) / mu * rho
        
        # Calculate Nusselt number for inner flow
        if is_forced:
            if Re_inner > 10000:
                Nu_inner = 0.023 * (Re_inner ** 0.8) * (Pr ** 0.4)  # Dittus-Boelter equation
            else:
                Nu_inner = 4.36  # Laminar assumption
        else:
            Nu_inner = 0.27 * (Pr ** (1/3))  # Natural convection (Churchill-Chu)
        
        # Compute inner heat transfer coefficient
        h_inner = (Nu_inner * k) / D_inner
        
        # Calculate Reynolds number for outer flow (annular flow assumption)
        Re_outer = Re_inner * (D_inner / D_outer)  # Adjust for outer region flow
        if is_forced:
            if Re_outer > 10000:
                Nu_outer = 0.023 * (Re_outer ** 0.8) * (Pr ** 0.4)
            else:
                Nu_outer = 4.36
        else:
            Nu_outer = 0.27 * (Pr ** (1/3))
        # Compute outer heat transfer coefficient
        h_outer = (Nu_outer * k) / D_outer
        
        R_tube = math.log(D_outer / D_inner) / (2 * math.pi * tube_k * L_coil)
        R_total = (1 / h_inner) + R_tube + (1 / h_outer) + fouling
        U_new = 1 / R_total
        
        # Check for convergence
        if abs(U_new - U_old) < tolerance:
            break
        U_old = U_new
    return U_new, D_inner, D_outer

U, D_inner, D_outer = calculate_U_coil(
    mass_flow=5.69, Cp=1800, mu=0.00028, k=0.68,
    L_coil=316, T_hot_in=110, T_hot_out=110, T_cold_in=30, T_cold_out=40,
    fouling=0.0001, Q=238000, tube_thickness=0.0044, tube_k=1.4, rho =997, is_forced=False
)

print(f"Overall Heat Transfer Coefficient (U): {U:.2f} W/m²K")
print(f"Estimated Inner Coil Diameter (D_inner): {D_inner:.4f} m")
print(f"Estimated Outer Coil Diameter (D_outer): {D_outer:.4f} m")

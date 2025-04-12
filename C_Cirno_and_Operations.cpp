// #include <bits/stdc++.h>

// #define fu(i, a, b) for (ll i(a); i < b; i++)
// #define ll long long int
// #define pb push_back
// using namespace std;


// void solve()
// {
//     ll n;
//     cin >> n;

//     ll sum=0;

//     vector<ll> v;
//     fu(i, 0, n)
//     {
//         ll elm;
//         cin >> elm;
//         v.pb(elm);
//         sum+=elm;
//     }
//     if(sum<0 && n!=1){
//         sum=-1*sum;
//     }
// if(n==1) {cout<<v[0]<<endl; return;}
// while(n){
//     ll csum=0;
//     for(ll i=0;i<n-1;i++){
//             v[i]=v[i]-v[i+1];
//             csum+=v[i];
//     }
//     n--;
//     if(abs(csum)>sum){
//         sum=abs(csum);
//     }
// }

// cout<<sum<<endl;



// }

// int main()
// {

//         ll t;
//         cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
























def process_mohit_case():
    size = int(input())
    sequencemk = list(map(int, input().split()))
    sum = sum(sequencemk)
    
    while len(sequencemk) > 1:
        diff = [sequencemk[i + 1] - sequencemk[i] for i in range(len(sequencemk) - 1)]
        
        if sum(diff) < 0:
            diff = [-x for x in diff]
        
        sum = max(sum, sum(diff))
        sequencemk = diff[::-1]
    
    print(max(sum, sequencemk[0]))

for _ in range(int(input())):
    process_mohit_
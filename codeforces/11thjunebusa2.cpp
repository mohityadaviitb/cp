#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define fd(i, a, b) for (ll i(a); i >= b; i--)
#define ll long long int
using namespace std;



ll findClosestRecursive(ll arr[], ll left, ll right, ll target) {
    if (left == right) {
        return arr[left];
    }
  
    ll mid = (left + right) / 2;
  
    ll leftClosest = findClosestRecursive(arr, left, mid, target);
  
    ll rightClosest = findClosestRecursive(arr, mid + 1, right, target);
  
    if (abs(leftClosest - target) <= abs(rightClosest - target)) {
        return leftClosest;
    }
    else {
        return rightClosest;
    }
}


void solve()
{
  	ll n;
	cin >> n;
     ll x;
    cin >> x;
    
	ll v[n];
    fu(i,0,n){
	
         cin >> v[i];
		
    }

    sort(v,v+n);
    ll ans=INT_MAX;

   

      fu(i,0,n){

        ll c=x-v[i];
        ll d = abs(c-findClosestRecursive(v,0,n,c));
     
        
        ans=min(ans,d);

      }

      cout << ans <<endl;
	

}      
 
















#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;





 int main()
{
    auto start = high_resolution_clock::now();
	Code By Mohityadav
	ll t=1;
	while (t--)
	{
		solve();
	}
     auto stop = high_resolution_clock::now();

    // Calculate the duration
    auto duration = duration_cast<milliseconds>(stop - start);

    // Output the time taken
    // cout << "Time taken: " << duration.count() << " milliseconds" << endl;
	return 0;
}

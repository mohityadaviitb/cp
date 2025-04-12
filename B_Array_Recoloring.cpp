#include <bits/stdc++.h>
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define ll long long int
#define pb push_back
using namespace std;


// ll maxSum(vector<ll>& arr, ll x) {
//     priority_queue<ll, vector<ll>, greater<ll>> minHeap;

//     for (ll num : arr) {
//         minHeap.push(num);
//         if (minHeap.size() > x) {
//             minHeap.pop();  // Remove the smallest element
//         }
//     }

//     ll sum = 0;
//     while (!minHeap.empty()) {
//         sum += minHeap.top();
//         minHeap.pop();
//     }

//     return sum;
// }




// ll lf( vector<vector<ll> >& ldp, vector<ll> &v,ll i,ll x){

//     ll n=v.size();

//     if(ldp[i][x]!=-1){
//         return ldp[i][x];
//     }

//     else if(i+1<x){
//         return ldp[i][x]=INT_MIN;
//     }

//     else if(i==0){
//         return ldp[i][x]=v[0];
//     }


// }
    


void solve()
{
    ll n,k;
    cin >> n>>k;

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
    }

    vector<vector<long long > > leftDP(n + 1, vector<long long>(k + 1, 0));
    
    for (ll i = 1; i <= n; i++) {
        for (ll x = 1; x <= min(k, i); x++) {
            leftDP[i][x] = max(leftDP[i - 1][x], leftDP[i - 1][x - 1] + v[i - 1]);
        }
    }

    vector<vector<long long> > rightDP(n + 2, vector<long long>(k + 1, 0));
    
    for (int i = n; i >= 1; i--) {
        for (int r = 1; r <= min(k, n - i + 1); r++) {
            rightDP[i][r] = max(rightDP[i + 1][r], rightDP[i + 1][r - 1] + v[i - 1]);
        }
    }
    

    // for(ll i=1;i<=n;i++){
    //     for(ll j=1;j<=k;j++){
    //         cout<<leftDP[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    long long maxCost = max(leftDP[n-1][k]+v[n-1],rightDP[2][k]+v[0]);

    // cout<<maxCost<<endl;

    for (ll L = 1; L < n-1; L++) {
        // Try every possible split (x from left, k-x from right)
        for (ll x = 1; x <= k-1; x++) {
            // if (L + 1 < x || n - L < k - x) continue; // Ensure valid range

            long long leftSum = leftDP[L ][x];   // Best x elements from left
            long long rightSum = rightDP[L + 2][k - x]; // Best (k-x) elements from right
            long long lastPainted = v[L]; // Element L is painted last

            maxCost = max(maxCost, leftSum + rightSum + lastPainted);

            // cout<<rightSum<<endl;

        }
    }

    cout << maxCost << endl;

// cout<<endl<<"ram"<<endl;

    
}

int main()
{
        ll t=1;
        cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
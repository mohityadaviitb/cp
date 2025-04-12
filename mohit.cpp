#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define ll long long int
#define pb push_back
using namespace std;
#define commented 
#ifndef commented
#define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
#else
#define dbg(v)
#endif

void solve()
{
    int n, m;
    cin >> n >> m;
    
    vector<int> mvec(n);
    for (int i = 0; i < n; i++) {
        cin >> mvec[i];
    }
    
    vector<int> nvec(m);
    for (int i = 0; i < m; i++) {
        cin >> nvec[i];
    }
    

    vector<vector<int> > rot;
    deque<int> b_deque(nvec.begin(), nvec.end());
    for (int i = 0; i < m; i++) {
        rot.push_back(vector<int>(b_deque.begin(), b_deque.end()));
        b_deque.push_back(b_deque.front());
        b_deque.pop_front();
    }
    

    for (int i = 0; i <= n - m; i++) {
        vector<int> curr(mvec.begin() + i, mvec.begin() + i + m);
     
        auto brot = min_element(rot.begin(), rot.end());

        if (curr > *brot) {
            copy(brot->begin(), brot->end(), mvec.begin() + i);
        }
    }
    
  
    for (int i = 0; i < n; i++) {
        cout << mvec[i] ;
        if (i == n-1 ){
            cout<<endl;
        } else{
cout<<" ";
        }
   
    }
    
}

int main()
{
    Code By Mohityadav
        ll t=1;
        cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}


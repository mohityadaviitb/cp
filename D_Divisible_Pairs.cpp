#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define fd(i, a, b) for (ll i(a); i >= b; i--)
#define ll long long int
#define pb push_back
#define MODE 1000000007
#define pi 3.141592653589793238
#define pll pair<ll, ll>
#define pstr pair<string, string>
using namespace std;
typedef vector<ll> vll;
typedef map<ll, ll> mll;
typedef unordered_map<ll, ll> umll;

#define commented // Un-Comment this before submission
#ifndef commented
#define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
#else
#define dbg(v)
#endif

      vector<pair<ll,ll> > twoSum(vector<ll>& nums,ll x,ll y) 
    {
        unordered_map<ll,ll> a;
           vector<pair<ll,ll> > ans;
        for(ll i = 0;i < nums.size();i++)
        {
              ll complement = x - nums[i]%x;
            if(a.find(x - nums[i]%x) != a.end())
            {
                 
                 if(nums[i]%y==(x - nums[i])%y){
                       cout << a[complement]<<" "<< i<<endl;
                 ans.push_back(make_pair(a[complement], i));
                }


                // return {a[target - nums[i]], i};
            }
            a[nums[i]%x] = i;
        }
        return ans;
    }


int main()
{
    Code By Mohityadav
        ll t;
        cin >> t;
    while (t--)
    {

        ll n,x,y;
        cin >> n >> x >>y;
        vector<ll >nums(n,-1);


        for(int i=0;i<n;i++){
            ll m;
            cin >> m;
            nums[i] = m;
        }

          vector<pair<ll,ll> > ans = twoSum(nums,x,y);

    cout << ans.size()<<endl;



    }
    return 0;
}


















  

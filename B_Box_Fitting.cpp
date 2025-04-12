#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define ll long long int
#define pb push_back
using namespace std;
#define commented // Un-Comment this before submission
#ifndef commented
#define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
#else
#define dbg(v)
#endif

ll greatestlesser(ll low, ll high, ll key,vector<ll>a)
{
	ll ans = -1;

	while (low <= high) {
		ll mid = low + (high - low + 1) / 2;
		ll midVal = a[mid];

		if (midVal < key) {

			ans = mid;
			low = mid + 1;
		}
		else if (midVal > key) {

			high = mid - 1;
		}
		else if (midVal == key) {

			high = mid - 1;
            return mid;
		}
	}

	return ans;
}

void solve()
{
    ll n,w;
    cin >> n>>w;
    ll nw=w;
    ll s=0;

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
        s+=elm;
    }
    sort(v.begin(),v.end());


for(int i=0;i<n;i++){
    // cout << v[i]<<" ";
}
// cout << endl;
// cout << endl;


    ll ans=0;
  
    ll i=n-1;
       s-=v[n-1];
    i--;
    w-=v[n-1];
    ll c=0;

while(s>0 && c<2000){

c++;
// cout << s << " "<< ans<<" "<<v[i]<< " "<<w<<endl;



    if(v[i]==-1){
        i--;
        continue;
    }

    if(v[i]<=w){
           s-=v[i];
              w-=v[i];
              i--;
 
    }
    else{
        ll t = greatestlesser(0,i-1,w,v);
        // cout << t<<" "<<v[t]<<endl;
        if(t==-1 || v[t]==-1){
            w=nw;
            ans++;
            continue;
        }
         s-=v[t];
         w-=v[t];
         v[t]=-1;
    }


}

cout << ans+1<<endl;



}

int main()
{
    Code By Mohityadav
        ll t;
        cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

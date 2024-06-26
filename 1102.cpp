#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fo for (ll i(0); i < n; i++)
#define fu(i, a, n) for (ll i(a); i < n; i++)
#define fd(i, a, n) for (ll i(a); i >= n; i--)
#define pb push_back
#define pll pair<ll, ll>
#define MOD 998244353
#define MODE 1000000007
#define sor(v) v.begin(), v.end()
 
 

// void solve()
// {
// 	ll k,n,m;
// 	cin >> k >> n >> m;


// ll a[n];
// ll b[n];

// int z=0;
// fu(i,0, n){
//     cin >> a[i];
//     if(a[i]==0){
//         z++;
//     }

// }

// fu(i,0,m){
//     cin >> b[i];
//      if(a[i]==0){
//         z++;

// }  



// }      
 
// sort(a,a+n);
// sort(b,b+m);


// int i=0;
// int j=0;
// if(max(a[n-1],b[m-1]) <=z+k){
// while(i<n || j<m){
// 	if(a[i]<b[j]){
// 			    cout << a[i++] << " " ;

// 	}
// 	else{
// 		cout << b[j++] << " " ;
	
// 	}
// }
// cout << endl;
// }

// else{
//     cout << -1 << endl;
// }



// }




void solve(){
    int k,n,m;
    cin>>k>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    int i=0,j=0;
    vector<int>ans;
    while(i<n || j<m){
        if(i<n && j<m){
            if(a[i]==0) ans.push_back(0), i++, k++;
            else if(b[j]==0) ans.push_back(0), j++, k++;
            else{
                if(a[i]<b[j] && a[i]<=k) ans.push_back(a[i]), i++;
                else if(a[i]>=b[j] && b[j]<=k) ans.push_back(b[j]), j++;
                else{
                    cout<<-1<<"\n";
                    return;
                }
            }
        }
        else if(i<n){
            if(a[i]==0) ans.push_back(0), i++, k++;
            else{
                if(a[i]<=k) ans.push_back(a[i]), i++;
                else{
                    cout<<-1<<"\n";
                    return;
                }
            }
        }
        else if(j<m){
            if(b[j]==0) ans.push_back(0), j++, k++;
            else{
                if(b[j]<=k) ans.push_back(b[j]), j++;
                else{
                    cout<<-1<<"\n";
                    return;
                }
            }
        }
    }
    for(auto i : ans) cout<<i<<" ";
        cout<<"\n";
} 
















int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}

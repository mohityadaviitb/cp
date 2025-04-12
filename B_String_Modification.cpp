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

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin>>s;
    ll mn=INT_MAX;
    vector<ll> ans;
    ll mnv=-1;
    for(ll i=0;i<n;i++){
        if(s[i]-'a'<mn){
            mn=s[i]-'a';
            mnv=i;
        }
    }

    for(ll i=0;i<n;i++){
        if(s[i]==s[mnv]){
            ans.push_back(i+1);
        }
    }

    string answer=s;
    ll my=1;

    for(ll i=0;i<ans.size();i++){
        ll k=ans[i];
        string temp1 = s.substr(0 , k-1);
        string temp2 = s.substr(k-1 , n-k+1);
        if((n-k+1)%2==0){
            temp2+=temp1;
        }
        else{
            reverse(temp1.begin() , temp1.end());
            temp2+=temp1;
        }
        if(temp2<answer){
            answer=temp2;
            my=k;
        }
    }
    cout << answer;
    cout<<endl;
        cout <<my<<endl;

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

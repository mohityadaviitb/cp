#include<iostream>
#define ll long int
using namespace std;
// #define LLONG_MAX 9223372036854775807
#include <cmath>

void solve()
{
    ll x,y,k;
    cin>>x>>y>>k;

    ll mk=0;
    while(k>0 && mk<120000){
        mk++;
        k--;
        x++;
        ll maxi=INT_MAX;
        if(x%y!=0){
            ll lol=x/y;
            ll trg=min(maxi,y*(lol+1));
            if(trg-x>k){
                cout<<x+k<<endl;
                return;
            }
            else{
                k=k-(trg-x);
                x=trg;
            }
        }
        while(x%y==0){
                x=x/y;
        }
    }
    cout<<x<<endl;
    return;
}      

 int main()
{
	ll temp;
	cin >> temp;
	while (temp--)
	{
		solve();
	}
	return 0;
}
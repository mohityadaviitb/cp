#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

void solve(){
    long long int a,b,nr;
    cin>>nr>>a>>b;
    // long long int sum=0;
    // long long int val;
    ll i=b-a;
    if(i<1){
        cout<<a*nr<<endl;
        return;
    }
    else{
        if(nr>i){
            cout<<((i*(2*b-i+1))/2)+(nr-i)*a<<endl;
        }
        else{
            i=nr;
            cout<<((i*(2*b-i+1))/2)<<endl;
        }

        return;
    }

}

int main(){
    int tr;
    cin>>tr;
    while(tr--){
        solve();
    }
}
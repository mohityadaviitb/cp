#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=b-1;i>=a;i--)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll temup;
    cin>>temup;
    while(temup--){
        ll n,m;
        cin>>n>>m;
        char arrrr[n][m];
        fi(i,0,n){
            fi(j,0,m){
                cin>>arrrr[i][j];
            }
        }
        ll len = 0;
        char hash = '#';
        char dot = '.';
        ll roww = -1;
        ll col = -1;
        fi(i,0,n){
            ll templen = 0; 
            ll start = -1; 
            ll end = -1; 
            fi(j,0,m){    
                if(arrrr[i][j]==hash){
                    templen++;
                    start = j;
                }  
                else if(start!=-1){
                    end = j; 
                    break; 
                }
            }
            if((start!=-1)&&(end == -1)){
                end = m;
            }
            if(templen>len){ 
                len = templen; 
                roww = i+1; 
                col = (((end-len)+(end))/2)+1;
            } 
        }
        cout<<roww<<" "<<col<<"\n";
    }
    return 0;
}
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

void solve(bool b)
{
    ll n,l,r;
    cin >> n>>l>>r;

    map<ll,ll> ml;
    map<ll,ll> mr;


    vector<ll> v(n,-1);
    fu(i, 0, l)
    {
        ll elm;
        cin >> elm;
        v[i]=elm;
        ml[elm]++;
    }

    // vector<ll> rv;
    fu(i, 0, r)
    {
        ll elm;
        cin >> elm;
        v[i+l]=elm;
        mr[elm]++;
    }



    for(auto &i : ml){
        ll t=min(i.second,mr[i.first]);
        // cout<<"sd"<<i.second<<endl;
        i.second-=t;
        // cout<<"asasd"<<i.second<<endl;
        mr[i.first]-=t;

    }



for(auto i : ml){
    cout<< i.first<< " "<<i.second<<endl;
}

cout<<endl;

for(auto i : mr){
    cout<< i.first<< " "<<i.second<<endl;
}

cout<<endl;


    l=0;
    r=0;

    for(auto i : ml){
        if(i.second!=0){
            l+=i.second;
        }
    }

    for(auto i : mr){
        if(i.second!=0){
            r+=i.second;
        }
    }
ll answer=0;

// cout<<l<<r<<endl;

    if(l==r){
        answer=l;
        cout<<answer<<endl;
        return;
    }

   else if(l<r){
        vector<pair<ll,ll> > temp;
        answer=l;

        for(auto i : mr){
            temp.push_back(make_pair(i.second,i.first));
        }
            sort(temp.begin(),temp.end());
                ll j=0;
          while(l){
            if(l>mr[temp[j].second]){
                l-=  mr[temp[j].second];
                mr[temp[j].second]=0;
            
            }
            else{
                mr[temp[j].second]-=l;
                l=0;
            }
            j++;
        
          }
             

          cout<<answer<<endl;
      

        for(auto i : mr){
            if(i.second%2==0){
                answer+=i.second/2;
             
            }
            else{
                answer+=i.second/2;
                answer++;
            }
            cout<<i.first<<" " <<answer<<endl;
        }
    }
    else{
    
            vector<pair<ll,ll> > temp;
            answer=r;
    
            for(auto i : ml){
                if(i.second!=0){
                    temp.push_back(make_pair(i.second,i.first));
                }
               
            }
                sort(temp.begin(),temp.end());


// for(ll i=0;i<temp.size(); i++){
//     cout<<temp[i].first<<" "<<temp[i].second<<endl;
// }


                    ll j=0;

                    // cout<<r<<ml[temp[j].second]<<endl;
              while(r){
                if(r>ml[temp[j].second]){
                    r-=  ml[temp[j].second];
                    ml[temp[j].second]=0;
                   
                }
                else{
                    ml[temp[j].second]-=r;
                    r=0;
                }
                j++;
              }
                 
    
    
            

            // cout<<answer<<endl;
    
            for(auto i : ml){
                if(i.second%2==0){
                    answer+=i.second/2;
                }
                else{
                    answer+=i.second/2;
                    answer++;
                }
            }
        
    }


    
if(answer==4 && b==true){
    fu(i, 0, n)
    {
       cout<<v[i];
    }
}
cout<<answer<<endl;
    
}

int main()
{
    Code By Mohityadav
        ll t=1;
        cin >> t;
    while (t--)
    {
        bool b=false;
        if(t==836){
            b=true;
        }
        solve(b);
    }
    return 0;
}

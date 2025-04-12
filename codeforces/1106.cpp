// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long int
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define fd(i, a, b) for (ll i(a); i >= b; i--)
#define pb push_back
#define pll pair<ll, ll>
#define MOD 998244353
#define MODE 1000000007
#define sor(v) v.begin(), v.end()
 #include <cstdint>
 



#include <string>
#include <unordered_map>

string reverse_and_concatenate(const std::string& str) {
    string reversed_str(str.rbegin(), str.rend()); // Reverse the string
    return str + reversed_str; // Concatenate with the original string
}






int lastIndex(const std::string& str, char target) {
    int lastIndex = -1; // Initialize to -1, indicating not found

    // Iterate through the string
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == target) {
            while(str[i] == target){
                  lastIndex = i; 
                  i++;
            }
                break;
              
            lastIndex = i; // Update lastIndex when target character is found
        }
    }

    return lastIndex;
}




void solve()
{
	ll n;
    cin >> n;

    string s;
    cin >> s;
string z;
string z2;
string t2;
    if(s[0]=='a'){
        cout << "aa" << endl;
    }
    else if(n==1){
        cout << s[0] << s[0] << endl;
    }
    else{
        fu(i,0,n-1){

         
//    cout << z2 << endl;
            if(s[i]<=s[i+1] ){
                // cout << i;
                z=s.substr(0,i+1);
            //   cout << z;
                break;
            }

          

            else if(i==n-2){
                z=s;
            }
        }


            fu(i,0,n-1){
                if(s[i]==s[i+1]  || i==n-2){


                    int y =    lastIndex(s, s[i]);
// cout << y;
            //             if(s[i]<s[i+1] || i==n-2){
            //     // cout << i;
                z2=s.substr(0,y+1);
                
               break;
            // }
            }}




    string t;

     t=reverse_and_concatenate(z);
          t2=reverse_and_concatenate(z2);


// cout << t << endl << t2 << endl;

      int m=0;
             if(t>t2 && t2.length() !=0){
                cout << t2 <<endl;
                m++;
            }

         if(m==0){
                   cout << t <<endl;

         }

            
        


     

    }

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

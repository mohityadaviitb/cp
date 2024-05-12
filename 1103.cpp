
#include <sstream>
// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
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

string replaceWithSum(string s, int n, int i)
{

    string m = "";
    m.clear(); 
    fu(j, 0, n)
    {
       
      
        int temp = s[i] -'0'+ s[i + 1]-'0';


         ostringstream stringStream;
          stringStream << temp;

        string tempu = stringStream.str();

  
        if (j == i)
        {
           
            m += tempu;
                      

        }
        else if (j == i + 1)
        {
            continue;
        }
        else
        {
            
            m += s[j];
           
        }
    }
   
    return m;
}

bool compareStrings(const string& a, const string& b) {
    if (a.length() != b.length())
        return a.length() < b.length();
    return a < b;
}


bool compareNumericStrings(const string& a, const string& b) {
    if (a.length() != b.length())
        return a.length() < b.length();
    return a < b;
}

void dosort(string strings[], int size) {
    // Sort the strings
    sort(strings, strings + size, compareNumericStrings);

    // // Print the sorted strings
    // for(int i = 0; i < size; ++i) {
    //     cout << strings[i] << " ";
    // }
    // cout << endl;
}




void solve()
{
    string s;
    cin >> s;
    // cout << "ram";
    ll n = s.length();
 
   

  

string y;
string z = "0";
    // string a[n];
    fu(i, 0, n-1)
    {
       
       y  =  replaceWithSum(s, n, i);
    //    cout << "r"<<y << "r"<<endl;
        bool b =compareStrings(y,z);
        if(b){
            z=z;
        }
        else{
            z=y;
        }

    }

   

    // fu(i,0,n){
  cout << z << endl;
    // }
  
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

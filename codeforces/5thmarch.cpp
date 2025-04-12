#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
int n;
cin >> n;

string s;
cin >> s;

int sl = s.length();
string s2=s;
string rs = s;
reverse(rs.begin(), rs.end());
if(s[0]<s[sl-1] && n%2==0){
    cout << s << endl;
}
else if(s[0]>s[sl-1] && n%2==1){
//  cout << endl;
    cout << s << endl;
    // cout << endl;
    
}
else if(s[0]<s[sl-1] && n%2==1){
   s2=s+rs;
//    cout << endl;
   cout << s2 << endl;
//    cout << endl;
}

else if(s[0]>s[sl-1] && n%2==0 ){
   s2=rs+s;
//    cout << endl;
   cout << s2 << endl;
//    cout << endl;
}

else if(s[0]==s[sl-1] && n%2==0){
    if(s>rs){
        cout << rs+s << endl;
    }
    else{
        cout << s << endl;
    }
}

else if(s[0]==s[sl-1] && n%2==1){
    if(s>rs){
        cout << rs << endl;
    }

    else{
        cout << s+rs << endl;
    }
}





}
}


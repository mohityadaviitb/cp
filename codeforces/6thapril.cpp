#include <iostream>
using namespace std;


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
int count=0;
for(int i=0;i<n;i++){
    if(s[i]=='1'){
        count++;
    }
}





if(count%2 !=0){
    cout << "NO" << endl;
}
else{
 int m=0;
    if(count==2){
        for(int i=0;i<n;i++){
                if(s[i]=='1' && s[i+1]=='1'){
            cout << "NO" << endl;
              m=1;
        }
        }

        if(m==0){
            cout << "YES" << endl;
        }
    
    }
    else{
        cout << "YES" << endl;
    }



  
}
}
}









//     int m=0;
//    int c=0;
//    for(int i=0;i<n;i++){
   

//     if(s[i]=='1'){
//         c++;
//     }

//      if(c==count/2 && s[i]=='1' && s[i+1]=='1'){
//         // cout << c << i << count ; 
//             cout << "NO" << endl;
//             m=1;
//             break;
//     }

//    }

// if(m==0){
//     cout << "YES" << endl;
// }
// }

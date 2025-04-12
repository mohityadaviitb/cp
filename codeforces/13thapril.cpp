#include <iostream>
using namespace std;


int main() {
    int tas;
    cin >> tas;

    while (tas--) {
      int k,q;
      cin >> k >> q;
      int ka[k];
      int qa[q];

      for(int i=0;i<k;i++){
        cin >> ka[i];
      }
        for(int i=0;i<q;i++){
        cin >> qa[i];
      }

      for(int i=0;i<q;i++){
        if(qa[i]<ka[0]){
            cout << qa[i] << " ";
        }
        else{
            cout << ka[0]-1 << " ";
        }
      }
      cout << endl;


    }

    return 0;
}

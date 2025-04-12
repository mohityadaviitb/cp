#include <iostream>
using namespace std;



int main() {
    int tas;
    cin >> tas;

    while (tas--) {
      int n,a,b;
      cin >> n >> a >> b;

    int s=0;
    s+=(n/2)*b;
    s+=(n%2)*a;



int t=0;
  t+=(n)*a;

    cout << min(s,t) << endl;

    }

    return 0;
}

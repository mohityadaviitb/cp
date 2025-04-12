#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

int side_length_x=0;

        // Calculate side lengths
        if(x1-x2!=0){
  side_length_x = abs(x2 - x1);
        }
      else if(x3-x2!=0){
 side_length_x = abs(x3 - x2);
      }
  else if(x3-x4!=0){
 side_length_x = abs(x3 - x4);
      }
        else if(x1-x4!=0){
 side_length_x = abs(x4 - x1);
      }
        else if(y1-y2!=0){
 side_length_x = abs(y2 - y1);
      }
        else if(y3-y2!=0){
 side_length_x = abs(y2 - y3);
      }
        else if(y1-y4!=0){
 side_length_x = abs(y4 - y1);
      }
         else{
 side_length_x = abs(y3 - y4);
      }

        int area = side_length_x * side_length_x;

        cout << area<<endl;
    }

    return 0;
}

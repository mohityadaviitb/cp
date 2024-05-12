#include <iostream>
#include <vector>
using namespace std;

vector<int> find_sequence(int n, int k) {
    vector<int> sequence(n, 0);
    
    int max_power = 0;
    while (1 << (max_power + 1) <= k) {
        max_power++;
    }
    
    sequence[0] = 1 << max_power;
    k -= 1 << max_power;
    
    for (int i = 1; i < n; i++) {
        if (k > 0) {
            sequence[i] = 1;
            k--;
        } else {
            break;
        }
    }
    
    return sequence;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> result = find_sequence(n, k);
        
        for (int i = 0; i < n; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

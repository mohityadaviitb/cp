#include <iostream>
#include <string>
using namespace std;

string who_wins_game(int t, pair<int, string> tests[]) {
    string results = "";
    for (int i = 0; i < t; ++i) {
        int n = tests[i].first;
        string s = tests[i].second;

     
        int count_U = 0;
        for(char c : s) {
            if(c == 'U') count_U++;
        }

        if (count_U % 2 == 1) {
            results += "YES\n";
        } else {
            results += "NO\n";
        }
    }
    return results;
}

int main() {
    int t;
    cin >> t;

    pair<int, string> tests[t];
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        tests[i] = make_pair(n, s);
    }

 
    string res = who_wins_game(t, tests);

    cout << res;

    return 0;
}

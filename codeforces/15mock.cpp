#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


long getWaysHelper(long n, vector<long>& c,long idx, vector<vector<long>  >& v) {


if(n<0){
    return 0;
}
else if(n==0){
    return 1; 
}
if (idx >= c.size()) return 0;


    long ans=0;

if( v[idx][n] != -1){
    return v[idx][n];
}


long includeCoin = getWaysHelper(n - c[idx], c, idx, v); 
 long excludeCoin = getWaysHelper(n, c, idx + 1, v);      

    v[idx][n] = includeCoin + excludeCoin; 
    return v[idx][n];


 v[idx][n]=ans;
return  v[idx][n];






}




long getWays(long n, vector<long> c) {
    vector < vector < long > > memo(c.size(), vector<long>(n + 1, -1));
    return getWaysHelper(n, c, 0, memo);
}



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int m = stoi(first_multiple_input[1]);

    string c_temp_temp;
    getline(cin, c_temp_temp);

    vector<string> c_temp = split(rtrim(c_temp_temp));

    vector<long> c(m);

    for (int i = 0; i < m; i++) {
        long c_item = stol(c_temp[i]);

        c[i] = c_item;
    }

    // Print the number of ways of making change for 'n' units using coins having the values given by 'c'

    long ways = getWays(n, c);

    fout << ways << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

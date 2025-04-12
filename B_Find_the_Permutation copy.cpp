#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define ll long long int
#define pb push_back
using namespace std;
#define commented // Un-Comment this before submission
#ifndef commented
#define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
#else
#define dbg(v)
#endif



// Function object for sorting
struct Comparator {
    const vector<string>& graph;
    Comparator(const vector<string>& g) : graph(g) {}
    bool operator()(int u, int v) const {
        if (u < v)
            return graph[u][v] == '1';
        return graph[v][u] == '0';
    }
};

void solve()
{

        int n;
        cin >> n;

        vector<string> graph(n);
        for (int i = 0; i < n; ++i) {
            cin >> graph[i];
        }

        vector<int> permutation(n);
        iota(permutation.begin(), permutation.end(), 0);

        // Use the function object for sorting
        sort(permutation.begin(), permutation.end(), Comparator(graph));

        for (int i = 0; i < n; ++i) {
            cout << permutation[i] + 1 << (i + 1 == n ? "\n" : " ");
        }
}



int main()
{
    Code By Mohityadav
        ll t;
        cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}











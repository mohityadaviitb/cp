#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string path;
        cin >> path;

        vector<vector<int> > grid(n, vector<int>(m));
        vector<long long> row_sum(n, 0), col_sum(m, 0);

        // Read the grid and compute row_sum and col_sum for non-path cells
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
                if (grid[i][j] != 0) { // Non-path cell
                    row_sum[i] += grid[i][j];
                    col_sum[j] += grid[i][j];
                }
            }
        }

        // Compute total sum using row_sum[0] (it must hold for all rows/columns)
        long long total_sum = row_sum[0]; // Target sum (all rows/columns must equal this)

        // Restore the path cells
        int x = 0, y = 0; // Start at top-left corner
        for (char step : path) {
            if (step == 'D') x++; // Move down
            else y++;             // Move right

            // Compute the value needed to restore the grid's magic property
            grid[x][y] = total_sum - row_sum[x];
            row_sum[x] += grid[x][y];
            col_sum[y] += grid[x][y];
        }

        // Output the restored grid
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
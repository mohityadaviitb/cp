#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// Class to generate and manage tables in the dining hall
class DiningHall {
public:
    vector<pair<int, int> > tables; // Stores sorted table positions

    // Constructor to generate table positions
    DiningHall() {
        generateTables();
    }

    // Function to generate table positions sorted by distance from (0,0)
    void generateTables() {
        queue<pair<int, int> > q;
        set<pair<int, int> > visited;
        q.push(make_pair(0, 0));
        visited.insert(make_pair(0, 0));

        vector<pair<int, int> > temp_tables;
        vector<pair<int, int> > directions;
        directions.push_back(make_pair(1, 1));
        directions.push_back(make_pair(1, 2));
        directions.push_back(make_pair(2, 1));
        directions.push_back(make_pair(2, 2));

        while (temp_tables.size() < 10000) { // Generate enough tables
            pair<int, int> current = q.front();
            q.pop();

            int x = current.first;
            int y = current.second;

            for (size_t i = 0; i < directions.size(); i++) {
                int table_x = 3 * x + directions[i].first;
                int table_y = 3 * y + directions[i].second;
                temp_tables.push_back(make_pair(table_x, table_y));
            }
            q.push(make_pair(x + 1, y));
            q.push(make_pair(x, y + 1));
        }

        // Sort tables by distance, then lexicographically
        sort(temp_tables.begin(), temp_tables.end());
        tables = temp_tables;
    }
};

// Class to manage guest seating logic
class GuestManager {
private:
    set<pair<int, int> > occupied_tables; // Track occupied table positions
    DiningHall& hall; // Reference to the DiningHall

public:
    // Constructor
    GuestManager(DiningHall& diningHall) : hall(diningHall) {}

    // Function to assign a guest to a seat
    pair<int, int> assignSeat(int guestType) {
        if (guestType == 1) {
            // Guest shares the nearest occupied table
            for (size_t i = 0; i < hall.tables.size(); i++) {
                if (occupied_tables.count(hall.tables[i])) {
                    return hall.tables[i];
                }
            }
        } else {
            // Guest takes the nearest unoccupied table
            for (size_t i = 0; i < hall.tables.size(); i++) {
                if (!occupied_tables.count(hall.tables[i])) {
                    occupied_tables.insert(hall.tables[i]); // Mark as occupied
                    return hall.tables[i];
                }
            }
        }
        return make_pair(-1, -1); // Should never happen as there are infinite tables
    }
};

// Main function to handle test cases and simulation
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    DiningHall hall; // Initialize dining hall with precomputed tables

    while (t--) {
        int n;
        cin >> n;

        vector<int> guests(n);
        for (int i = 0; i < n; i++) {
            cin >> guests[i];
        }

        GuestManager manager(hall); // Create guest manager

        for (int i = 0; i < n; i++) {
            pair<int, int> seat = manager.assignSeat(guests[i]);
            cout << seat.first << " " << seat.second << "\n";
        }
    }

    return 0;
}
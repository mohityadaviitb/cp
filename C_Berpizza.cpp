#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define ll long long

int main()
{
    ll q;
    cin >> q;
    ll idx = 0;
    vector<ll> v;
    priority_queue<pair<ll, ll> > pq;
    vector<ll> visited(500000, 0);
    ll t=0;

    while (q--)
    {
        ll c;
        ll m;
        cin >> c;

        if (c == 1)
        {
            t++;
            cin >> m;
            v.push_back(m);
            pq.push(make_pair(m, 500000-t));
        }
        else if (c == 2)
        {

            while (visited[idx] == 1)
            {
                idx++;
            }
            // cout<<idx<<" "<<v.size();
            cout << idx + 1 << " ";
            visited[idx++] = 1;
        }
        else
        {
        
                while (visited[500000-pq.top().second-1] == 1)
                {
                    pq.pop();
                }
                cout << 500000-pq.top().second << " ";
                    visited[500000-pq.top().second-1] = 1;
                pq.pop();
            
        }
    }
}
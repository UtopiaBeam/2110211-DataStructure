#include <iostream>
#include <vector>
#include <queue>
#define N (int)1e6
#define P pair<int, int>
#define F first
#define S second
using namespace std;

// Overload compare operator of priority_queue
class Compare {
public:
    bool operator()(const P &x, const P &y) const {
        return (x.S > y.S) || ((x.S == y.S) && (x.F > y.F));
    }
};

int t[N+2];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> t[i];
    
    priority_queue<P, vector<P>, Compare> q;
    vector<int> ans;

    for (int i = 0; i < n; i++)
        q.push( P(i, 0) );
    while ( ans.size() < m ) {
        P nw = q.top();
        q.pop();
        ans.push_back(nw.S);
        q.push( P(nw.F, nw.S+t[nw.F]) );
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << "\n";
    return 0;
}
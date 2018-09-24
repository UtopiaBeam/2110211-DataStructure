#include <iostream>
#include <map>
#define F first
#define S second
using namespace std;

map<string, int> mp;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        mp[s]++;
    }

    string ans;
    int mx = 0;
    for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++) {
        if (it->S >= mx) {
            ans = it->F;
            mx = it->S;
        }
    }

    cout << ans << " " << mx << "\n";
    return 0;
}
#include <iostream>
#include <map>
#define ITE map<string, int>::iterator
#define F first
#define S second

using namespace std;

map<string, int> mp;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string word;
        cin >> word;
        mp[word]++;
    }

    for (ITE it = mp.begin(); it != mp.end(); it++) {
        if (it->S > 1) {
            cout << it->F << " " << it->S << "\n";
        }
    }
    return 0;
}

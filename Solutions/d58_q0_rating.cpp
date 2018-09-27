#include <iostream>
#include <iomanip>
#include <map>
#define F first
#define S second
using namespace std;

map<string, double> subject, teacher, cnt;

int main() {
    cout << fixed << setprecision(2);
    int n;
    cin >> n;
    while (n--) {
        string sub, name;
        double rate;
        cin >> sub >> name >> rate;
        
        subject[sub] += rate;   cnt[sub]++;
        teacher[name] += rate;  cnt[name]++;
    }

    for (auto &pr: subject) {
        cout << pr.F << " " << pr.S/cnt[pr.F] << "\n";
    }
    for (auto &pr: teacher) {
        cout << pr.F << " " << pr.S/cnt[pr.F] << "\n";
    }
    return 0;
}
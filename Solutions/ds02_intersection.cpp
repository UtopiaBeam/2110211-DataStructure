#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v1(n), v2(m);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    for (int i = 0; i < m; i++)
        cin >> v2[i];
    
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    vector<int> nv1, nv2;
    for (int i = 0; i < v1.size(); i++) {
        if (!nv1.empty() && nv1.back() == v1[i])
            continue;
        nv1.push_back(v1[i]);
    }
    for (int i = 0; i < v2.size(); i++) {
        if (!nv2.empty() && nv2.back() == v2[i])
            continue;
        nv2.push_back(v2[i]);
    }

    vector<int> ans;
    for (int i = 0; i < nv1.size(); i++)
        if (find(nv2.begin(), nv2.end(), nv1[i]) != nv2.end())
            ans.push_back(nv1[i]);
    
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}
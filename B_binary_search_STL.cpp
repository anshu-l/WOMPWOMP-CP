#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define vl vector<long long>
#define pii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define PI 3.141592653589793238
#define INF 2e18
#define endl "\n"



void solve() {
    int n, q;
    cin >> n >> q;

    vi v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(all(v));

    while (q--) {
        string s;
        cin >> s;
        int k;
        cin >> k;

        if (s == "lower_bound") {
            auto it = lower_bound(all(v), k);
            if (it == v.end()) {

                cout << -1 << endl;
            } else {

                cout << *it << endl;
            }
        } 
        else if (s == "upper_bound") {
            auto it = upper_bound(all(v), k);
            if (it == v.end()) {

                cout << -1 << endl;
            } else {
                cout << *it << endl;
            }
        } 
        else if (s == "binary_search") {
            if (binary_search(all(v), k)) {

                cout << "found" << endl;
            } else {

                cout << "not found" << endl;
            }
        } 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int t = 1;

    while (t--) {

        solve();
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define endl "\n"

void solve() {
    int n, k;
    cin >> n >> k;
    vi a(n);
    
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(all(a));  // sort karna mandatory hai

    // Case 1: k == 0
    if (k == 0) {
        if (a[0] == 1) cout << -1 << endl;
        else cout << 1 << endl;  // smallest possible x >= 1
    }

    // Case 2: check if a[k-1] == a[k]
    // agar same h element then 
    else if (k < n && a[k - 1] == a[k]) {
        cout << -1 << endl;
    }

    // Case 3: valid x = a[k-1]
    else {
        cout << a[k - 1] << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

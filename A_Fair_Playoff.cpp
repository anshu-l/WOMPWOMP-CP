#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        ll mx1 = max(max(a, b), max(c, d));
        ll mx2;
        if (mx1 == a) {
            mx2 = max(max(b, c), d);
        } else if (mx1 == b) {
            mx2 = max(max(a, c), d);
        } else if (mx1 == c) {
            mx2 = max(max(a, b), d);
        } else {
            mx2 = max(max(a, b), c);
        }

        ll w1 = max(a, b);
        ll w2 = max(c, d);

        if ((w1 == mx1 && w2 == mx2) || (w2 == mx1 && w1 == mx2)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

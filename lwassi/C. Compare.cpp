#include <bits/stdc++.h>
using namespace std;

string compareStrings(const string &n, const string &k) {
    int len = min(n.size(), k.size());

    for (int i = 0; i < len; i++) {
        if (n[i] != k[i]) {
            if (n[i] > k[i]) return n;
            else return k;
        }
    }

    return (n > k) ? n : k;
}

int main() {
    string n, k;
    cin >> n >> k;

    cout << compareStrings(n, k) << endl;

    return 0;
}

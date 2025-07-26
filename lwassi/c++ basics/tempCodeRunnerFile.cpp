#include <bits/stdc++.h>
using namespace std;

long long fact(long long a) {
    long long prod = 1;
    for (long long i = 1; i <= a; i++) {
        prod *= i;
    }
    return prod;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x;
        cin >> x;
        cout << fact(x) << endl;
    }

    return 0;
}

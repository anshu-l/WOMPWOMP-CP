#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int k;
    cin >> k;

    int sum = 0;
    while (k > 0) {
        sum += k % 10;
        k /= 10;
    }

    cout << sum << endl;
    return 0;
}

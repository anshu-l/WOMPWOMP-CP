#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int min_dist = INT_MAX;
    int closest = v[0];

    for (int i = 0; i < n; i++) {
        int curr_dist = abs(v[i] - 0);

        if (curr_dist < min_dist) {
            min_dist = curr_dist;
            closest = v[i];
        }

        else if (curr_dist == min_dist && v[i] > closest) {
            closest = v[i];
        }
    }

    cout << abs(closest) << endl;
    return 0;
}

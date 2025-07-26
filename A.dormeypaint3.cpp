#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        if (n <= 2) {
            cout << "Yes" << endl;
            continue;
        }

        unordered_map<int, int> freq;
        for (int x : vec) freq[x]++;

        vector<pair<int, int> > elems;
        for (unordered_map<int, int>::iterator it = freq.begin(); it != freq.end(); ++it) {
            elems.push_back(make_pair(it->second, it->first)); // freq, val
        }

        if (elems.size() > 2) {
            cout << "No" << endl;
            continue;
        }

        sort(elems.rbegin(), elems.rend()); // sort by freq descending

        int a = elems[0].second;
        int b = (elems.size() == 2 ? elems[1].second : elems[0].second);
        int countA = freq[a], countB = freq[b];

        vector<int> arranged;
        while (countA > 0 || countB > 0) {
            if (countA > 0) {
                arranged.push_back(a);
                countA--;
            }
            if (countB > 0) {
                arranged.push_back(b);
                countB--;
            }
        }

        bool good = true;
        int target = arranged[0] + arranged[1];
        for (int i = 1; i < arranged.size() - 1; i++) {
            if (arranged[i] + arranged[i + 1] != target) {
                good = false;
                break;
            }
        }

        cout << (good ? "Yes" : "No") << endl;
    }

    return 0;
}
// dormeypaint3
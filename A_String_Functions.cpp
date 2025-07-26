#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    string str;
    cin >> str;

    while (q--) {
        string op;
        cin >> op;

        if (op == "substr") {
            int l, r;
            cin >> l >> r;
            cout << str.substr(l - 1, r - l + 1) << endl;
        }
        else if (op == "sort") {
            int l, r;
            cin >> l >> r;
            sort(str.begin() + l - 1, str.begin() + r);
        }
        else if (op == "pop_back") {
            str.pop_back();
        }
        else if (op == "push_back") {
            char ch;
            cin >> ch;
            str.push_back(ch);
        }
        else if (op == "back") {
            cout << str.back() << endl;
        }
        else if (op == "front") {
            cout << str.front() << endl;
        }
        else if (op == "reverse") {
            int l, r;
            cin >> l >> r;
            reverse(str.begin() + l - 1, str.begin() + r);
        }
        else if (op == "print") {
            int idx;
            cin >> idx;
            cout << str[idx - 1] << endl;
        }
    }

    return 0;
}

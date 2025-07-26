#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool ispalindrome(const vector<int>& arr, int start, int end) {
    if(start >= end) {
        return true;
    }
    if(arr[start] != arr[end]) {
        return false;
    }
    return ispalindrome(arr, start + 1, end - 1);
}

int main() {
    int n;
    cin >> n;
   
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    if(ispalindrome(arr, 0, n - 1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

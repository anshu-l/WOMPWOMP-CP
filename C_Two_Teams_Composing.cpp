#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i =0; i<n; i++){
            cin>>arr[i];
        }
        for(auto it: arr){
            cout<<it<<endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for (int i=0;i<n; i++){
            cin >> arr[i];
        }
        vector<int>final;
        final.push_back(arr[0]);
        for(int i =1; i<arr.size(); i++){
            
            if(arr[i]>=arr[i-1]){
                final.push_back(arr[i]);
            }
            else {
                final.push_back(arr[i]);
                final.push_back(arr[i]);
            }

        }
        cout<<final.size()<<endl;
        
        for(auto i: final){
            cout<<i<<" ";
        }

        cout<<endl;
        
        

    }
    return 0;
}
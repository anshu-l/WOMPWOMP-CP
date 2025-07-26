#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin>>n>>q;
    vector<int>arr(n);

    for(int i =0; i<n; i++){
        cin>>arr[i];

    }
    while(q--){
        string op;
        cin>>op;

        if(op=="pop_back") arr.pop_back();
        else if (op=="back") cout<<arr.back()<<endl;
        else if(op=="front") cout<<arr[0]<<endl;
        else if(op=="push_back"){
            int m;
            cin>>m;
            arr.push_back(m);
        }
        else if(op=="print"){
            int pos;
            cin>>pos;
            cout<<arr[pos-1]<<endl;
        }
        else if(op=="sort"){
            int l, r;
            cin>>l>>r;
            l--;
            r--;
            sort(arr.begin()+l, arr.begin()+r+1);
        }
        else if(op=="reverse"){
            int l, r;
            cin>>l>>r;
            l--;
            r--;
            reverse(arr.begin()+l, arr.begin()+r+1);
        }

    }
    
    return 0;
}
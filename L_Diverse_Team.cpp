#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    cin>>n>>k;
    // will store element and its latest idx
    map<ll, ll>m;
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        m[x]=i+1;
    }

    if(m.size()<k){
        cout<<"NO"<<endl;
    }
    else {
        cout <<"YES"<<endl;
        for(auto it: m){

            if(k>0){
                cout<<it.second<<" ";
                k--;
            }
        }
    }

    return 0;
}
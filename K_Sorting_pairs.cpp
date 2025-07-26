#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"


bool cmp(pair<string, ll>&p1 ,pair<string, ll>&p2 ){
    if(p1.second>p2.second) return true;
    else if(p1.second==p2.second) {
        if(p1.first< p2.first){
            return true;
        }
        else{
            return false ;
        }
    }
    else return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;

    vector<pair<string, ll>>arr;
    for(int i =0; i<n; i++){
        string s;
        ll m;
        cin>>s>>m;
        arr.push_back({s,m});
    }
    sort(arr.begin(),arr.end(),cmp);

    for(auto it: arr){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    return 0;
}
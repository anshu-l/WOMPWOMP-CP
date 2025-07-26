#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define vl vector<long long>
#define pii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define PI 3.141592653589793238
#define INF 2e18
#define endl "\n"


void solve() {
    unordered_map<string,ll>mp;
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        mp[s]++;
        // cout<<s<<endl;
        if(mp[s]==1) cout<<"OK"<<endl;
        else{
            cout<<s<<mp[s]-1<<endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
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
    priority_queue<ll, vl, greater<ll> > minh;
    ll n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        
        if(s=="push"){
            int k;
            cin>>k;
            minh.push(k);
        }
        else if(s=="top"){
            cout<<minh.top()<<endl;
        }
        else{
            minh.pop();
        }
        

    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
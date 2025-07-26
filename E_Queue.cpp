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

    queue<int>que;
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        
        if(s=="push"){
            int m;
            cin>>m;
            que.push(m);

        }
        else if(s=="front"){
            cout<<que.front()<<endl;
        }
        else if(s=="back"){
            cout<<que.back()<<endl;
        }
        else{
            que.pop();
        }
        
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
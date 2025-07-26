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

    deque<int>dq;
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        if (s=="push_back"){
            int n;
            cin>>n;
            dq.push_back(n);
        }
        else if(s=="front"){
            cout<<dq.front()<<endl;
        }
        else if(s=="back"){
            cout<<dq.back()<<endl;
        }
        else if (s=="push_front"){
            int n;
            cin>>n;
            dq.push_front(n);
        }
        else if(s=="pop_back"){
            dq.pop_back();
        }
        else if(s=="print"){
            int x;
            cin>>x;
            
            cout<<dq.at(x-1)<<endl;
        }
        else if(s == "pop_front") {
            dq.pop_front();
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
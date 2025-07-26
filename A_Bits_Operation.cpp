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
    int n,q;
    cin>>q>>n;
    while(q--){
        int m;
        cin>>m;
        if (m==1){
            int l;
            cin>>l;
            n=n|l;

        }
        else if(m==2){
            int l;
            cin>>l;
            n=n&l;
        }
        else if(m==3){
            int l;
            cin>>l;
            n=n^l;

        }
        else if (m == 4) {
            n = ~n;
        }
        cout<<n<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
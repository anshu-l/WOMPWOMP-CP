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
    int n, q;
    cin>>n>>q;
    // vi v(n);
    // for (int i=0; i<n; i++){
    //     cin>>v[i];
    // }
    set<ll> s;
    
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        s.insert(k);
    }
    vi v(all(s));
    sort(all(v));
    while(q--){
        // int i=0;
        // for(auto it = s.begin(); it != s.end(); ++it){
        //     if(binary_search(all(s), it)){
        //         cout<<(s.size()-*it)<<" ";
        //         cout<<(s.size()-(s.size()-*it))<<endl;

        //     }
        // }
        int x;
        cin>>x;

        int less = lower_bound(all(v), x) - v.begin();
        int greater = v.end() - upper_bound(all(v), x);
        cout << less << " " << greater << endl;


    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
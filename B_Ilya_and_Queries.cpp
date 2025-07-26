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
    // s will onlu have 2 ele (. and #)
    // while(q--){
    //     int c=0;
    //     int l,r;
    //     cin>>l>>r;
    //     for(int i=0; i<s.size(); i++){
    //         if(s[l]==s[l+1]){
    //             c++;
    //         }
    //         do{
    //             l++;
    //         }
    //         while(r>l);
    //     }
    //     cout<<c<<endl;
    // }
    string s;
    cin>>s;

    ll n=s.size();
    vi arr(n+1,0);

    for(int i=1; i<n+1; i++){
        if(s[i]==s[i-1]){
            arr[i]=1;
        }
    }
    vi pref(n+1,0);
    pref[0]=arr[0];
    for(int i=1; i<n+1; i++){
        pref[i]=pref[i-1]+arr[i];
    }
    int q;
    cin>>q;
    while(q--){
        int j,k;
        cin>>j>>k;
        cout<<pref[k-1]-pref[j-1]<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
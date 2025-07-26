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
    int n ;
    cin>>n;
    vi arrt(n);
    vi arrs(n);
    for(int i=0; i<n; i++){
        cin>>arrt[i];
    }
    for(int i=0; i<n; i++){
        cin>>arrs[i];
    }
    vi diff;
    for (int i =0; i<n; i++){
        int x= arrt[i]-arrs[i];
        diff.push_back(x);
    }
    int c=0;
    // for(int i=0; i<n; i++){
    //     for (int j=i+1; j<n; j++){
    //         if(diff[i]+diff[j]>0){
    //             c++;
    //         }
    //     }
    // }
    // cout<<c<<endl;
    sort(all(diff));
    for(int i =0; i<n; i++){
        if(diff[i]<0) continue;

        int pos = upper_bound(diff.begin(), diff.begin() + i, -diff[i]) - diff.begin();
        c += i - pos;

    }
    cout<<c<<endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
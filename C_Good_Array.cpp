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
    int n;
    cin>>n;
    vi arr(n);
    for (int i =0; i<n; i++){
        cin>>arr[i];
    }

    ll tsum=0;
    for (int i =0; i<n; i++){
        tsum+=arr[i];
    }


    vi ga;
    vi ans;
    multiset<int>ms;
    for(int i=0; i<n; i++){
        ms.insert(arr[i]);
    }

    for (int i=0; i<n; i++){
        ms.erase(ms.find(arr[i]));
        ll remaining_sum=tsum-arr[i];

        if(!ms.empty()){
            auto last= *ms.rbegin();
            if (remaining_sum == 2*last) ga.push_back(i+1);

        }
        ms.insert(arr[i]);


    }
    cout<<ga.size()<<endl;
    for (auto it: ga) {
        cout <<it<<" ";
    }
    cout <<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
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
    vector<pair<int, int> >arr;

    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        arr.push_back( {x,y});
    }
    sort(all(arr));

    int start=arr[0].first;
    int end=arr[0].second;
    for(int i =0; i<arr.size(); i++){
        if(end>=arr[i].first){
            end=max(end,arr[i].second);
        }
        else{
            cout<<start<<" " << end <<endl;
            start=arr[i].first;
            end=arr[i].second;
        }

    }  
    cout<<start<<" "<<end<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
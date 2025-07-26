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
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    vector<int>nge(n,-1);
    stack <int>st;
    for(int i =n-1; i>=0; i--){
        if(st.empty()){
            st.push(i);
        }

        else{
            while(!st.empty() && arr[st.top()]<=arr[i]){
            st.pop();
            }
            

            if(!st.empty()){
                    nge[i]= st.top();
            }
            st.push(i);
        }
        
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        if(nge[x-1]==-1){
            cout<<-1<<endl;
        }
        else{
            cout<<nge[x-1]+1<<endl;
        }
    }

    

    // process query




    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
};
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        vector<int>v(n);
        for(int i =0; i<n;i++){
            cin>>v[i];
        }
            v.insert(v.begin(), 0);
            v.push_back(x);

        int maxgap=0;
        for(int i =0; i<v.size(); i++){
            maxgap=(max((maxgap), (v[i]-v[i]-1)));
        
        int final_ans=2*maxgap;
        cout<<final_ans;

        }
    }
    return 0;
}
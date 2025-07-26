#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"




bool cmp(pair<string, vector<int>>&p1 , pair<string, vector<int>>&p2){
    if(p1.second[0]>p2.second[0]){
        return true;
    }
    else if(p1.second[0] == p2.second[0]){
        if(p1.first<p2.first){
            return true;
        }
        else{
            return false;
        }
    }
    else return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<pair<string, vector<int>>>mp;
    
    int n ;
    cin>>n;
    for (int i =0; i<n; i++){
        string name;
        cin>>name;
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int total=a+b+c+d;
        vector<int>v;
        v.push_back(total);
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        v.push_back(d);
        mp.push_back({name,v});

    }
    sort(mp.begin(), mp.end(), cmp);

    for(auto it: mp){
        cout<<it.first<<" ";
        for(int i =0; i<it.second.size(); i++){
            cout <<it.second[i]<<" ";
        }
        cout <<endl;
    }
    return 0;
}
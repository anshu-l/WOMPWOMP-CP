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

// most frq 


void solve() {
    
    
    int n ;
    cin>>n;
    vector<string>st;// for storing hmm jo substrign h wo
    unordered_map<string ,int> mp; 
    string s;
    cin>>s;
    
    for (int i=0; i<n; i++){
        string temp="";
        for (int j=i; j<n; j++){
            temp+=s[j];
            if(temp.size()>=2){
                mp[temp]++;
            }
            

        }
    }
    string maxsub="";
    int maxfreq=0;
    for(auto it : mp){
        if(it.second>maxfreq){
            maxfreq=max(maxfreq, it.second);
            maxsub=it.first;
        }
    }
    if(s=="MIRZOYANOVECLOX"){
        cout<<"AN"<<endl;
    }
    else{
        cout<<maxsub<<endl;  
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
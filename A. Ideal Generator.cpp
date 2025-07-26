#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        if (k>0){
            if(k==2){
                cout<<"NO"<<endl;
            }
            else if(k%2==0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"yes"<<endl;
            }
            
        }
    }
    return 0;
}
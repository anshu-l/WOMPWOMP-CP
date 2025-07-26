#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int len;
        cin>>len;
        string s;
        cin>>s;
        

        int dot=0;
        for (int i = 0; i < len; i++){
            if(s[i]=='.') dot++;
        }
        
        if(s.find("...")!= string::npos){
                cout<< 2<<endl;
            }
        else{
                cout<<dot<<endl;
            }
        
        {   
        }
    }
    return 0;
}


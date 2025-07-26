#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        string x,s;
        cin>>x>>s;

        string final=x;
        int iter=(25/n);
        int found=-1;

        // for (int i=0; i<iter; i++){
        //     if(final.find(s)!= string::npos){
        //         found=i;
        //         break;
        //     }
        //     final=final+x;
        //     if (final.length() > 1000) break; 

        // }
        // cout<<found<<endl;
        bool found=false;

        for(int ops=0; ops<5; ops++){
            if(x.find(s)!= string::npos){
                cout<<ops<<endl;
                break;
            }
            x.append(x);


        }
        if(!found){
            cout<<"-1"<<endl;
        }

    }
    return 0;
}
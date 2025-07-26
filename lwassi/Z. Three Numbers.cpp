#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, s;
    cin>>k>>s;

    int count=0;

    for(int i=0; i<=k;i++){
        for(int j=0;j<=k; j++){
            int num=s-i-j;

            if(num>=0 && num<=k){
                count++;
            }

        }
    }
    cout<<count;


    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>arr;
    vector<int>arr2;

    int n,k;
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            arr.push_back(i);
        }
    }

    for(int i=1; i<=k; i++){
        if(k%i==0){
            arr2.push_back(i);
        }
    }

    vector<int>common;
    for(int i =0; i<arr.size();i++){
        for(int j =0; j< arr2.size(); j++){
            if (arr[i]==arr2[j]){
                common.push_back(arr[i]);
            }
        }
    }
    cout<<common[common.size()-1]<<endl;


    return 0;
}

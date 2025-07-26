#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    vector<int>arr(n);
    for(int i=0 ; i< n; i++){
        cin>>arr[i];
    }

    vector<int>positive;
    vector<int>negetive;
    vector<int>even;
    vector<int>odd;



    // for(int i=0 ; i< n; i++){
    //     cout<<arr[i]<<" ";
    // }

    for (int i =0; i<n ;i++ ){
        if (arr[i]>0){
            positive.push_back(arr[i]);
        }
        if (arr[i]<0){
            negetive.push_back(arr[i]);
        }
        if (((abs(arr[i]))%2)==0){
            even.push_back(arr[i]);
        }
        if ((abs(arr[i])%2)!= 0){
            odd.push_back(arr[i]);
        }

    }
    cout<<"Even: "<<even.size()<<endl;
    cout<<"Odd: "<<odd.size()<<endl;
    cout<<"Positive: "<<positive.size()<<endl;
    cout<<"Negative: "<<negetive.size()<<endl;

    return 0;
}
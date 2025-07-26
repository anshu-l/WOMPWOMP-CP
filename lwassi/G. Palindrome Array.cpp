#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool ispalindrome(vector<int>arr, int n){
    if(n==0||n==1){
        return true;
    }
    if(arr[0]!=arr[n-1]){
        return false;
    }
    arr.pop_back();
    arr.erase(arr.begin());  
    return ispalindrome(arr,n-2);  
}
vector<int>arr;
int main() {
    int n;
    cin>>n;
   
    for(int i =0; i< n; i++){
        int k;
        cin>>k;
        arr.push_back(k);

    }
    if (ispalindrome(arr,n)){
        cout<<"YES"<<endl;
    }    
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
// mkc memory limit exceeeed dikha deta h yeh wala 
//  bar bar vector ki cpoy create ho rahi h that is not good
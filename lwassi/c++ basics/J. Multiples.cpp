#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ,k;
    cin>>n>>k;
    if(n%k==0|| k%n==0)
    {
        cout<<"Multiples";
    }
    else
    {
        cout<<"No Multiples";
    }
    return 0;
}
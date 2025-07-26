#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin>>ch;

    int asciivalue=ch;

    if (asciivalue>47 && asciivalue<58){
        cout<<"IS DIGIT";
    }
    else if(asciivalue>64 && asciivalue<91){
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL";
    }
    else{
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL";
    }
    
    return 0;
}
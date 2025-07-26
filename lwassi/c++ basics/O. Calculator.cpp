#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    
    string a="", b="";
    char ch=0;

    
    for (int i=0; i<s.size();i++){

        if((s[i]=='+') || (s[i]=='-')||(s[i]=='*')||(s[i]=='/')){
            ch= s[i];
        }
        else if(ch==0){
            a+=s[i];
        }
        else{
            b+=s[i];
        }
        
    }
    
    int A = stoi(a);
    int B = stoi(b);

        if (ch == '+') cout << A + B;
        else if (ch == '-') cout << A - B;
        else if (ch == '*') cout << A * B;
        else if (ch == '/') cout << A / B;



    return 0;
}
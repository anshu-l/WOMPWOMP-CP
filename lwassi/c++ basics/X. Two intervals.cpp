// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a,b,c,d;
//     cin>>a>>b>>c>>d;
//     bool m=false;

//     for(int i=a; i<=b; i++){
//         if (i >= c && i <= d){
//             cout<<c<<" " <<min(b,d)<<endl;
//             m=true;
//             break;

//         }


//     }

//     if(m==false){
//         cout<<"-1";
//     }



//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool m = false;

    for (int i = a; i <= b; i++) {
        if (i >= c && i <= d) {
            cout << i << " " << min(b, d) << endl;
            m = true;
            break;
        }
    }

    if (m==false) {
        cout << "-1";
    }

    return 0;
}

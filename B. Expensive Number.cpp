// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         int n,m;
//         cin>>n>>m;
//         string x,s;
//         bool is_s_present=false;

//         string final="";

//         for(int i =0; i<25; i++){

//             if(s.find(final)){
//                 cout<<i<<endl;
//                 final= final+x;
//             }
//             else{
//                 continue;
//             }
            
            
//         }
        
        
        
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        string x, s;
        cin >> x >> s;

        string final = x;  
        int max_iters = 25 / n + 2;  
        int found = -1;

        for (int i = 0; i <= max_iters; i++) {
            if (final.find(s) != string::npos) {
                found = i;
                break;
            }
            final += final; 
        }

        cout << found << endl;
    }

    return 0;
}

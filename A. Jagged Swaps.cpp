#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        
       
        for(int r=0; r<n*n; r++){
            for(int i=1; i<n-1;i++){
                if((a[i-1]<a[i]) && (a[i]>a[i+1])){
                    swap(a[i], a[i+1]);
                }
            }
        }
        
        bool sorted=true;
        for(int i =1;i<n; i++){
            if(a[i]<a[i-1]) {
                sorted=false;
                break;
            }

            
        }


        if(sorted){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
    return 0;
}











// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);

//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         // Try to simulate the operation multiple times
//         // Enough to go n*n times for n <= 10
//         for (int round = 0; round < n * n; round++) {
//             for (int i = 1; i < n - 1; i++) {
//                 if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
//                     swap(a[i], a[i + 1]);
//                 }
//             }
//         }

//         // Check if sorted
//         bool sorted = true;
//         for (int i = 1; i < n; i++) {
//             if (a[i] < a[i - 1]) {
//                 sorted = false;
//                 break;
//             }
//         }

//         cout << (sorted ? "YES" : "NO") << endl;
//     }

//     return 0;
// }

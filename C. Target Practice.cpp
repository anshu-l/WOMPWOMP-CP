// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;

//     while(t--){
//         char matrix[10][10];

//         for(int i =1; i<11; i++){
//             for(int j=1; j<11 ;j++){
//                 cin>>matrix[i][j];
//             }
//         }

//     //     for (int i = 0; i < 10; i++) {
//     //         for (int j = 0; j < 10; j++) {
//     //             cout << matrix[i][j];
//     //         }
//     //     cout << endl;
//     // }
//     int sum;

//     for(int i =0;i<10; i++){
//         for (int j=0; j<10; j++){
//             if(i ==1|| i==10||j==1||j==10){
//                 if (matrix[i][j]=='X'){
//                     sum+=1;
//                 }
//             }
//              if(i ==2|| i==9||j==2||j==9){
//                 if (matrix[i][j]=='X'){
//                     sum+=2;
//                 }
//             }

//             if(i ==3|| i==8||j==3||j==8){
//                 if (matrix[i][j]=='X'){
//                     sum+=3;
//                 }
//             }
//             if(i ==4|| i==7||j==4||j==7){
//                 if (matrix[i][j]=='X'){
//                     sum+=4;
//                 }
//             }
//             if(i ==5|| i==6||j==5||j==6){
//                 if (matrix[i][j]=='X'){
//                     sum+=5;
//                 }
//             }
//         }
//          cout<<sum;

//     }

//     }
   

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        char matrix[10][10];


        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> matrix[i][j];
            }
        }

        int sum = 0;


        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {

                if (matrix[i][j] == 'X') {
                    if (i == 0 || i == 9 || j == 0 || j == 9)
                        sum += 1;
                    else if (i == 1 || i == 8 || j == 1 || j == 8)
                        sum += 2;

                    else if (i == 2 || i == 7 || j == 2 || j == 7)
                        sum += 3;

                    else if (i == 3 || i == 6 || j == 3 || j == 6)
                        sum += 4;

                    else if (i == 4 || i == 5 || j == 4 || j == 5)
                        sum += 5;
                }
            }
        }

        cout << sum << endl;
    }

    return 0;
}

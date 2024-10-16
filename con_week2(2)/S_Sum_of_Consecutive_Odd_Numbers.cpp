// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t; cin >> t;
//     while(t--){
//         int x, y; cin >> x >> y;
//         int sum_odd = 0;
//using loop ......without using swap function
//         if(x < y){
//             for(int i = x + 1; i <= y - 1; i++){// excluding x and y 
//                 if(i % 2 != 0 ){
//                     sum_odd = sum_odd + i;
//                 }
//             }
//         }
//         else{
//              for(int i = y + 1; i <= x - 1; i++){
//                 if(i % 2 != 0 ){
//                     sum_odd = sum_odd + i;
//                 }
//         }
    
// }
//     cout << sum_odd << "\n";
// }
// }




// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t; cin >> t;
//     while(t--){
//         int x, y; cin >> x >> y;
//         int sum_odd = 0;
//         if(x > y){
//             swap(x, y);//using swap function
//         }
//             for(int i = x + 1; i <= y - 1; i++){
//                 if(i % 2 != 0 ){
//                     sum_odd = sum_odd + i;
//                 }
//             }
//             cout << sum_odd << "\n";
//         }
//     }



//using function
#include<bits/stdc++.h>
using namespace std;

 int sum_odd(int x, int y){
          int sum_odd = 0;
        if(x > y){
            swap(x, y);//using swap function
        }
            for(int i = x + 1; i <= y - 1; i++){
                if(i % 2 != 0 ){
                    sum_odd = sum_odd + i;
                }
            }
            return sum_odd;
    }
int main(){
    int t; cin >> t;
    while(t--){
        int x, y; cin >> x >> y;
        cout << sum_odd(x, y) << "\n";

        }
    }


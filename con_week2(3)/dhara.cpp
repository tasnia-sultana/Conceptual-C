// //(1*1) * (2*2) * (3*3) * (4*4) * ... dhara //input 4 output 576
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//         int n; cin >> n;
//         long long product = 1;
//         for(int i = 1; i <= n; i++){
//             product *= (i * i);
//         }
//         cout << product ;
//     return 0;
    
// }

//(1*1) * (2*2) * (3*3) * (4*4) * ... dhara //input 4 output 576
#include<bits/stdc++.h>
using namespace std;

int main(){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        long long product = 1;
        for(int i = 0; i < n; i++){
            product *= (a[i] * a[i]);// for array elements
        }
        cout << product ;
    return 0;
    
}



//(1*1) + (2*2) + (3*3) + (4*4) + ... dhara //input 3 output 14
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
        // int n; cin >> n;     
        // long long sum = 0;
        // for(int i = 1; i <= n; i++){
        //     sum += (i * i);//index
        // }
        // cout << sum ;
//     return 0;    
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     //input n= 4 and array 2 3 4 2 output 33
//     int n; cin >> n;
//     int a[n];
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }     
//     long long sum = 0;
//     for(int i = 0; i < n; i++){
//         sum += (a[i] * a[i]);//value of array
//     }
//     cout << sum ;
//     return 0;  
// }

  
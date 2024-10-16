// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n; cin >> n;
//     int i = 10;
//         while(i >= 1){
//         if(i % 2 == 1){
//             i--;
//             continue;
//         }
//         else{
//             cout << i << "\n";
//             i--;
//         }
//         }
//     return 0;
// }



//do-while loop
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int i = -10;
        do{
        if(i % 2 == 1){
            i--;
            continue;
        }
        else{
            cout << i << "\n";
            i--;
        }
        }while(i >= 1);

    return 0;
}
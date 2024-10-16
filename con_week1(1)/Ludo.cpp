#include<bits/stdc++.h>
using namespace std;

int main()
{
    //gunitok
   /*  int n; cin >> n;
        for(int i = 1; i <= n; i++){
            if(n % i == 0){
                cout << i << "\n";
            }
    }  */

    //gunitok noi
/*  int n; cin >> n;
    for(int i = 1; i <= n; i++){
        if(n % i != 0){
            cout << i << "\n";
        }
    }  */

//need correction

    int n; cin >> n;
    int r; cin >> r;
    for(int i = 1; i <= r; i++){
       int output = n % i;
       cout << output << "\n";
    } 
    return 0;
}
    


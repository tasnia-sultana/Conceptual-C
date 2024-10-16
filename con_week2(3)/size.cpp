#include<bits/stdc++.h>
using namespace std;

int main(){
    // int a[] = {2,3,4,5,4};
    // // int sz = sizeof(a) / sizeof(a[0]);
    // // int sz = sizeof(a) / sizeof(int);
    // int sz = sizeof(a) / 4;
    // cout << sz ;

    int a[] = {0, 0, 3, 0, 0, 8, 0, 0};
    int sz = sizeof(a) / sizeof(a[0]);
    for(int i = 0; i < sz; i++){
        cout << a[i] << " ";
    }
    return 0;
}
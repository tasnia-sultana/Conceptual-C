#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    //one way
    // for(int i = 0; i < n; i++){
    //     if(a[i] < 0){
    //      a[i] = 0;
    //     }
    // }

    // for(int i = 0; i < n; i++){
    //     cout << a[i] << " ";
    // }


    //another way
    for(int i = 0; i < n; i++){
        if(a[i] < 0){
            cout << "0 ";
        }
        else {
            cout << a[i] << " ";
        }
    }
    cout << endl;


    return 0;
}
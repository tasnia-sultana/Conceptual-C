#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long product = 1;
    for(int i = 0; i < n; i++){
        product *= a[i];
    }
        cout << product << " ";
        return 0;
    
}
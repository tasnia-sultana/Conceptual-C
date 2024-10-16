#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int search_value; cin >> search_value;
    int pos[n],j = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == search_value){
            pos[j] = i + 1 ;
            j++;
        }
    }
    for(int i = 0; i < j; i++){
    if(pos[i] != 0){
        cout << pos[i] << " ";
    }
    }
    return 0;
}
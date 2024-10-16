#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int search_value; cin >> search_value;
    int pos = 0, flag = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == search_value)
        {
            pos = i;
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout << search_value<< " is at position " << pos <<  "\n";
        }
    else {
        cout << "not found" << "\n";
    }    
    

}
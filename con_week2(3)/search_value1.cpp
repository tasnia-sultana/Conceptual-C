#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int search_value; cin >> search_value;
    int pos = -1;
    for(int i = 0; i < n; i++){
        if(a[i] == search_value)
        {
            pos = i + 1;//  ekhane position 1 theke shuru 
            break;
        }
    }
    if(pos != -1){
        cout << search_value<< " is at position " << pos <<  "\n";
        }
    else {
        cout << "not found" << "\n";
    }    
    

}
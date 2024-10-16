#include<bits/stdc++.h>
using namespace std;

int main(){
    //if-else ladder
    int a; cin >> a;
    
    if( a >= 80 && a <= 100){
        cout << "A+" << "\n";
    }
    if( a >= 70 && a <= 79){
        cout << "A" << "\n";
    }
    if( a >= 60 && a <= 69){
        cout << "A-" << "\n";
    }
    if( a >= 50 && a <= 59){
        cout << "B" << "\n";
    }
    if( a >= 0 && a <=49 ){
        cout << "Fail" << "\n";
    }

//Multiple if
/* 
    int taka; cin >> taka;
    if(taka >= 500){
        cout << "ghurte Jabo" << "\n";
    }
    if(taka >= 100){
        cout << "Ice cream and Fuchka khabo" << "\n";
    }
    if(taka >= 20){
        cout << "Kichu khabo na" << "\n";
    } */
    return 0;
}
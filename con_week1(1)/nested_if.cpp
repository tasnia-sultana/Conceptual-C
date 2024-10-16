#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    if(n >= 0){
        cout<< "positive\n";
        if(n % 2 == 1){
            cout << "odd\n";
        }
        else{
            cout << "even\n";
        }
    }
    else{
        cout << "Negative\n";
    }

    return 0;
}
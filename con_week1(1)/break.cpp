#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 1){
            // continue;//output 6 shoho ashbe
            if(i == 5)
            {
                break;
            }
            continue;

        }
        else{
            cout << i << "\n";
        }
    }

    return 0;
}
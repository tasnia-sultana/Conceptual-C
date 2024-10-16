#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b; cin >> a >> b;
    int found_flag = 0;
    for(int i = a; i <= b; i++){
        int num = i;
       int  getLucky_flag = 1;
        while(num > 0){
            int digit = num % 10;
            if(digit != 4 && digit != 7){
                getLucky_flag = 0;
                break;
            }
             num /= 10; 
        }
        if(getLucky_flag == 1){
            cout << i << " ";
            found_flag = 1;
        }
    }    
    if(found_flag == 0){
            cout << "-1 ";
    }
    return 0;
}
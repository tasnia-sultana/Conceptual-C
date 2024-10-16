#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int year = n / 365;
    int month = (n % 365) / 30;
    int day = (n % 365) % 30;
    cout << year << " years" << "\n" << month << " months" << "\n" << day << " days" << "\n" ;
    return 0;
}
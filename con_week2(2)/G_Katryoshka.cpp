#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m, k, katryoshka = 0;
    cin >> n >> m >> k;
    while(n >=1 && m >= 1 && k && 1){
        katryoshka++;
        n--;
        m--;
        k--;
    }
     while(n >=2  && k >= 1){
        katryoshka++;
        n-=2;
        k--;
    }
    cout << katryoshka << "\n";
    return 0;
}
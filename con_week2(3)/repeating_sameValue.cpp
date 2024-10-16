// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n; cin >> n;
//     int a[n];
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }
//     int search_value; cin >> search_value;

//     int pos[n];
//     for(int i = 0; i < n; i++){
//         pos[i] = 0;
//     }
//     for(int i = 0; i < n; i++){
//         if(a[i] == search_value)
//         {
//             pos[i] = i;
//         }
//     }
//     for(int i = 0; i < n; i++){
//         if(pos[i] != 0){
//         cout << pos[i] << " ";
//         }
//     }

// }

//efficient way (j diye control korsi)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int search_value; cin >> search_value;

    int pos[n], j = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == search_value)
        {
            pos[j] = i;
            j++;
        }
    }
    for(int i = 0; i < j; i++){
        cout << pos[i] << " ";
    }

}
// #include<stdio.h>
// #include<string.h>

// int main(){
//     int t; scanf("%d", &t);
//     while(t--){
//         char ch[100003];
//         scanf("%s", ch);
//         int count = 0;
//         for(int i = 0; i < strlen(ch); i++){
//             if(ch[i] == '1' && ch[i+1] == '0' && ch[i+2] == '1' || ch[i] == '0' && ch[i+1] == '1' && ch[i+2] == '0')
//             {
//                 count++;
//             }
//         }
//         if(count > 0){
//             printf("Good\n");
//         }
//         else{
//             printf("Bad\n");
//         }
//     }

//     return 0;
// }



// #include <stdio.h>
// #include <string.h>

// int main() {
//     int t; 
//     scanf("%d", &t);
//     while (t--) {
//         char ch[100003];
//         scanf("%s", ch);
//         int count = 0;
//         int len = strlen(ch);
//         for (int i = 0; i < len - 2; i++) {
//             if ((ch[i] == '1' && ch[i+1] == '0' && ch[i+2] == '1') || 
//                 (ch[i] == '0' && ch[i+1] == '1' && ch[i+2] == '0')) {
//                 count++;
//                 break;  
//             }
//         }
//         if (count > 0) {
//             printf("Good\n");
//         } else {
//             printf("Bad\n");
//         }
//     }
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main(){
    int t; scanf("%d",&t);
    while(t--){
        char s[100001];
        scanf("%s",s);
        int lenS = (strlen(s))-2;
        int flag = 0;
        for(int i = 0; i < lenS; i++){
            if(s[i] == '1' && s[i+1] == '0' && s[i+2] == '1' || s[i] == '0' && s[i+1] == '1' && s[i+2] == '0' ){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
        printf("Good");
        }  
        else{
        printf("Bad"); 
        }
        printf("\n");
        }  
    return 0;
}

// #include<stdio.h>
// #include<string.h>

// int main(){
//     char s[1001]; scanf("%s", s);
//     char t[1001];
//     strcpy(t,s);
//     for(int i = 0, j = strlen(t) - 1; i < j; i++,j--){
//         int temp = t[i];
//         t[i] = t[j];
//         t[j] = temp;
//     }
//     if(strcmp(s,t) == 0){
//         printf("YES\n");
//     }
//     else{
//         printf("NO\n");
//     }
//     return 0;
// }

#include<stdio.h>
#include<string.h>

int main(){
    char s[1001]; scanf("%s", s);
    int i = 0, j = strlen(s) - 1;
    int flag = 1;
    while(i < j){
        if(s[i] != s[j]){
            flag = 0;
            break;
        }
        i++;
        j--;
    }    
    if(flag == 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
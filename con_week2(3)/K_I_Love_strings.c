#include<stdio.h>
#include<string.h>
int main(){
    int t; scanf("%d",&t);
    while(t--){
    char s[60], t[60];
    scanf("%s %s", s, t);
    int a = strlen(s), b = strlen(t);
    int mx = a;
    if(b > mx){
        mx = b;
    }
    for(int i = 0; i < mx; i++){
        if(i < a){
            printf("%c",s[i]);
        }
        if(i < b){
            printf("%c",t[i]);
        }
    }
    printf("\n");
    }
    return 0;
}
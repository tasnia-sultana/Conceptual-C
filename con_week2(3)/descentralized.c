#include<stdio.h>
int main(){
    int a[] = {[2] = 3, [5] = 7};//descentralized initialization in advanced (c)
    int sz = sizeof(a) / sizeof(a[0]);
    for(int i = 0; i < sz; i++){
        printf("%d ", a[i]);
    }
}
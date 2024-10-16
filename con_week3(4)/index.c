#include<stdio.h>
#include<string.h>

int main()
{
    // char ch[6];
    // // scanf("%s", ch);
    // // gets(ch);
    // fgets(ch, 8, stdin);
    // printf("%s %d %d", ch, strlen(ch), sizeof(ch));

    int t; scanf("%d",&t);
    getchar();
    while(t--){
        char ch[100];
        // scanf("%s", ch);
        // gets(ch);
        // printf("%s\n", ch);

      fgets(ch, 100, stdin);
      printf("%s", ch);
    }
    return 0;
}
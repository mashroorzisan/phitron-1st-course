#include<stdio.h>
#include<string.h>
int main(){
    int N;
    int sum=0;
    scanf("%d\n",&N);
    char a[N];
    gets(a);
    
    for(int i=0;i<strlen(a);i++){
        sum += a[i]-48;
    }
    printf("%d\n", sum);
    return 0;
}
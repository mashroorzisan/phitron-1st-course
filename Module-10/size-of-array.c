#include<stdio.h>
int main(){
    char a[5];
    for(int i=0; i<5;i++){
        scanf("%d", &a[i]);
    }
    int sz = sizeof(a)/ sizeof(char);
    printf("%d", sz);

    return 0;
}
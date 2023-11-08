#include<stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if(x < 122 && x >=97){
        x = x + 1;
        printf("%c", x);
    }
    else if(x == 122){
        printf("a");
    }
    return 0;
}
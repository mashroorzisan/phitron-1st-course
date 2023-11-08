#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int temp = x;
    while(temp>=10){
        temp = x/10;
        x = temp;
    }
    if(temp%2 == 0){
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }

    return 0;
}
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
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }

    return 0;
}
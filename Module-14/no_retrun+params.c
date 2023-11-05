#include<stdio.h>


void sum(int a,int b){
    scanf("%d %d", &a, &b);
    printf("sum = %d\n",a+b) ;
    return;
    printf("goodbye");
}
int main(){
    // function call
    // name(params)
    sum(10, 30);
    return 0;
}
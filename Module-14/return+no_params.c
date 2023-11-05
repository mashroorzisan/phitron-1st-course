#include<stdio.h>
//function declaration
//no params
//no params can be done with void also
int sum(){
    int a,b;
    scanf("%d %d", &a, &b);
    return a+b;
}
//also can be done using void
int mul(void){
    int a,b;
    scanf("%d %d", &a, &b);
    return a*b;
}

int main(){
    // function call
    // name(no params)
    int x = sum(1090);
    int y = mul(1090);
    printf("sum is = %d", x);
    printf("mul is = %d", y);
    return 0;
}
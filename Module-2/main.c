#include<stdio.h>
int main(){
    int a = 9, b = 34;
    int sum = a + b;
    int sub = a - b;
    float divide = b*1.0 / a;
    int mod = b % a;

    printf("sum = %d\n", sum);
    printf("subtract = %d\n", sub);
    printf("Divide = %f\n", divide);
    printf("mod = %d\n", mod);
    return 0;
}
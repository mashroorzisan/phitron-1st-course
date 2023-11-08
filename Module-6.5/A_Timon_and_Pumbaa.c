#include<stdio.h>
int main(){
    long long int a, b;
    scanf("%lld %lld\n", &a, &b);
    if(a-b>=0){
        printf("%lld\n", a-b);
    }
    else{
        printf("0");
    }

    return 0;
}
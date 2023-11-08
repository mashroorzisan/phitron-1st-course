#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    long long int s;
    for(int i=0; i<n ;i++){
        scanf("%lld", &s);
        while(s>0){
            printf("%lld ", s%10);
            s /= 10;
        }
        printf("\n");
    }

    return 0;
}
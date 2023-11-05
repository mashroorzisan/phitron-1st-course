#include<stdio.h>
int main(){
    int l;
    scanf("%d", &l);
    int s = l-1, n;
    for(int i=1;i<=l;i++){
        // stars
        for(int j=1;j<=2*i-1 ;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
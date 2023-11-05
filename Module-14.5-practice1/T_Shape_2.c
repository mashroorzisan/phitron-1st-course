#include<stdio.h>
int main(){
    int l;
    scanf("%d", &l);
    int s = l-1;
    
    for(int i=1;i<=l;i++){
       //space
        for(int j=1; j<=l-i; j++){
            printf(" ");
        }
        // stars
        for(int k=1;k<=2*i-1 ;k++){
            printf("*");
        }
        printf("\n");
        
    }

    return 0;
}
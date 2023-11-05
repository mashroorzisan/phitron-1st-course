#include<stdio.h>
int main(){
    int n  = 5 , i = 1, j = 1, k=1;
    while(i<=n){
        while(j<= n-i){
            //spaces
            printf(" ");
            j++;
        }
        while(k<=i){
            //stars
            printf("* ");
            k++;
        }
        j=1;
        k=1;
        i+=2;
        printf("\n");
    } 
    return 0;
}
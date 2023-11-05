#include<stdio.h>
// with while loop
int main(){
    int n = 5, i = 1, j = 1;
    while(i<=n){
        while(j<=i){ 
            //do work
            printf(" * ");
            j++;
        }
        printf("\n");
        j = 1;
        i++;
    }

    return 0;
}
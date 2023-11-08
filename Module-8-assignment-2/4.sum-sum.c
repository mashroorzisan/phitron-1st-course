#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int X, sum1 = 0, sum2 = 0;
    scanf("%d\n",&X);
    int arr[X];
    for(int i = 0; i<X;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < X;i++){
        if(arr[i]>0){
            sum1 = sum1 + arr[i];
        }
        else{
            sum2 = sum2 + arr[i];
        }
    }
    printf("%d %d", sum1, sum2);
    
    return 0;
}
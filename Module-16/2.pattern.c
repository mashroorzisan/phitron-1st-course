#include<stdio.h>
int main(){
    int n,sp,nb;
    scanf("%d", &n);
    sp=n-1;
    nb=1;
    for(int i=1; i<=n;i++){
       for(int j=1;j<=sp;j++){
        printf(" ");
       } 
       for(int k=nb;k>=1;k--){
        printf("%d",k);
       }
       nb++;
       sp--;
       printf("\n");
    }

    
        
    return 0;
}
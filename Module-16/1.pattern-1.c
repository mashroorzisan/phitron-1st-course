#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int s=n-1;
    int p=1;
    for(int i=1; i<=2*n-1;i++){
        for(int j=1;j<=s;j++){
            printf(" ");
        }
        for(int k=1;k<=p;k++){
            if(i%2 != 0){
                printf("#");
            }
            else{
                printf("-");
            }
        }
        printf("\n");
        if(i<=n-1){
            s--;
            p+=2;

        }
        else{
            s++;
            p-=2;
        }
    }

    
        
    return 0;
}
#include<stdio.h>

int main(){
    int r,c;
    scanf("%d %d\n",&r,&c);
  
    for(int i = 0; i<r ; i++){
        for(int j = 0; j<c; j++){
            printf("ar[%d][%d] ", i,j);
        }
        printf("\n");
    }

    return 0;
}
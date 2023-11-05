#include<stdio.h>

int main(){
    int r,c;
    scanf("%d %d\n",&r,&c);
    int ar[r][c];

    for(int i = 0; i<r ; i++){
        for(int j = 0; j<c; j++){
            scanf("%d", &ar[i][j]);
        }
    }


    for(int i = 0; i<r ; i++){
        for(int j = 0; j<c; j++){
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }

    return 0;
}
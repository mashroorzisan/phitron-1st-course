#include<stdio.h>
int main(){
    int row, col;
    scanf("%d %d", &row, &col);    
    int a[row][col];
    int b[row][col];
    //A matrix
    for(int i = 0; i<row; i++){
        for(int j = 0 ;j<col ;j++){
            scanf("%d ",&a[i][j]);
        }
    }

    //B matrix
    for(int i = 0; i<row; i++){
        for(int j = 0 ;j<col ;j++){
            scanf("%d ",&b[i][j]);
        }
    }


    //sum a+b
    for(int i=0;i<row; i++){
        for(int j=0;j<col;j++){
            printf("%d ", a[i][j]+b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include<stdio.h>
int main(){
    int row, col;
    scanf("%d %d\n", &row, &col);
    int ar[row][col];
    for(int i = 0; i<row;i++){
        for(int j = 0;j<col; j++){
            scanf("%d ", &ar[i][j]);
        }
      }


    int e, p;
    
    scanf("%d %d", &e,&p);
    for(int j = 0;j<col; j++){
       printf("%d ", ar[e][j]);
    }
    printf("\n");
    printf("%d\n", ar[e][p]);
    
    return 0 ;
}
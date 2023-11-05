#include<stdio.h>
int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    int ar[row][col];
    int element = row*col;
    
    for(int i = 0; i<row;i++){
        for(int j = 0;j<col; j++){
            scanf("%d ", &ar[i][j]);
        }
      }

    int count = 0 ;
    for(int i =0 ;i<row; i++){
        for(int j = 0 ; j<col;j++){
            if(ar[i][j]==0){
                count++;
            }
        }
    }
    if(element == count){
        printf("null matrix");
    }
    else{   
        printf("matrix");
    }

   
    return 0 ;
}
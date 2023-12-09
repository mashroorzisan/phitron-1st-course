#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    //get array values
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    //what to remove
    int pos;
    scanf("%d",&pos);
    //remove
    for(int i=pos; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    //print
    for(int i=0; i<n-1;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
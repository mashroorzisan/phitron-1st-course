#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    //input elements
    for(int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
    }
    //reverse
    //two pointers technique
    int temp;
    for(int i = 0,j = n-1; i<(n-1)/2 && j>i; i++, j--){
         temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    //print
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
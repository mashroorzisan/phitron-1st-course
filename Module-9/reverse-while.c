#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    //input elements
    for(int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
    }
    //reverse using while loop
    int temp, i = 0, j = n-1;
    while(i<j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
      //print
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
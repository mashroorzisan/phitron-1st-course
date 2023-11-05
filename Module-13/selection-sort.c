#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0; i<n-1;i++){
        for(int j = i+1; j<n; j++){
            //ascending ordering
            if(a[i]>a[j]){
                int temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                printf(" swaping %d and %d\n", a[i], a[j]);
        }
        }
    }


        for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
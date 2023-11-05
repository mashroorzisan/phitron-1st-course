#include<stdio.h>
#include <stdlib.h>

void copy(int *b,int*a,int n){
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
}
void sort(int *b,int n){
    for(int i = 0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(b[i]>=b[j]){
                int temp = b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
        
    }
}
void diff(int *a,int *b,int *c,int n){
    for(int i = 0;i<n;i++){
        c[i]= abs(a[i]-b[i]);
    }

}
void print(int*arr,int n){
    for(int i = 0;i<n;i++){    
        printf("%d ",arr[i]);
    }
}
int main(){
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
    
        int a[n],b[n],c[n];

        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        copy(b,a,n);
        sort(b,n);
        diff(a,b,c,n);
        print(c,n);
        
        printf("\n");
    }

    
    return 0;
}
#include<stdio.h>
int main(){

   int t;
   scanf("%d",&t);
   for(int i=0;i<t;i++){
     int n;
    int f;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    scanf("%d",&f);
    int flag = 0;
    for(int i =0;i<n;i++){
        if(a[i]==f){
            flag = 1;
            break;
        }
   
    }
    if(flag==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
   }
    return 0;
}
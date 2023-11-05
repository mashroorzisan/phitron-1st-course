#include<stdio.h>
#include<string.h>
int main(){
    int n;
    int two=0,three=0;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++){
        scanf("%d ",&a[i]);
        if(a[i]%2==0 && a[i]%3==0){
            two++;
        }
        else if(a[i]%2==0){
            two++;
        }
        else if(a[i]%3==0){
            three++;
        }
    }
    printf("%d %d\n", two, three);
    return 0;
}
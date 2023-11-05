#include<stdio.h>
#include<string.h>
int main(){
    char c;
    char a[10000];
    scanf("%s", a);
    int count[26] = {0};
    
    for(int i=0;i<strlen(a);i++){
        int val = a[i]-97;
        count[val]++;
    }
    for(int i = 0;i<26;i++){
        if(count[i] != 0){
            printf("%c - %d\n", i+97, count[i]);

        }
    }
    return 0;
}
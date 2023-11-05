#include<stdio.h>
#include<string.h>
int main(){
    char c;
    int count[26] = {0};
    while(scanf("%c",&c)!=EOF){
        int val = c-97;
        count[val]++;
    }
    for(int i = 0;i<26;i++){
        if(count[i] != 0){
            printf("%c : %d\n", i+97, count[i]);

        }
    }
    return 0;
}
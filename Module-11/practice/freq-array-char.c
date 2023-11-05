#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%s",s);
    int count[26] = {0};

    for(int i=0;i<strlen(s);i++){
        int val =s[i]-97;
        count[val]++;
    }
    int max = 0;
    int maxindex;
    int min = 100000;
    int minindex;

    for(int i=0;i<26;i++){
        if(count[i]>max){
            max = count[i];
            maxindex = i;
        }
        if(count[i]<min){
            min = count[i];
            maxindex = i;
        }
        if(count[i] !=0){
            printf("%c - %d\n",i+97,count[i]);
        }
    }
    printf("maximum is - %c - %d\n", maxindex+97,max);
    // printf("minimum is - %c - %d\n", minindex+97,min);
    return 0;
}
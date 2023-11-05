#include<stdio.h>
#include<string.h>

//prototyping
int is_palindrome(char *, int);

int main(){
    char s[1001];
    scanf("%s",s);
    int len = strlen(s);
    int n = is_palindrome(s,len);

    if(n==1){
        printf("Palindrome\n");
    }
    else if(n==0) {
        
        printf("Not Palindrome\n");
    }
    return 0;
}


int is_palindrome(char ar[],int len){
    for(int i = 0;i<len/2;i++){
            if(ar[i]!=ar[len-i-1]){
                return 0;
            }
    }
    return 1;
}
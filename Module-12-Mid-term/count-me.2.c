#include <stdio.h>
#include <string.h>

int main() {
    char a[100001];
    gets(a);
    int count[26]={0};
    int cons = 0;
    for(int i=0;i<strlen(a);i++){
        int val = a[i]-97;
        count[val]++;
    }
    for(int i=0;i<26;i++){
        if(i+97=='a'||i+97=='e'||i+97=='o'||i+97=='i'||i+97=='u')
        {
            continue;
        }
        else{
            cons += count[i];
        }
        
    }
    printf("%d\n",cons);
    return 0;
}

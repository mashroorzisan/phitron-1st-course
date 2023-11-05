#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    gets(s);
    int len = strlen(s);
    char s_c[1001];

    for (int i = 0; i < len; i++) {
        s_c[i] = s[i];
    }
    s_c[len] = '\0'; // Null-terminate the copied string


    int i = 0;
    int j = len - 1;
    while (i < j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp; // Use temp for swapping, not s[i]
        i++;
        j--;
    }

    int palindrom = 0;
    for(int i = 0; i<len; i++){
        if(s_c[i] != s[i]){
            palindrom = 1;
        }
    }
    if(palindrom == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}

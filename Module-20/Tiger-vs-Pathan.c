#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void count(char *s,int n) {

    int countT = 0;
    int countP = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'T') 
            countT++;
        else if (s[i] == 'P') 
            countP++;
    }
    if (countT > countP)
        printf("Tiger\n");
    else if (countT < countP)
        printf("Pathaan\n");
    else
        printf("Draw\n");
}

int main() {
    int t;
    scanf("%d", &t);


    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n); 
        char s[n + 1];
        scanf("%s", s);
        count(s,n);
    }

    return 0;
}

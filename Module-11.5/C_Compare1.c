#include<stdio.h>
#include<string.h>
int main(){
    char x[21], y[21];
    gets(x);
    gets(y);

    int i = 0;
    while(1){
        //ladder 1
        if(x[i]=='\0' && y[i]=='\0'){
            printf("%s\n", x);
            break;
        }
        else if(x[i]=='\0'){
            printf("%s\n",x);
            break;
        }
        else if(y[i]=='\0'){
            printf("%s\n", y);
            break;
        }
        //ladder 2
        if(x[i]==y[i]){
            i++;
        }
        else if(x[i]<y[i]){
            printf("%s\n",x);
            break;
        }
        else{
            printf("%s\n", y);
            break;
        }

    }


    return 0;
}
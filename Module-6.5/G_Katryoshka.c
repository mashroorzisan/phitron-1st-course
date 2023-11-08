#include<stdio.h>
int main(){
    long long int e, m, b;
    scanf("%lld %lld %lld\n", &e,&m,&b);
    long long int total_eyes;
    if(m == 0){
        //2e + 1b = 1
        total_eyes = e/2;
        if(total_eyes<=b){
            printf("%lld\n", total_eyes);
        }
        else if(total_eyes>=b){
            printf("%lld\n",b);
        }
        else{
            printf("0\n");
        }

    }
    else if(e >= 1 && m>=1 && b >=1){
         //2e+1m+1b = 1
        if( e == 1 && m>=1 && b >=1){
            if(e<=m && e<=b){
                printf("%lld\n",e);
            }
            else if(m<=e && m<=b){
                printf("%lld\n",m);
            }
            else{
                printf("%lld\n", b);
            }
        }
       else{
            // total_eyes = e/2;
            if(e>=m && m<=b){
                int temp1 = e;
                int temp2 = b;
                temp3 =
                temp1 = temp1 - m;
                temp2 = temp2 - m;
                total_eyes = temp1 / 2;
                if (temp2>){
                printf("%lld\n",total_eyes + m);
                }
                else{
                printf("%lld\n", temp2 + m);
                }
            }
            else if(e>=b && b<=m){
                printf("%lld\n", b);
            }
            else if(e<=m && e<=b){
                printf("%lld\n",e);
            }
          
       }
    }
    else{
            printf("0\n");
        }
    return 0;
}
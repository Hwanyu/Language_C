#include<stdio.h>
int main(void){
    int a, n, c=0;
    
    for(n=1; n<=20; n++)
    {
        for(a=1; a<=n; a++)
        {
            if(n%a==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("소수 : %d\n",n);
        }
        c=0;
    }
}

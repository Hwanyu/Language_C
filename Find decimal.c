#include<stdio.h>
int main(void){
    int a, n, n1, n2, c=0;

    printf("범위 시작 값 입력 : ");
    scanf("%d",&n1);
    printf("범위 끝 값 입력 : ");
    scanf("%d",&n2);
    
    for(n=n1; n<=n2; n++)
    {
        for(a=n1; a<=n; a++)
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

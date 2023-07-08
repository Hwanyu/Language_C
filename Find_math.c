#include<stdio.h>
int main(void){
    int no1, no2, a, b, gcm;
    printf("1번 정수를 입력 : ");
    scanf("%d",&no1);
    printf("2번 정수를 입력 : ");
    scanf("%d",&no2);
    
    for(a=1; a<=no1 && a<=no2; a++){
        if(no1%a==0 && no2%a==0){
            gcm=a;
        }
    }printf("%d와 %d의 최대공약수 : %d\n",no1,no2,gcm);
    printf("%d와 %d의 최소공배수 : %d\n",no1,no2,(no1*no2)/gcm);
}

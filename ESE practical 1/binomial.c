#include <stdio.h>

int bi(int a, int b){
    if (b==0 || b==a)
    {
        return 1;
    }
    return bi(a-1,b-1) + bi(a-1,b);
}

int main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    int num = bi(a,b);
    printf("Binomial Coefficient of %d and %d = %d\n",a,b,num);
    return 0;
}
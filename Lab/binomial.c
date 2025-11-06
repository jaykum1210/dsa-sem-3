#include <stdio.h>

int bi(int a,int b){
    if (b==0||b==a)
    {
        return 1;
    }
    else{
        return bi(a-1,b-1)+bi(a-1,b);
    }
}

int main(){
    int a,b;
    printf("Enetr two numbers = ");
    scanf("%d%d",&a,&b);
    int c = bi(a,b);
    printf("Binomial Coefficient of %d and %d = %d\n",a,b,c);
    return 0;
}
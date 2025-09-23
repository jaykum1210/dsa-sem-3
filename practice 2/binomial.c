#include <stdio.h>

int bi(int a,int b){
    if (b==0 || b==a)
    {
        return 1;
    }
    else{
        return bi(a-1,b-1)+bi(a-1,b);
    }
}

int main(){
    int a,b;
    printf("Enter two number = ");
    scanf("%d%d",&a,&b);
    printf("Binomial coefficient =%d\n",bi(a,b));
    return 0;
}
#include <stdio.h>

int bi(a,b){
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
    printf("Enter numbers= ");
    scanf("%d%d",&a,&b);
    printf("%d",bi(a,b));
    return 0;
}
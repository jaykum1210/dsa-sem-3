#include <stdio.h>

int bi(int n,int k){
    if (n==0 || k == n)
    {
        return n;
    }
    else{
        return bi(n-1,k-1)+bi(n-1,k);
    }
}

int main(){
    int a,b;
    printf("Enter both number = ");
    scanf("%d %d",&a,&b);
    int c = bi(a,b);
    printf("Binomial Coefficient = %d\n",c);
    return 0;
}
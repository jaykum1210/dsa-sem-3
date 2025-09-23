#include <stdio.h>

int gcd(int a,int b){
    if (b==0)
    {
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}

int main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    int c = gcd(a,b);
    printf("GCD of %d and %d = %d\n",a,b,c);
    return 0;
}
#include <stdio.h>

int gcd(int a,int b){
    if (b==0)
    {
        return 0;
    }
    else{
        a = a%b;
        return(b,a);
    }
}

int main(){
    int a,b;
    printf("Enter number 1st = ");
    scanf("%d",&a);
    printf("Enter number 2nd = ");
    scanf("%d",&b);
    int c = gcd(a,b);
    printf("GCD of %d and %d = %d\n",a,b,c);
    return 0;
}
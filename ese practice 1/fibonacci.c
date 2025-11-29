#include <stdio.h>

int fib(int a){
    if (a==0)
    {
        return 0;
    }
    else if (a==1)
    {
        return 1;
    }
    return fib(a-1) + fib(a-2);
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    if (a<0)
    {
        printf("Print Positive number\n");
        return 0;
    }
    printf("Fibonacci Series = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",fib(i));
    }
    return 0;
}
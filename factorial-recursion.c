#include <stdio.h>

int fact(int a){
    if(a==0 || a==1){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}
int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    printf("Factorial of %d = %d\n",a,fact(a));
    return 0;
}

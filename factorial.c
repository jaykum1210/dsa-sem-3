#include <stdio.h>

int main(){
    int a, count = 1;
    printf("Enter number = ");
    scanf("%d",&a);
    if(a<0){
        printf("Enter positive number");
    }
    else if(a==0 || a==1){
        printf("Factorial = %d\n",1);
    }
    else{
        for(int i = 1; i<=a; i++){
            count *= i;
        }
        printf("Factorial of %d = %d\n",a,count);
    }
    return 0;
}
#include <stdio.h>

int main(){
    int a;
    printf("ENter number = ");
    scanf("%d",&a);
    if(a<0){
        printf("%d is not a valid number",a);
    }
}
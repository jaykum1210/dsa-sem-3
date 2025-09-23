#include <stdio.h>

int main(){
    int a,pos;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Enter position = ");
    scanf("%d",&pos);
    for (int i = pos-1; i < a; i++)
    {
        b[i] = b[i+1];
    }
    a--;
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
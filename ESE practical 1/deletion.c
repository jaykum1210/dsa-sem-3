#include <stdio.h>

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int pos;
    printf("Enter position = ");
    scanf("%d",&pos);
    for (int i = pos-1; i < a-1; i++)
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
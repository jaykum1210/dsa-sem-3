#include <stdio.h>

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter size = ");
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < a-1; i++)
    {
        for (int j = 0; j < a-i-1; j++)
        {
            if (b[j]>b[j+1])
            {
                int temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",b[i]);
    }
   return 0;
}
#include <stdio.h>

int main(){
    int a,min;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < a; i++)
    {
        min = i;
        for (int j = i+1; j < a; j++)
        {
            if (b[j]<b[min])
            {
                min = j;
            }
        }
        int temp = b[i];
        b[i] = b[min];
        b[min] = temp;
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d",b[i]);
    }
    return 0;
}
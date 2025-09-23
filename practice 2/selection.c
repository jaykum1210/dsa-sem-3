#include <stdio.h>

int main(){
    int a,min;
    printf("Enter element = ");
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
            if (b[min]>b[j])
            {
                min = j;
            }
        }
        int temp = b[min];
        b[min] = b[i];
        b[i] = temp;
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
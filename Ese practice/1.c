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
    for (int i = 0; i < a; i++)
    {
        int max = i;
        for (int j = i; j < a; j++)
        {
            if (b[max]>b[j])
            {
                max = j;
            }
        }
        int temp = b[max];
        b[max] = b[i];
        b[i] = temp;
    }
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
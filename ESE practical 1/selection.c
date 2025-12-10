#include <stdio.h>

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < a; i++)
    {
        int min = i;
        for (int j = i; j <a; j++)
        {
            if (b[min]<b[j])
            {
                min = j;
            }
        }
        int temp = b[min];
        b[min] = b[i];
        b[i] = temp;
    }
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
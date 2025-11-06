#include <stdio.h>

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a],key,j;
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 1; i < a; i++)
    {
        key = b[i];
        j = i-1;
        while (j>=0 && b[j]>key)
        {
            b[j+1] = b[j];
            j--;
        }
        b[j+1] = key;
    }
    printf("sorted = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
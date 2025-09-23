#include <stdio.h>

int main(){
    int a,key,j;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a];
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
    for (int i = 0; i < a; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
#include <stdio.h>

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int pos;
    printf("Enter position = ");
    scanf("%d",&pos);
    for (int i = pos-1; i < a; i++)
    {
        arr[i] = arr[i+1];
    }
    a--;
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
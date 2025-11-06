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
    int val,pos;
    printf("Enter value = ");
    scanf("%d",&val);
    printf("Enter position = ");
    scanf("%d",&pos);
    for (int i = a; i >=pos; i--)
    {
        arr[i] = arr[i-1];
    }
    a++;
    arr[pos-1] = val;
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
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
    int num;
    printf("Enter value = ");
    scanf("%d",&num);
    for (int i = 0; i < a; i++)
    {
        if (b[i]==num)
        {
            printf("%d is found at index %d\n",num,i);
            return 0;
        }
    }
    printf("%d is not present\n",num);
    return 0;
}
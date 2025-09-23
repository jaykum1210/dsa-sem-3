#include <stdio.h>

int main(){
    int a,tar,found = 0;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ");
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Enter value = ");
    scanf("%d",&tar);
    for (int i = 0; i < a; i++)
    {
        if (b[i]==tar)
        {
            found = 1;
        }
    }
    if (found == 1)
    {
        printf("%d is present\n",a);
    }
    else{
        printf("%d is not present\n",a);
    }
    return 0;
}
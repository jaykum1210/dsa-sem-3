#include <stdio.h>

int main(){
    int a,tar,found = 0,mid;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Enter value = ");
    scanf("%d",&tar);
    int l = 0;
    int r = a-1;
    while (l<=r)
    {
        mid = l + (r-l)/2;
        if (b[mid] == tar)
        {
            found = 1;
            break;
        }
        else if (b[mid]<tar)
        {
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    if (found == 1)
    {
        printf("%d is present\n",tar);
    }
    else{
        printf("%d is not present\n",tar);
    }
    return 0;
}
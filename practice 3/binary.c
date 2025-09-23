#include <stdio.h>

int main(){
    int a,tar,found = 0,mid;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int l =0,r=a-1;
    printf("Enter tar = ");
    scanf("%d",&tar);
    while (l<=r)
    {
        mid = l+(r-l)/2;
        if (b[mid]==tar)
        {
            found = 1;
            break;
        }
        else if (b[mid]>tar)
        {
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    if (found == 1)
    {
        printf("yes\n");
    }
    else{
        printf("no");
    }
    return 0;
}
#include <stdio.h>

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for(int i = 0; i<a;i++){
        scanf("%d",&b[i]);
    }
    int val;
    printf("Enter value = ");
    scanf("%d",&val);
    int l = 0,r = a-1;
    while (l<r)
    {
        int mid = l + (r-l)/2;
        if (b[mid]==val)
        {
            printf("%d is present at index %d\n",val,mid);
            return 0;
        }
        else if (b[mid]>val)
        {
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    printf("%d is not present\n",val);
    return 0;
}
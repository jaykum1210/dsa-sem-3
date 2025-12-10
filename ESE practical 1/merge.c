#include <stdio.h>

void merge(int b[], int l, int mid, int r){
    int n1 = mid-l+1;
    int n2 = r-mid;
    int left[n1],right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = b[l+i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = b[mid+1+i];
    }
    int i = 0, j = 0, k = l;
    while (i<n1 && j<n2)
    {
        if (left[i]<=right[j])
        {
            b[k] = left[i];
            i++;
        }
        else{
            b[k] = right[j];
            j++;
        }
        k++;
    }
    while (i<n1)
    {
        b[k++] = left[i++];
    }
    while (j<n2)
    {
        b[k++] = right[j++];
    }
}

void mergesort(int b[], int l, int r){
    if (l<r)
    {
        int mid = l + (r-l)/2;
        mergesort(b,l,mid);
        mergesort(b,mid+1,r);
        merge(b,l,mid,r);
    }
    
}

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
    int l = 0, r = a-1;
    mergesort(b,l,r);
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
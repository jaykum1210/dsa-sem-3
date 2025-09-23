#include <stdio.h>

int merge(int arr[],int l,int mid,int r){
    int n1 = mid-l+1;
    int n2 = r-mid;
    int left[n1],right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i]=arr[l+i];
    }
    for (int i = 0;i<n2; i++)
    {
        right[i] = arr[mid+i+1];
    }
    int i =0,j=0,k=l;
    while (i<n1 && j<n2)
    {
        if (left[i]<=right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i<n1)
    {
        arr[k] = left[i];
        k++;
        i++;
    }
    while (j<n2)
    {
        arr[k] = right[k];
        j++;
        k++;
    }
}

int mergesort(int arr[],int l,int r){
    if (l<=r)
    {
        int mid = l+(r-l)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid,r);
        merge(arr,l,mid,r);
    }
    
}

int main(){
    int a;
    printf("Enter number of elements = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int l = 0,r = a-1;
    mergesort(b,l,r);
    for (int i = 0; i < a; i++)
    {
        printf("%d ",&b[i]);
    }
    return 0;
}
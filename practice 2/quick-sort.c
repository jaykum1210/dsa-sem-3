#include <stdio.h>

int swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[],int l,int r){
    int pivot = arr[r];
    int i  = l-1;
    for (int j = l; j < r; j++)
    {
        if (arr[j]<=pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[r]);
    return (i+1);
}

int quicksort(int arr[],int l,int r){
    if (l<r)
    {
        int pi = partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
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
    int l = 0,r=a-1;
    quicksort(b,l,r);
    for (int i = 0; i < a; i++)
    {   
        printf("%d ",b[i]);
    }
    return 0;
}
#include <stdio.h>

int swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int b[],int l,int r){
    int pivot = b[r];
    int j = l-1;
    for (int i = l; i < r; i++)
    {
        if (b[i]<=pivot)
        {
            j++;
            swap(&b[i],&b[j]);
        }
    }
    swap(&b[j+1],&b[r]);
    return j+1;
}

int quicksort(int b[],int l,int r){
    if (l<r)
    {
        int pi = partition(b,l,r);
        quicksort(b,l,pi-1);
        quicksort(b,pi+1,r);
    }
    
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int l = 0,r = a-1;
    quicksort(b,l,r);
    for (int i = 0; i < a; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
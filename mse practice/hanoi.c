#include <stdio.h>

void move(int n,char source,char desc, char spare){
    if (n==1)
    {
        printf("Move %c to %c\n",source,desc);
    }
    else{
        move(n-1,source,spare,desc);
        move(1,source,desc,spare);
        move(n-1,spare,desc,source);
    }
}

int main(){
    int a;
    char source = 'A';
    char dest = 'B';
    char spare = 'C';
    printf("Enter number = ");
    scanf("%d",&a);
    move(a,source,dest,spare);
    return 0;
}
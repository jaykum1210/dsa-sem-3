#include <stdio.h>

void move(int a, char source, char desc, char spare){
    if (a==1)
    {
        printf("Move from %c to %c\n",source,desc);
    }
    else{
        move(a-1,source,spare,desc);
        move(1,source,desc,spare);
        move(a-1,spare,desc,source);
    }
}

int main(){
    int a;
    printf("Enter number of rings = ");
    scanf("%d",&a);
    move(a,'A','B','C');
    return 0;
}
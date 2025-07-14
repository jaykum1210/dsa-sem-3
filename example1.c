#include <stdio.h>

int fun(int n){
    if(n==1){
        return 1;
    }
    else{
        return 1 + fun(n-1);
    }
}

int main(){
    int a = 3;
    printf("%d\n",fun(a));
    return 0;
}
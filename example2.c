#include <stdio.h>

int fun(int a){
    if(a==0){
        return 1;
    }
    else{
        return 7+fun(a-2);
    }
}

int main(){
    printf("%d\n",fun(4));
    return 0;
}
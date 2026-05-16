#include <stdio.h>

int fun(int* p){
    *p=77;
    printf("fun function x= %d\n", *p);
}

int main(){
    int x=10;
    fun(&x);
    printf("main function x= %d", x);

    return 0;
}
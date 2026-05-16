#include <stdio.h>

int fun(int x){
    x=44;
    printf("fun function x= %d\n", x);
}

int main(){
    int x=10;
    fun(x);
    printf("main function x= %d", x);

    return 0;
}
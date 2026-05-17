#include <stdio.h>


int add(int x, int y){

    int summation=x+y;
    return summation;

}

int main(){
    int x;
    int y;
    scanf("%d %d", &x, &y);
    int sum = add(x,y);

    printf("%d", sum);

    return 0;
}
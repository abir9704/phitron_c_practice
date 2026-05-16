#include <stdio.h>

int main(){
    char str[40];
    scanf("%s", &str);

    int val=atoi(str);

    // printf("%d",val);
    int remaniningvalue;

    int sum =0;

    while(val!=0){
        remaniningvalue=val%10;
        val=val/10;

        sum = sum+remaniningvalue;


    }

    printf("%d",sum);

    return 0;
}
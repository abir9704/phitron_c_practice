#include <stdio.h>


void printer(int x){

    for(int i=1;i<=x;i++){
        if(i!=x){

            printf("%d ",i);

        }
        else{
            printf("%d", i);
        }
        
    }

}

int main(){
    int n;
    scanf("%d", &n);
    printer(n);

    return 0;
}
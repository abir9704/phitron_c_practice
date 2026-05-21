#include <stdio.h>


void funs(int num){

     

     num=num-1;

      printf("%d\n",num);
     
    if(num==1){
        return;
    }

   
    funs(num);
}

int main(){
     
    int l;
    scanf("%d", &l);
    
    funs(l);


    return 0;
}
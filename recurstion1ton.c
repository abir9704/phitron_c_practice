#include <stdio.h>



void fun(int num,int target){


      

     printf("%d\n",num);

     num=num+1;

   
    

    
    if(num==target){
        return;
    }

    

    
  
   
    fun(num,target);
}

int main(){
   

   

    int l=1;
    int target;
    scanf("%d", &target);

    fun(l,target);


    return 0;
}
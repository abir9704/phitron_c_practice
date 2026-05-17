#include <stdio.h>

void sorting(int x,int y,int z){
    int max;
    int max2;
    int max3;

  if(x>=y && x>=z){

    max=x;

  }
  else if(y>=x && y>=z){
    max=y;
  }
  else{
    max=z;
  }

 
  if(max == x){
    if(y>=z){
        max2=y;
        max3=z;
    }
    else{
        max2=z;
        max3=y;
    }
  }

   if(max == y){
    if(x>=z){
        max2=x;
        max3=z;
    }
    else{
        max2=z;
        max3=x;
    }
    
  }

   if(max == z){
    if(y>=x){
        max2=y;
        max3=x;
    }
    else{
        max2=x;
        max3=y;
    }
  }

   printf("%d\n%d\n%d\n\n",max3,max2,max);
   printf("%d\n%d\n%d",x,y,z);

 
}

int main(){
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    sorting(a,b,c);

    return 0;
}
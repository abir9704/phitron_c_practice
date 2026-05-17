#include <stdio.h>

int funfunct(char stf[],int x,int y){


    int i=0;
    int flag=0;
    while(stf[i]!='\0'){

        if(i!=x){

               if(stf[i]<48 || stf[i]>57){
                  flag=1;
                }

        }

     
        i++;

    }

    if(stf[x]=='-' && flag==0){
        printf("Yes");
    }
    else{
        printf("No");
    }

   



}

int main(){
    int a,b;

    scanf("%d %d", &a, &b);
    int n=a+b+1;

    char str[n+1];

    scanf("%s", str);
    

    funfunct(str,a,b);

    return 0;
}
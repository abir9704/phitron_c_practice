#include <stdio.h>

void maxandminfinder(int arrs[],int size){
    for(int k=0;k<size-1;k++){
         int temp;
        for(int j=k+1;j<size;j++){
           
            if(arrs[k]<arrs[j]){

                temp=arrs[k];
                arrs[k]=arrs[j];
                arrs[j]=temp;

              

            }
        }

          
       
        
    }

   

  
        printf("%d %d",arrs[size-1],arrs[0]);
     

}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    maxandminfinder(arr,n);

    return 0;
}
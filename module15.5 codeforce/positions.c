#include <stdio.h>

void funfunc(int arr[],int size){
    for(int l=0;l<size;l++){
       if(arr[l]<=10){
        printf("A[%d] = %d\n",l,arr[l]);
       }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arrs[n];

    for(int i=0;i<n;i++){
        scanf("%d", &arrs[i]);
    }

    funfunc(arrs,n);

    return 0;
}
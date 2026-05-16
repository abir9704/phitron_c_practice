#include <stdio.h>

int main(){
    
    // int sizeofstring;
    // scanf("%d", &sizeofstring);

    char str[400];

    fgets(str,400,stdin);

    for(int i=0;str[i]!='\\';i++){
        printf("%c",str[i]);
    }

    return 0;

    
}
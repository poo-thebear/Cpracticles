#include <stdio.h>
void main(){
    int i;
    
    int a[10]= {5, 3, 2};
    
    //printing array
    printf("\nYour Array:\n");

    for(i=0; a[i]!='\0'; i++){
        printf("%d \t", a[i]);
    }
    printf("length: %d", i);
}
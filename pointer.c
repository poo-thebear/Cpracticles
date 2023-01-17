#include <stdio.h>
void main(){
    int j=10;
    int *wdw;
    wdw = &j;

    printf("Adress of 'j': %d", wdw);
    printf("\nValue of 'j': %d", *wdw);
}
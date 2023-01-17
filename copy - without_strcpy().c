#include <stdio.h>
#include <string.h>
void main(){
    int i, j;
    char str[5], ltr[5];

    printf("Enter String: ");
    scanf("%s", str);

    j= strlen(str);
    for(i=0; i<=j; i++){
        ltr[i]=str[i];
    }
    printf("%s", ltr);

}
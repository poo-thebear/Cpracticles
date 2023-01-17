#include <stdio.h>
void main(){
    char a[5];
    int length=0, i;
    
    printf("Enter string: ");
    scanf("%s", &a);

    for(i=0; a[i]!='\0'; i++){
        length++;
    }
    printf("\nLength of Array: %d", length);
    strrev(a);
    printf("\nLength of Array: %s", a);
}
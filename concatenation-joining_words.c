#include<stdio.h>
#include<string.h>
void main(){
    int i, j;
    char str[10],ltr[10];

    printf("Enter String1: ");
    scanf("%s", str);
    printf("Enter String2: ");
    scanf("%s", ltr);
    j=strlen(str);
    
    for(i=0; str[i]!='\0';i++){
        str[i+j]=ltr[i];
    }
    printf("%s",str);
}
#include <stdio.h>
int main(){
    int num1=0, num2=1, i, n, num3;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("%d\t%d\t", num1, num2);
    for(i=2; i<n; i++){
        num3=num1+num2;
        printf("%d\t", num3);
        num1=num2;
        num2=num3;
    }
    return 0;
}
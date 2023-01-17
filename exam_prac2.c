#include <stdio.h>
int main(){
    int n;
    float i, sum=0.0, num;
    printf("Enter number= ");
    scanf("%d", &n);

    for(i=1.0; i<=n; i++){
        num=(1/i);
        sum+=num;
    }
    printf("Sum= %f", sum);
    return 0;
}
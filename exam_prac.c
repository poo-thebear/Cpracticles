#include<stdio.h>
int main(){
    int a[5],j, i,n, max;
    for(i=0; i<5; i++){
        printf("a[%d]", i+1);
        scanf("%d", a);
    }
    for(i=0; i<5; i++){
        if(a[j]>a[i]){
            max=a[j];
        }
    }
    printf("%d", max);
    return 0;
}
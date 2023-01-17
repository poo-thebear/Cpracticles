#include <stdio.h>
void main(){
    int size, a[20],i, sum=0, max, min=a[0];
    
    printf("Enter size: ");
    scanf("%d", &size);

    for(i=0; i<size; i++){
        printf("Enter array[%d]: ", i+1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < size; i++) {     
        printf("%d ", a[i]);     
    }
    for(i=0; i<size; i++){
        sum+=a[i];
    }
    printf("\nSum: %d", sum);
    printf("\n");
    max=a[0];
    for(i=0; i<size; i++){
        if(a[i]>max){
            max=a[i];
            printf("max: %d", max);
        }
    }
    printf("\n");
    for(i=0; i<size; i++){
        if(a[i]<min){
            min=a[i];
            printf("min: %d", min);
        }
    }
    
}
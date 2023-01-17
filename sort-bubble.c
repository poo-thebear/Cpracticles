#include <stdio.h>
void main(){
    int k, i, j, size, temp, min, max;
    int a[10];

    //entering size
    printf("Enter size: ");
    scanf("%d", &size);

    //entering array
    printf("Enter Array:\n");
    for(i=0; i<size; i++){
        printf("[%d]", i+1);
        scanf("%d", &a[i]);
    }

    printf("Your Array:\n");
    //printing array
    for(i=0; i<size; i++){
        printf("%d\t", a[i]);
    }

    //bubble sorting
    for(j=0; j<size-1; j++){
        for(k=0; k<size-1; k++){
            if(a[k]>a[k+1]){
                temp=a[k];
                a[k]=a[k+1];
                a[k+1]= temp;
            }
        }
    } 
    //printing sorted array
    printf("\nSorted Array:\n");
    for(i=0; i<size; i++){
        printf("%d\t", a[i]);
    }

    //min & max after sorting
    min=max=a[0];
    for(i=0; i<size; i++){
    if(min>a[i]){
        min=a[i];
    }
    if(max<a[i]){
        max=a[i];
    }}
    printf("\nMin: %d\t", min);
    printf("\nMax: %d\t", max);
}
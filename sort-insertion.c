#include <stdio.h>
void main(){
    int i, j, a[10], size, temp;

    //Entering size
    printf("Enter size: ");
    scanf("%d", &size);
    
    //entering array
    for(i=0; i<size; i++){
        printf("a[%d]: ", i+1);
        scanf("%d", &a[i]);
    }

    //printing array
    printf("\nYour Array:\n");
    for(i=0; i<size; i++){
        printf("%d\t", a[i]);
    }

    //sorting array
    printf("\nSorted Array:\n");
    for(i=1; i<size; i++){
        temp= a[i];
        j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    for(i=0; i<size; i++){
        printf("%d\t", a[i]);
    }

}
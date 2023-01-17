#include <stdio.h>
int main(){
    int a[5], i, j, size;

    printf("Enter size: ");
    scanf("%d", &size);

    for(i=0; i<size; i++){
        printf("a[%d]: ", i+1);
        scanf("%d", &a[i]);
    }
    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            if(a[i]==a[j]){
                printf("Reccursing No.: %d\n", a[i]);
            }
        }
    }
    return 0;
}
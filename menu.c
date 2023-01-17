#include<stdio.h>
void main(){
    int n, total=0, ramen=200, gim=150, teok=200, rice=50;

    do{
        printf("Menu\n1. Ramen\t200\n2.Gimbap\t150\n3.Teokbokki\t200\n4.Rice\t50\n5.Exit\t");
        printf("\nEnter Item no.: ");
        scanf("%d", &n);

        switch(n){
            case 1:
            total+=ramen;
            break;

            case 2:
            total+=gim;
            break;

            case 3:
            total+=teok;
            break;

            case 4:
            total+=rice;
            break;

            case 5:
            printf("Menu Exited!");
            break;

            default:
            printf("Enter correct value");
        }
    } while(n!=5);
    printf("Bill Amount: %d", total);
    printf("\nThank you!");
    
}
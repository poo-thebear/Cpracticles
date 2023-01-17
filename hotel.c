#include<stdio.h>
void main(){
    int i, food, ramen=300, gim=200, teo=250, ricec=150, total=0;
    do{
        printf("Menu:");
        printf("\n1. Ramen\t 300");
        printf("\n2. Gimbap\t 200");
        printf("\n3. Teokbokki\t 250");
        printf("\n4. Ricecake\t 150");
        printf("\n5. Exit");
        printf("\nenter item no: ");
        scanf("%d", &food);
        
        switch(food){
            case 1:
                total+= ramen;
                break;

            case 2:
                total+= gim;
                break;
            
            case 3:
                total+= teo;
                break;
            
            case 4:
                total+= ricec;
                break;
            
            case 5:
                printf("Thanks for ordering");
                break;
            default:
                printf("Enter correct values");
                break;
            printf("Total\n", total);
        }
    }while(food!=5);
    printf("\nHave a Happy Day! Dipshit!");
    printf("\nBill: %d", total);

}
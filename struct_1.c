#include <stdio.h>

struct employ{
    int age, salary;
    char name[50], dep[50];
};
typedef struct employ emp;

void main(){
    emp a;

    printf("Enter name: ");
    scanf("%d", a.age);

    printf("%s", a.age);

}

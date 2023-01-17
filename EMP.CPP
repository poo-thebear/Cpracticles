#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employ{
	int emp_id;
	char emp_name[20];
};
struct organisation{
	int org_id;
	char org_name;
	struct employ emp;
};
void main(){
	struct organisation org;
	clrscr();
	strcpy(org.emp.emp_name, "Ramesh");
	org.emp.emp_id= 9284;
	org.org_id=2348;
	strcpy(org.org_name, "organisationOne")
	printf("Employ id: %s", org.emp.emp_name);
	printf("Employ id: %d", org.emp.emp_id);

	getch();
}
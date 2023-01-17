#include <stdio.h>
#include <string.h>
struct Employee
{
  char name[20];
  int salary;
};
  
struct Organisation 
{
  char organisation_name[20];
  int org_number;
  struct Employee emp; 
};

int main()
{
  struct Organisation org; 

  printf("The size of structure organisation : %ld\n", 
          sizeof(org));
     
  strcpy(org.emp.name, "Robert");
  org.emp.salary = 400000;
  strcpy(org.organisation_name, "GeeksforGeeks");
  org.org_number =5648;
    
    
  // Printing the details
  printf("Organisation Name : %s\n", org.organisation_name);  
  printf("Organisation Number : %d\n", org.org_number);  
  printf("Employee name : %s\n", org.emp.name);  
  printf("Employee Salary : %d\n", org.emp.salary);  
}
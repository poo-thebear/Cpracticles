#include <stdio.h>

#include <string.h>
int main(){
	int i,j=0;
	char a[20], t;

	printf("Enter String: ");
	scanf("%s", a);
	i=0;
	j= strlen(a)-1;

	while(i<j){
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		i++;
		j--;
	}
	printf("%s", a);


	return 0;
}
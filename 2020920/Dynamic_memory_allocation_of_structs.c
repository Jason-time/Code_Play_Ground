#include <stdio.h>
#include <stdlib.h>

struct person{
	int age;
	char name[30];
};

int main(){
	struct person *ptr;
	int i,cnt;
	
	printf("Enter the number of persons: ");
	scanf("%d", &cnt);
	
	//allocating memory for cnt numbers of struct person
	ptr = (struct person*) malloc(cnt * sizeof(struct person));
	
	for(i=0 ; i<cnt; ++i){
		printf("Enter first name and age respectively: ");
		
		//To access members of 1st struct person,
		//ptr -> name and ptr -> age is used
		
		//To access members of 2nd strucct person,
		// (ptr+1)->name and (ptr+1)->age is used
		scanf("%s %d", (ptr+i)->name, &(ptr+i)->age);	
	}
	
	printf("Displaying Information: \n");
	for(i=0;i<cnt; ++i)
		printf("Name: %s\tAge: %d\n",(ptr+i)->name, (ptr+i)->age);
		
	free(ptr);
}

#include <stdio.h>
struct student{
	char name[50];
	int age;	
};

//function prototype
void display(struct student s);

int main(){
	struct student stu_1;
	
	printf("Enter name: ");
	
	// read string input from user until \n is entered
	// \n is discarded
	scanf("%[^\n]%*c", stu_1.name);
	
	printf("Enter age: ");
	scanf("%d", &stu_1.age);
	
	display(stu_1); // passing struct as an argument
	
	return 0;
}

void display(struct student stu){
	printf("\nDisplaying information\n");
	printf("Name: %s", stu.name);
	printf("\nAge: %d", stu.age);	
}

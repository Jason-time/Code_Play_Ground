#include <stdio.h>
struct student {
	char name[50];
	int age;
};

// function prototype
struct student getInformation();

int main(){
	struct student stu;
	stu = getInformation();

	printf("\nDisplaying information\n");
	printf("Name: %s", stu.name);
	printf("\nRoll: %d", stu.age);

	return 0;
}

struct student getInformation(){
	struct student stu_1;
	printf("Enter name: ");
	scanf("%[^\n]%*c", stu_1.name);

	printf("Enter age: ");
	scanf("%d", &stu_1.age);

	return stu_1;
}


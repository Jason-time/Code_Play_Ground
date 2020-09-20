#include <stdio.h>
struct student {
	char name[50];
	int roll;
	float marks;
} stu;

int main(){
	printf("Enter information:\n");
	printf("Enter name: ");
	fgets(stu.name,sizeof(stu.name),stdin);
	
	printf("Enter roll number: ");
	scanf("%d", &stu.roll);
	printf("Enter marks: ");
	scanf("%f", &stu.marks);
	
	printf("\nDisplaying information:\n");
	printf("Name: ");
	printf("%s", stu.name);
	printf("Rolll number: %d\n", stu.roll);
	printf("Marks: %.1f\n", stu.marks);
	
	return 0;
}

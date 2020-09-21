#include <stdio.h>
union unionJob{
	//defining a union
	char name[30];
	float salary;
	int workerNo;
}uJob;

struct structJob{
	char name[30];
	float salary;
	int wokerNo;
}sJob;

int main(){
	printf("size of union = %d bytes", sizeof(uJob));
	printf("\nsize of structure = %d bytes", sizeof(sJob));
	return 0;
}

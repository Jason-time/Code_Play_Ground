#include <stdio.h>
union Job{
	float salary;
	int workerNo;
}job;

int main(){
	job.salary =12.3;
	
	// when job.workerNo is assigned a value,
	// job.salary will no longer hold 12.3
	
	job.workerNo = 100;
	
	printf("Salary = %.1f\n", job.salary);
	printf("Number of workers = %d",job.workerNo);
}

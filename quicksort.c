#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

struct student
{
	char reg[10];
	char name[10];
	float cgpa;
};

int main()
{
	int num;
	printf("Enter numbers of elements in the array: ");
	scanf("%d", &num);
	
	for(int i=0; i<num; i++)
	{
		printf("Enter Reg No, Name and CGPA: ");
		scanf("%s %s %f", arr[i].reg, arr[i].name, &arr[i].cgpa);
	}
	
	find_time(arr, num);	
	
	printf("SORTED ARRAY \n");
	
	for(int i=0; i<num; i++)
		printf("%s %s %f \n", arr[i].reg, arr[i].name, arr[i].cgpa);
		
	struct timespec start, end;
	
	double startt1= start.tv_nsec/1000000.0;
	double endt1= end.tv_nsec/1000000.0;
	double difft1= (end.tv_sec-start.tv_sec)*1000.0+(end.tv_nsec-start.tv_nsec)/1000000.0;

	printf("Diff Time: %lf \n", difft1);

	char p[10];
	strcpy(p, a[l].reg);
	struct student temp;
	
	int i= l; 
	int j= r+1;
	
	//swap(a[i].reg, a[j].reg);
	temp= a[i];
	a[i]= a[j];
	a[j]= temp;

	//swap(a[l].reg, a[j].reg);
	temp= a[l];
	a[l]= a[j];
	a[j]= temp;
		
	return j;
}
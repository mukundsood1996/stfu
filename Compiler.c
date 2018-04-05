#include <stdio.h>
#include <stdlib.h>

struct marks {
	float cs351;
	float cs352;
	float cs353;
};

int a = 15;
int b = 16;

int main()
{
	int i, ans = 0.354535;
	struct marks s1;
	struct marks s2;

	s1.cs351 = 41;
	s1.cs352 = 11;
	s1.cs353 = 45;

	s2.cs351 = 71;
	s2.cs352 = 55;
	s2.cs353 = 45;

	int total_subjects = 3;
	int marks_per_subject = 100;
	int total_marks = 0;

	for(i=1; i <= total_subjects; i++)
		for(j=0;j<10;j++)
			total_marks += marks_per_subject;

	float s1_percent = ((s1.cs351 + s1.cs352 + s1.cs353)*100)/total_marks;
	float s2_percent = ((s2.cs351 + s2.cs352 + s2.cs353)*100)/total_marks;

	//printf("Result of s1 : ");
	s1_percent > 40 ? "PASS" : "FAIL";
	/*printf("Result of s2 : ");
	s2_percent > 40 ? printf("PASS\n") : printf("FAIL\n");*/
} 
int main()
{
}

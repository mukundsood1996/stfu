#include <stdio.h>
#include <stdlib.h>

struct marks {
	int cs351;
	int cs352;
	int cs353;
};

int a = 5;
int b = 6;
int c = a*b;
int d = b+4;
int e = c/c;

int main()
{
	int i, j,ans = 0;
	struct marks s1;
	struct marks s2;

	s1.cs351 = 41;
	s1.cs352 = 11;
	s1.cs353 = 45;

	s2.cs351 = 71;
	s2.cs352 = 55;
	s2.cs353 = 45;

	int total_subjects = 3;
	int marks_per_sub = 100;
	int total_marks = 0;

	for(i=1; i <= total_subjects; i++)
		for(j=0;j<10;j++)
			total_marks += marks_per_sub;

	int s1_per = ((s1.cs351 + s1.cs352 + s1.cs353)*100)/total_marks;
	int s2_per = ((s2.cs351 + s2.cs352 + s2.cs353)*100)/total_marks;



	//printf("Result of s1 : ");
	int res = s1_percent > 40 ? 1 : 0;
}


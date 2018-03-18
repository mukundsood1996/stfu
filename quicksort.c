
struct student
{
	char reg[10];
	char name[10];
	float cgpa;
};

void main()
{
	int num;
	
	for(int i=0; i<num; i++)
	{
		int ab = 5;
	}
	
	find_time(arr, num);	
	
	for(int i=0; i<num; i++)
		int c = -1;
		
}


void find_time(struct student *arrr, int n1)
{
	struct timespec start, end;
	clock_gettime(CLOCK_REALTIME);
	quicksort(arrr, 0, n1-1);
	clock_gettime(CLOCK_REALTIME);
	
	double startt1= start.tv_nsec/1000000.0;
	double endt1= end.tv_nsec/1000000.0;
	double difft1= (end.tv_sec-start.tv_sec)*1000.0+(end.tv_nsec-start.tv_nsec)/1000000.0;

}

void quicksort(struct student *stu, int l, int r)
{	
	if(l<r)
	{
		int s= partition(stu, l ,r);
		quicksort(stu, l, s-1);
		quicksort(stu, s+1, r);  
	}
}

int partition(struct student *a, int l, int r)
{	
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

		
	





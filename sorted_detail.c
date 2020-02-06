#include<stdio.h>
#include<string.h>
typedef struct detail
{
	int rl_no;
	char name[20];
	int marks;
}dtl;
int main()
{	
	char ch;
	dtl a[20],temp;
	int i,n,j;
	printf("Enter the number of students:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter detail of student %d:",i+1);
		fflush(stdin);
		printf("\n\tEnter the name:\t");
		gets(a[i].name);
		printf("\n\tEnter Roll number:\t");
		scanf("%d",&a[i].rl_no);
		printf("\n\tInput the marks:\t");
		scanf("%d",&a[i].marks);
	}
	printf("\n\n\nInput your choice:\n\t1 to sort according to roll no\n\t2 to sort according to name\n\t3 to sort according to marks:\n\tYour choice:");
	fflush(stdin);
	scanf("%c",&ch);
	switch(ch)
	{
		case '1':
			for(i=0;i<n-1;i++)
			for(j=0;j<(n-i-1);j++)
				if(a[j].rl_no>a[j+1].rl_no)
				{
					temp.marks=a[j].marks;
					temp.rl_no=a[j].rl_no;
					strcpy(temp.name,a[j].name);
	
					a[j].marks=a[j+1].marks;
					a[j].rl_no=a[j+1].rl_no;
					strcpy(a[j].name,a[j+1].name);
					
					a[j+1].marks=temp.marks;
					a[j+1].rl_no=temp.rl_no;
					strcpy(a[j+1].name,temp.name);
				}
		case '2':
			for(i=0;i<n-1;i++)
			for(j=0;j<(n-i-1);j++)
				if(strcmp(a[j].name,a[j+1].name)>strcmp(a[j+1].name,a[j].name))
				{
					temp.marks=a[j].marks;
					temp.rl_no=a[j].rl_no;
					strcpy(temp.name,a[j].name);
	
					a[j].marks=a[j+1].marks;
					a[j].rl_no=a[j+1].rl_no;
					strcpy(a[j].name,a[j+1].name);
					
					a[j+1].marks=temp.marks;
					a[j+1].rl_no=temp.rl_no;
					strcpy(a[j+1].name,temp.name);
				}
				break;
			
		case '3':
			for(i=0;i<n-1;i++)
			for(j=0;j<(n-i-1);j++)
				if(a[j].marks>a[j+1].marks)
				{
					temp.marks=a[j].marks;
					temp.rl_no=a[j].rl_no;
					strcpy(temp.name,a[j].name);
	
					a[j].marks=a[j+1].marks;
					a[j].rl_no=a[j+1].rl_no;
					strcpy(a[j].name,a[j+1].name);
					
					a[j+1].marks=temp.marks;
					a[j+1].rl_no=temp.rl_no;
					strcpy(a[j+1].name,temp.name);
				}
				break;
			
		default:
			printf("\n::Wrong choice::");
	}
	printf("\n\nYour required list is:");
	for(i=0;i<n;i++)
	{
		printf("\nDetail of student %d:",i+1);
		printf("\n\tRoll number:\t%d",a[i].rl_no);
		printf("\n\tName:\t%s",a[i].name);
		printf("\n\tMarks:\t%d",a[i].marks);
	}	
}

#include<stdio.h>
typedef struct process
{
	int at,bt,wt,ct,tat;
}pr;
int main()
{
	int i,n;
	printf("Enter the number of processes:\n");
	scanf("%d",&n);
	pr a[n];
	int sat,sbt,swt,sct,stat;
	sat=sbt=swt=sct=stat=0;
	for(i=0;i<n;i++)
	{
		printf("Input AT and BT for p%d:\t",i+1);
		scanf("%d%d",&a[i].at,&a[i].bt);
	}
	for(i=0;i<n;i++)
	{
		if(i==0)
			a[i].ct=a[i].bt;
		else
			{
				a[i].ct=a[i].bt+a[i-1].ct;
			}
		a[i].wt=a[i].ct-a[i].bt;
		a[i].tat=a[i].ct-a[i].at;
	}
	printf("\nProcess\tAT\tBT\tWT\tCT\tTAT\n");
	for(i=0;i<n;i++)
	{
		printf("p%d\t%d\t%d\t%d\t%d\t%d\t\n",i+1,a[i].at,a[i].bt,a[i].wt,a[i].ct,a[i].tat);
		sat=sat+a[i].at;
		sbt=sbt+a[i].bt;
		swt=swt+a[i].wt;
		sct=sct+a[i].ct;
		stat=stat+a[i].tat;
 	}
	printf("Average:");
	printf("\n%d\t%d\t%d\t%d\t%d\t%d\n",1,sat/n,sbt/n,swt/n,sct/n,stat/n);
}

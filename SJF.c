#include<stdio.h>
typedef struct process
{
	int sr,at,bt,wt,ct,tat;
}pr;
int main()
{
	int i,n;
	printf("Enter the number of processes:\n");
	scanf("%d",&n);
	pr a[n],temp;
	int sat,sbt,swt,sct,stat;
	sat=sbt=swt=sct=stat=0;
	for(i=0;i<n;i++)
	{
		printf("Input AT and BT for p%d:\t",i+1);
		scanf("%d%d",&a[i].at,&a[i].bt);
		a[i].sr=i+1;
	}
				//sorting on the base of burst time//
	int j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j].bt>a[j+1].bt)
			{
				temp.at=a[j].at;
				a[j].at=a[j+1].at;
				a[j+1].at=temp.at;
				
				temp.bt=a[j].bt;
				a[j].bt=a[j+1].bt;
				a[j+1].bt=temp.bt;
				
				temp.sr=a[j].sr;
				a[j].sr=a[j+1].sr;
				a[j+1].sr=temp.sr;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("p%d\t%d\t%d\n",a[i].sr,a[i].at,a[i].bt);
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
		printf("p%d\t%d\t%d\t%d\t%d\t%d\t\n",a[i].sr,a[i].at,a[i].bt,a[i].wt,a[i].ct,a[i].tat);
		sat=sat+a[i].at;
		sbt=sbt+a[i].bt;
		swt=swt+a[i].wt;
		sct=sct+a[i].ct;
		stat=stat+a[i].tat;
 	}
	printf("Average:");
	printf("\n%d\t%d\t%d\t%d\t%d\t%d\n",0000,sat/n,sbt/n,swt/n,sct/n,stat/n);
}

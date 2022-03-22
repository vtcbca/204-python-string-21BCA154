#include<stdio.h>
#include<conio.h>
int menu();
void sum();
void palindrom(int);
int armstrong();
int squre(int);
void main()
{
	int a,b,c;
	char yn;
	clrscr();
	do
	{
		c=menu();
		switch(c)
		{
			case 1:
				sum();
				break;
			case 2:
				printf("enter value for checkig palindrom or not.:");
				scanf("%d",&c);
				palindrom(c);
				break;
			case 3:
				c=armstrong();
				if(c==1)
					printf("Armstrong number.");
				else
					printf("number is not armstrong.");
				break;
			case 4:
				printf("enter any number to print squre serise:");
				scanf("%d",&a);
				c=squre(a);
				break;
			case 5:
				exit(0);
			default:
				printf("invalid choise");
		}
		printf("\nyou want to continue?if yes(y/Y) else no(N/n):");
		flushall();
		scanf("%c",&yn);
	}while(yn=='y'||yn=='Y');
	getch();
}
int menu()
{
	int choise;
	printf("\n\n\t\tmenu\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
	printf("\n\t1\tsum of each degit\n");
	printf("\n\t2\tsum of palindrom\n");
	printf("\n\t3\tsum of armstrong\n");
	printf("\n\t4\tsum of squre serise\n");
	printf("\n\t5\tsum of exit\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	printf("enter your choise:");
	scanf("%d",&choise);
	return choise;
}
void sum()
{
	int c,b,a=0;
	printf("enter number to calculate sum:");
	scanf("%d",&c);
	while(c>0)
	{
		b=c%10;
		a=a+b;
		c=c/10;
	}
	printf("sum of each degit is:%d",a);
}
void palindrom(int n)
{
	int i,s=0,t=n;
	while(n>0)
	{
		i=n%10;
		s=(s*10)+i;
		n=n/10;
	}
	if(t==s)
		printf("number is palindrom.");
	else
		printf("number is not palindrom");
}
int armstrong()
{
	int n,i,s=0,t;
	printf("enter number to find number is armstrong or not.:");
	scanf("%d",&n);
	n=t;
	while(n>0)
	{
		i=n%10;
		s=s+(i*i*i);
		n=n/10;
	}
	if(t==s)
		return 1;
	else
		return 0;
}
int squre(int a)
{
	int i;
	printf("\n\n");
	for(i=1;i<=a;i++)
		printf("%d ",i*i);
	return 0;
} 






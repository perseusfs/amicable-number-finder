#include<stdio.h>
void buddy(int a,int b)
{	
	int sum1=0, sum2=0, j, i;
	for(i=1;i<a;i++)
	{
		if((a%i)==0)
			sum1+=i;
		else 
			continue;
	}
	for(j=1;j<b;j++)
	{
		if((b%j)==0)
			sum2+=j;
		else 
			continue;
	}
	if(sum1==b && sum2==a)
		printf("They are amicable numbers!\n");
	else
		printf("They are NOT amicable numbers!\n");
	return;
}

int main()
{
	int a,b;
	printf("Enter 2 numbers with a space between them to see if they are amicable or not.\n");
	scanf("%d %d",&a,&b);
	buddy(a,b);
	return 0;
}

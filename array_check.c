#include <stdio.h>
int main()
{
	int a[10],key,i;
	char found='n';
	for(i=0;i<10;i++)
	{
		printf("Enter a %d number:",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("Enter which number You Wante:",i+1);
	scanf("%d",&key);
	for(i=0;i<10;i++)
	{
		if(key==a[i])
		{
			found='y';
			printf("%d position-%d\n",a[i],i+1);
		}
	}
	if(found=='n')
		printf("Data not found");
		else
		printf("Thank you for Checking...");
}

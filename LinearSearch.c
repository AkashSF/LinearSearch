#include<stdio.h>
int main()
{
	int a[5], x, i, count=1;
	printf("Enter elements of array: ");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	printf("\nNumber to search for: ");
	scanf("%d", &x);
	for(i=0; i<5;i++)
	{
		if(a[i]==x)
		{
			printf("Found at: Position %d", i+1);
			count=0;
		}
	}
	if(count!=0)
	printf("Number not present.");
	
}

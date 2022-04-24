#include<stdio.h>

int main()
{
	int n1,n2,sum,product,div,r;
	printf("Enter 2 numbers: ");
	scanf("%d %d",&n1,&n2);
	sum=n1+n2;

	product=n1*n2;
	div=n2/n1;
	r=n2%n1;
	printf("The sum is %d \nThe product is %d \nThe quotient is %d \nThe remainder is %d",sum,product,div,r);
	return 0; 
}
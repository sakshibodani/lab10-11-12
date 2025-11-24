//Write a program to dynamically allocate memory for an array of integers of size n entered by the
//user. Populate the array, double its size using realloc, add new elements, and display the updated
//array.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr;
	int n1;
	printf("Enter the size of array=");
	scanf("%d",  &n1);
	arr=(int *)malloc(n1 * sizeof(int));
	if(arr==NULL)
	{
		printf("\nfailed!");
	}
	printf("enter %d elements:", n1);
	for(int i=0; i<n1; i++)
	{
		scanf("%d", &arr[i]);
	}
	int n2=n1*2;
	arr=(int *)realloc(arr,n2 * sizeof(int));
	if(arr==NULL)
	{
			printf("\nfailed!");
	}
	printf("enter %d elements:", n2);
	for(int i=0; i<n2; i++)
	{
		scanf("%d", &arr[i]);
	}
}

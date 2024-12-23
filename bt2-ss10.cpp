#include <iostream>
#include <stdio.h> 
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int arr[10];
	for(int i=0;i<10;i++)
	{
		arr[i]=rand()%100;
	}
	printf("Day truoc khi sap xep: ");
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("\nDay sau khi sap xep: ");
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

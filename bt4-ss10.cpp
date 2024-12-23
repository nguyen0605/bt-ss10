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
		int min_idx=i;
		for(int j=i+1;j<10;j++)
		{
			if(arr[min_idx]>arr[j])
			{
				min_idx=j;
			}
		}
		int temp=arr[min_idx];
		arr[min_idx]=arr[i];
		arr[i]=temp;
	}
	printf("\nDay sau khi sap xep: ");
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

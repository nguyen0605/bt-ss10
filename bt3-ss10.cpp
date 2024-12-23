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
	for(int i=2;i<10;i++)
	{
		int key=arr[i];
		int j=i-1;
		for(;j>=0 && arr[j]>key;j--)
		{
			arr[j+1]=arr[j];
		}
		arr[j+1]=key;
	}
	printf("\nDay sau khi sap xep: ");
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

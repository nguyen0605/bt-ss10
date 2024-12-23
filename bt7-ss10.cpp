#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, m;
	printf("Nhap vao so hang: ");
	scanf("%d",&n);
	printf("Nhap vao so cot: ");
	scanf("%d",&m);
	if(n<0 || m<0)
	{
		printf("So khong hop le!");
		return 1;
	}
	int arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("Nhap vao gia tri arr[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<m-1;k++)
		{
			for(int j=0;j<m-k-1;j++)
			{
				if(arr[i][j]>arr[i][j+1])
				{
					int temp=arr[i][j];
					arr[i][j]=arr[i][j+1];
					arr[i][j+1]=temp;
				}
			}
		}
	}
	printf("\nDay sau khi sap xep: \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%5d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

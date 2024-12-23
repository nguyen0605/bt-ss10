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
	printf("\nMa tran ban dau:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
    int size=(n<m)?n:m;
	int duongCheoChinh[size];
	for(int i=0;i<size;i++)
	{
		duongCheoChinh[i]=arr[i][i];
	} 
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(duongCheoChinh[j]>duongCheoChinh[j+1])
			{
				int temp=duongCheoChinh[j];
				duongCheoChinh[j]=duongCheoChinh[j+1];
				duongCheoChinh[j+1]=temp;
			}
		}
	}
	for(int i=0;i<size;i++)
	{
		arr[i][i]=duongCheoChinh[i];
	}
	printf("\nMang sau khi sap xep lai duong cheo chinh\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%5d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

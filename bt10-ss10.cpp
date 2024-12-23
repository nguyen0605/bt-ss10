#include <iostream>

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
	int duongCheoPhu[size];
	for(int i=0;i<size;i++)
	{
		duongCheoPhu[i]=arr[i][n-i-1];
	} 
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(duongCheoPhu[j]<duongCheoPhu[j+1])
			{
				int temp=duongCheoPhu[j];
				duongCheoPhu[j]=duongCheoPhu[j+1];
				duongCheoPhu[j+1]=temp;
			}
		}
	}
	for(int i=0;i<size;i++)
	{
		arr[i][n-i-1]=duongCheoPhu[i];
	}
	printf("\nMang sau khi sap xep lai duong cheo phu theo thu tu giam dan\n");
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

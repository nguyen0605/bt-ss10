#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int arr[10]={-2,4,0,5,6,1,8,-4,11,-7}, n;
	printf("Nhap vao mot gia tri bat ki: ");
	scanf("%d",&n);
	int founded=0;
	for(int i=0;i<10;i++)
	{
		if(n==arr[i])
		{
			printf("Vi tri cua phan tu %d trong mang la a[%d]",n,i);
			founded=1;
			break;
		}
	}
	if(!founded)
	{
		printf("Phan tu khong ton tai trong mang!");
	}
}

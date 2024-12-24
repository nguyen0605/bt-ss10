#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int binary_search(int a[], int n, int x)
{
	int l=0, r=n-1;
	while(l<=r)
	{
		int m=(l+r)/2;
		if(a[m]==x)
		{
			return m;
		}
		else if(a[m]>x)
		{
			r=m-1;
		}
		else{
			l=m+1;
		}
	}
	return -1;
}
int main(int argc, char** argv) {
	int n=10,x;
	int a[n]={12,0,-23,2,6,9,4,-5,-9,-1};
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Mang sau khi sap xep: ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nNhap vao mot so nguyen bat ki: ");
	scanf("%d",&x);
	int result=binary_search(a,n,x);
	if(result!=-1){
		printf("Vi tri cua %d trong mang la a[%d]",x,result);	
	}
	else{
		printf("%d khong ton tai trong mang",x);
	}
	return 0;
}

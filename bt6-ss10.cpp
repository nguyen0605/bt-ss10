#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int found(int a[], int n, int x){
	int count=0;
	int address[n];
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			address[count]=i;
			count++;
		}
	}
	if(count>0)
	{
		printf("%d ton tai trong mang tai cac vi tri: ",x);
		for(int i=0;i<count;i++)
		{
			printf("%d ",address[i]);
		}
	}else{
		printf("%d khong ton tai trong mang",x);
	}
	
}
int main(int argc, char** argv) {
	int n=10,x;
	int a[n]={12,0,-23,-5,6,9,4,-5,-9,-5};
	printf("Nhap vao so nguyen bat ki: ");
	scanf("%d",&x);
	found(a,n,x);
	return 0;
}

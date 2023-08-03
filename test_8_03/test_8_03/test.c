#include<stdio.h>
void bubble_sort(int arr,int sz)
{
	int i=0;
	for(i=0;i<sz-1;i++)
	{
		int j=0;
		for(j=0;j<sz-1-i;j++)
		{
			int tmp =arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=tmp;
		}
	}
}
    
int main()
{
int arr[]={0,1,2,3,4,5,6,7,8,9,};
int i=0;
int sz=sizeof(arr)/sizeof(arr[0]);
bubble_sort(arr,sz);
	for(i=0;i<sz;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}








//int main()
//{
//	int num1=0;
//	int num2=0;
//	int sum=0;
//	scanf("%d%d",&num1,&num2);
//	sum=num1+num2;
//	printf("sum=%d\n",sum);
//	return 0;
//
//}

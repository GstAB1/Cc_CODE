#include<stdio.h>
//��֪����a�е�Ԫ����С�����˳�����У����³���Ĺ����ǽ������һ������������a�У����������a�е�Ԫ����Ȼ����С�����˳������
#include<string.h>
int main()
{
	int a[10]={0,12,17,20,25,28,30};
	int x,i;
	int j=6;
	printf("Enter a number:");
	scanf("%d",&x);
	a[0]=x;
	i=j;
	while(a[i]>x)
	{
		a[i+1]=a[i];i--;
	}
	a[++i]=x;
	j++;
	for(i=1;i<=j;i++)
		printf("%8d",a[i]);
	printf("\n");
}
//int main()
//{
//	char s[80],c;
//	int j,k;
//	printf("\nEnter a string:");
//	gets(s);
//	printf("\nEnter a character:");
//	c=getchar();
//	for(j=k=0;s[j]!='\0';j++)
//		if(s[j]!=c)
//			s[k++]=s[j];
//	s[k]='\0';
//	printf("\n%s",s);
//}

//ʵ�ֽ�������ַ����������
//int main()
//{
//	char c[200],c1;
//	int i,j,k;
//	printf("Enter a string:");
//	scanf("%s",c);
//	k=strlen(c);
//	for(i=0,j=k-1;i<k/2;i++,j--)
//	{
//		c1=c[i];
//		c[i]=c[j];
//		c[j]=c1;
//	}printf("%s\n",c);
//	return 0;
//}


//��̴�ӡ���������
//int main()
//{
//	int i=0;
//	int j=0;
//	int a[6][6]={0};
//	for(i=0;i<=5;i++)
//	{
//		a[i][i]=1;
//		a[i][0]=1;
//	}
//	for(i=2;i<=5;i++)
//	for(j=1;j<=i-1;j++)
//	   a[i][j]=a[i-1][j]+a[i-1][j-1];
//	for(i=0;i<=5;i++)
//	{
//		for(j=0;j<=i;j++)
//			printf("%4d",a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

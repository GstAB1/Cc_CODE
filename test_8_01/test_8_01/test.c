#include<stdio.h>
int main()
{
	char a=-128;   //10000000 00000000 00000000 10000000
	printf("%u",a);//11111111 11111111 11111111 01111111  (%u���޷���ʮ������)
	return 0;      //11111111 11111111 11111111 10000000
	               //10000000  ���λ��1  ����Ϊ���� ����������Ϊ11111111 11111111 11111111 10000000
}






//int main()
//{
//	char a=-1;
//	                                     //char a =-1;
//	signed char b=-1; 
//	                                     //10000000 00000000 00000000 00000001
//	unsigned char c=-1;
//	//��Ϊ���޷��ţ�����11111111������������Ϊ // 00000000 00000000  00000000 11111111��������
//	                                    //11111111 11111111 11111111 11111110
//	printf("a=%d,b=%d,c=%d",a,b,c);   //11111111 11111111 11111111 11111111(-1�Ĳ���ȫ1)
//	return 0;                         //  ��Ϊ��char  ���� ֻ�� 11111111
//	                                  // ��Ϊ��%d ������������  11111111 11111111 11111111 11111111
//}
//
//



////���������ֽں�С���ֽڵĸ�����һ��С�������жϵ�ǰ�������ֽ���2015��ٶȳ���Ա�����⣩
//int check_sys()
//{
//	int a=1;
//	char*p=(char*)&a;
//	return *p;
//}
//int main()
//{
//
//	// дһ�δ���������ǵ�ǰ�Ļ����ֽ�����ʲô
//	//����1��С��
//	//����0�����
//	int ret=check_sys();
//	if(ret==1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}






//#include<assert.h>
//char* my_strcpy(char*dest,const char*src)
//{
//	 char* ret=dest;
//	 assert(dest!=NULL);//����
//	 assert(src!=NULL);// ����
//	 while(*dest++=*src++);//��srcָ����ַ�������destָ��Ŀռ䣬������\0�����ַ�
//	 {
//		 ;
//	 }
//	 return ret;
//}
//int main()
//{
//	char arr1[]="############";
//	char arr2[]="bit";
//	
//	printf("%s\n",my_strcpy(arr1,arr2));
//	return 0;
//
//} 


//
//
//int main()
//{
//	const int num =10;
//
//	int*p= &num;
//	*p=20;
//
//	printf("%d\n",num);
//	return 0;
//}



//void my_strcpy(char* dest,char*src)
//{
//	assert(*dest !=NULL);
//    assert(*src !=NULL);
//	while(*dest++=*src++)
//	{  
//		;
//	}
//}
//int main()
//{
//	char arr1[]="############";
//	char arr2[]="bit";
//	my_strcpy(arr1,arr2);
//	printf("%s\n",arr1);
//	return 0;
//
//} 
#include<stdio.h>
int main()
{
	char a=-128;   //10000000 00000000 00000000 10000000
	printf("%u",a);//11111111 11111111 11111111 01111111  (%u是无符号十进制数)
	return 0;      //11111111 11111111 11111111 10000000
	               //10000000  最高位是1  所以为负数 整型提升后为11111111 11111111 11111111 10000000
}






//int main()
//{
//	char a=-1;
//	                                     //char a =-1;
//	signed char b=-1; 
//	                                     //10000000 00000000 00000000 00000001
//	unsigned char c=-1;
//	//因为是无符号，所以11111111，整型提升后为 // 00000000 00000000  00000000 11111111（正数）
//	                                    //11111111 11111111 11111111 11111110
//	printf("a=%d,b=%d,c=%d",a,b,c);   //11111111 11111111 11111111 11111111(-1的补码全1)
//	return 0;                         //  因为是char  所以 只有 11111111
//	                                  // 因为是%d 所以整型提升  11111111 11111111 11111111 11111111
//}
//
//



////请简述大端字节和小端字节的概念，设计一个小程序来判断当前机器的字节序（2015年百度程序员考试题）
//int check_sys()
//{
//	int a=1;
//	char*p=(char*)&a;
//	return *p;
//}
//int main()
//{
//
//	// 写一段代码告诉我们当前的机器字节序是什么
//	//返回1，小端
//	//返回0，大端
//	int ret=check_sys();
//	if(ret==1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}






//#include<assert.h>
//char* my_strcpy(char*dest,const char*src)
//{
//	 char* ret=dest;
//	 assert(dest!=NULL);//断言
//	 assert(src!=NULL);// 断言
//	 while(*dest++=*src++);//把src指向的字符拷贝到dest指向的空间，包含‘\0’的字符
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
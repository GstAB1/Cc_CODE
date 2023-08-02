#include<stdio.h>
int main()
{
	char arr[10]={'a','b','c','d'};
	char* pc=arr;
 	printf("%s\n",arr);
	printf("%s\n",pc);
	return 0;

}
//void test(int arr[])
//{
//	int sz=sizeof (arr)/sizeof (arr[0]);
//	printf("%d\n",sz);
//}
//int main()
//{
//	int arr[10]={ 0 };
//    test(arr);
//	return 0;
//}
//int main()
//{
//	  int n=9;                        // 0 0000000 0 0000000 00000000 00001001
//	  float *pFloat =(float*)&n;      //(-1)^0 * 0000000 00000000 00001001* 2^-126      
//
//	  printf("n的值为:%d\n",n);
//	  printf("*pfloat的值为:%lf\n",*pFloat);   //整数9，浮点数取出，E要减去127（单精度）
//	                                                                 //双精度为（1023）
//	  *pFloat=9.0;                     //1001.0
//	  printf("n的值为:%d\n",n);       //（-1）^0 * 1.001*2^3
//                                      //0 10000001 000 0000000000  0000000000
//	  printf("*pfloat的值为:%lf\n",*pFloat);  //浮点数9.0，整数取出，E加上127
//
//	                                                                  //（双精度为1023）
//	return 0;
//
//}

//int main()
//{
//	double d =1E10;
//	printf("%lf\n",d);
//	return 0;
//}


//int main()
//{
//	printf("hehe");
//	return 0;
//}


//int main()
//{
//	char a=-128;   //10000000 00000000 00000000 10000000
//	printf("%u",a);//11111111 11111111 11111111 01111111  (%u是无符号十进制数)
//	return 0;      //11111111 11111111 11111111 10000000
//	               //10000000  最高位是1  所以为负数 整型提升后为11111111 11111111 11111111 10000000
//}

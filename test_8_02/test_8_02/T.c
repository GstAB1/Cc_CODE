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
//	  printf("n��ֵΪ:%d\n",n);
//	  printf("*pfloat��ֵΪ:%lf\n",*pFloat);   //����9��������ȡ����EҪ��ȥ127�������ȣ�
//	                                                                 //˫����Ϊ��1023��
//	  *pFloat=9.0;                     //1001.0
//	  printf("n��ֵΪ:%d\n",n);       //��-1��^0 * 1.001*2^3
//                                      //0 10000001 000 0000000000  0000000000
//	  printf("*pfloat��ֵΪ:%lf\n",*pFloat);  //������9.0������ȡ����E����127
//
//	                                                                  //��˫����Ϊ1023��
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
//	printf("%u",a);//11111111 11111111 11111111 01111111  (%u���޷���ʮ������)
//	return 0;      //11111111 11111111 11111111 10000000
//	               //10000000  ���λ��1  ����Ϊ���� ����������Ϊ11111111 11111111 11111111 10000000
//}

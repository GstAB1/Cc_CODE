#include<stdio.h>

int main()
{
	int i=0,a=1,b=2,c=3,d=4;
	i=a++ || ++b || d++;         //   ||：i=1恒为真
	printf("a=%d\n b=%d\n c=%d\n d=%d\n",a,b,c,d);
	return 0;
}  //  2 2 3 4

//int main()
//{
//	int i=0,a=0,b=2,c=3,d=4;
//	i=a++ && ++b && d++;// &&：a为0，即i=0恒成立，后面都不运算
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n",a,b,c,d);
//	return 0;
//}//  1 2 3 4


//int main()
//{
//	int a=(int)3.14;//强制类型转换
//	printf("%d\n",a);
//	return 0;
//}
//  

////~按位取反  二进制位取反
//int main()
//{
//	int a =0;                       //00000000 00000000 00000000 00000000（a）
//	printf("%d\n",~a);              //11111111 11111111 11111111 11111111（~a）补码
//	return 0;                       //11111111 11111111 11111111 11111110  反码
//}                                   //10000000 00000000 00000000 00000001  原码



//int main()
//{
//	short s=0;//短整型  只有两个字节
//	int a=10;
//	printf("%d\n",sizeof(s=a+5));  // （s=a+5）：a+5 仍为整形 即4个字节但是 s只有两个字节，存不下
//	printf("%d\n",s); //sizeof()内表达式的不参与计算，所以S仍等于0
//	return 0;

//}

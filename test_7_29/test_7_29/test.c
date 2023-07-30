#include<stdio.h>
#include<math.h>

int main()
{
	int a =10;
	int b=20;
	int ret=0;
    ret = a+b;
    printf("%d\n",ret);
	return 0;

}

//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//void print1(stu gtt)
//{
//	printf("%d\n",gtt.age );
//	printf("%s\n",gtt.name );
//	printf("%s\n",gtt.sex);
//	printf("%s\n",gtt.tele );
//
//}
//void print2(stu *p)
//{
//	printf("%d\n",p->age );
//	printf("%s\n",p->name );
//	printf("%s\n",p->sex);
//	printf("%s\n",p->tele );
//
//}
//int main()
//{
//	stu s ={"李四",40,"150151011","男"};
//	print1(s);
//	print2(&s);
//	return 0;
//}
 //struct S
 //{
	// int a ;
	// char c;
	// char arr[29];
	// double d;
 //};
 //struct T
 //{
	// char ch[10];
	// struct S s;
	// char *pc;
 //};

 //int main()
 //{   char arr[]="hellowgt\n"; 
	// struct T t={"hehe",{100,'w',"hellow ",3.14},arr};
	// printf("%s\n",t.ch);//hehe 
	// printf("%s\n",t.pc);// hellowgt
	// printf("%s\n",t.s.arr );//hellow
	// printf("%lf\n",t.s.d);//3.14

	// return 0;

 //}





//
//
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu; // 是类型
//int main()
//{
//	Stu s1 ={"张三",20,"18379062538","男"};
//
//	struct Stu s2 ={"李四",20,"15079128050","保密"};
//
//	 
//	return 0;
//}

//struct 结构体关键字 stu 结构体标签 struct stu 结构体类型   
//struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;  创建的变量
//int main()
//{
//	struct Stu s;
//	return 0;
//
//}

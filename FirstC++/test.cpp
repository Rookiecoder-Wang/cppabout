#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include "swap.h"



using namespace std;
//#define Test 3.4

//int main() {
	/*Day 1
	double test1 = 3e2;

	long long test = 10;
	//cout <<  test1<<endl;
	//cout << "test";

	//system("pause");
	int d1 = 3.214;
	int d2 = 2;
	cout << (d1 == d2) << endl;

	*/



	/*Day 2

	int test = 0;
	cout << test << endl;
	//Demo
	double a, b, c;
	cin >> a >> b >> c;
	if (a > b) {
		if (a > c) {
			cout << "A" << endl;
		}
		else {
			cout << "C" << endl;
		}
	}
	else {
		if (b > c) {
			cout << "B" << endl;
		}
		else {
			cout << "C" << endl;
		}
	}
	*/



	/*Day 3

	int a , b;
	cin >> a >> b;
	a > b ? a : b = 100;
	cout << a << '\n' << b << endl;

	//switch的使用
	switch (a) {
	case 23:
		break;
	default:
		break;


	}
	int i = 1;
	while (true) {
		cout << i++ << endl;
	}

//猜数字，系统随机生成一个1到100之间的数字，玩家进行猜测，如果猜错，提示玩家数字过大或过小，如果猜对恭喜玩家胜利，并且退出游戏。

	//随机种子的生成，纯随机
	cout << (unsigned)time(NULL) <<endl;
	srand((unsigned)time(NULL));
	int a = 1, b = 100,f;
	int flag = rand() % (b - a + 1) + a;

	while (true) {
		cin >> f;
		if (f > flag) {
			cout << "猜大了，小点" << endl;
		}
		else if (f < flag) {
			cout << "猜小了，大点" << endl;
		}
		else {
			cout << flag<< '\n' << f << endl;
			break;
		}

	}

	cout << "OK" << endl;

	//do...while语句使用
	int a = 10, b = 1;
	do {
		a++;
		cout << a << endl;
	} while (a < 12);
	cout << a << endl;

			

//水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身，例如：1^3 + 5^3+ 3^3 = 153。请利用do...while语句，求出所有3位数中的水仙花数

	int i = 100, l, m, n;

	//int  k = 123;
	//cout << k % 10 << k / 10 % 10 << k/100 << endl;
	do {
		l = i % 10;
		m = i / 10 % 10;
		n = i / 100;
		if (((pow(l,3) + pow(m,3) + pow(n,3)) == i)) {
			cout << i << endl;
		}
		i++;
	} while (i < 1000);



//从1开始数到数字100， 如果数字个位含有7，或者数字十位含有7，或者该数字是7的倍数，我们打印敲桌子，其余数字直接打印输出。
for (int i = 1; i <= 100; i++) {
	if (i == 7 || i % 10 == 7 || i / 10 % 10 == 7 || i % 7 == 0) {
		cout << "YES" << endl;
	}
	else {
		cout << i << endl;
	}

	}


//嵌套循环打印一个10*10的“*”矩阵
for (int i = 1; i < 10; i++) {
	for (int j = 1; j < 10; j++) {
		cout << "* ";
	}
	cout << "*" << endl;
	}



//continue的使用
for (int i = 0; i < 100; i++)
{
	if (i % 2 == 0)
	{
		continue;
	}
	cout << i << endl;
}


//goto语句的使用
	goto FLAG;
	cout << "1" << endl;


FLAG:
	cout << "2" << endl;

	
//数组测试
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << sizeof(a) << endl;
	cout << sizeof(a[1]) << endl;
	cout << &a[1] << endl;



//在一个数组中记录了五只小猪的体重，如：int arr[5] = {300,350,200,400,250};找出并打印最重的小猪体重。
	int arr[5] = { 300,350,200,400,250 };
	int flag = arr[0];
	for (int i = 1; i < (sizeof(arr) / sizeof(arr[0])); i++) {
		if (arr[i] > flag) {
			flag = arr[i];
		}
	}
	cout << flag << endl;


//请声明一个5个元素的数组，并且将元素逆置.
	int arr[5] = { 1,2,3,4,5};
	int len = sizeof(arr) / sizeof(arr[1]),t;
	for (int i = 0; i < len / 2; i++) {
		t = arr[i];
		arr[i] = arr[len-i-1];
		arr[len - i-1] = t;
	}
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
	


	//二维数组测试
	int arr3[2][3] = { 1,2,3,4,5,6 };
	cout << arr3[1][2] << endl;
	int arr4[][3] = { 1,2,3,4,5,6 };
	cout << "二维数组第一个元素地址：" << &arr4[0][0] << endl;



	//案例描述：有三名同学（张三，李四，王五），在一次考试中的成绩分别如下表，请分别输出三名同学的总成绩
	int scores[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80},
	};
	string names[3] = { "张三","李四","王五" };
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += scores[i][j];
		}

		cout << names[i] << ":" << sum << endl;
	}

	*/

//return 0;

//}

	/*Day 4
	
	//一种方式，可以使得函数返回两个返回值
pair<int,int> swap(int num1, int num2) {
	cout << "交换前：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	pair<int, int> res;
	res = make_pair(num1, num2);

	return res;
	}

	
int main() {

	int a = 10;
	int b = 20;

	pair<int,int> res =  swap(a, b);

	cout << "mian中的 a = " << res.first << endl;
	cout << "mian中的 b = " << res.second << endl;

	return 0;
}



//头文件调用测试
int main() {
	int a = 10, b = 20;
	swap(a, b);
	cout << a << b << endl;
}




//指针有关操作
int main() {

	//1、指针的定义
	int a = 10; //定义整型变量a

	//指针定义语法： 数据类型 * 变量名 ;
	int * p = NULL;
	cout << p << endl;
	////指针变量赋值
	//p = &a; //指针指向变量a的地址
	//cout << &a << endl; //打印数据a的地址
	//cout << p << endl;  //打印指针变量p

	////2、指针的使用
	////通过*操作指针变量指向的内存
	//cout << "*p = " << *p << endl;

	//cout << *p << endl; //* 解引用
	//cout << sizeof(p) << endl;
	//cout << sizeof(char*) << endl;
	//cout << sizeof(float*) << endl;
	//cout << sizeof(double*) << endl;

	return 0;
}

*/





//20221130
/*Day 5



//指针专题
void swap2(int* a,int* b) {
	int t = *a;
	*a = *b;
	*b = t;

}

//指针专题
int main() {

	//int a = 10, b = 12;
	//const int * p = &a;
	//int * const q = &a;

	//p = &b;
	//*q = 12l;

	//cout << p << *p << q << *q << endl;

	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	
	//int* p = arr;
	//int len = sizeof(arr) / sizeof(arr[0]);
	//for (int i = 0; i < len; i++) {
	//	cout << *p << endl;
	//	p++;
	//}


	//swap2(&a,&b);
	//cout << a << b << endl;

	return 0;
}



//结构体专题
struct student
	{
		//成员列表
		string name;  //姓名
		int age;      //年龄
		int score;    //分数
	};

struct teacher {
		int id;
		string name;
		int age;
		student stu[10];
	};


void valuepass(student stu) {
	stu.name = "Test";
}

void addresspass(student *stu) {
	stu->name = "test";

}



int main() {

	

	//struct Test {
	//	string str;
	//	int a;
	//	double b;
	//	char c;
	//};


	//Test tes;
	//string a = "test";
	//cout << a << endl;

	//struct Test arr[10];


	//struct student
	//{
	//	//成员列表
	//	string name;  //姓名
	//	int age;      //年龄
	//	int score;    //分数
	//};

	//struct teacher {
	//	int id;
	//	string name;
	//	int age;
	//	student stu[10];
	//};


	//teacher te;
	//te.stu[1].score

	//student stu = { "张三",18,100};
	//student* p = &stu;

	//student num[3] = {
	//	{"张三",18,80 },
	//	{"李四",19,60 },
	//	{"王五",20,70 }
	//};
	//student* q = num;

	//cout << q++->age << q++->name << q++->score << endl;

	//cout << num[2].age << num[2].name << num[2].score << endl;
	//
	//
	//cout << p->age << p->name << p->score << endl;


	student test = { "张三",18,100};

	valuepass(test);

	cout << test.name << endl;

	addresspass(&test);
	cout << test.name << endl;



	return 0;
	}




//结构体案例1
struct student {
	string name;
	double score;

}std1;


struct teacher {
	string name;
	student stdn[5];

};

void values(teacher tea[], int len1, int len2) {

	string teac = "Teacher ";
	string stude = "Student ";
	char random[5] = { 'A','B','C','D','E'};
	srand((unsigned)time(NULL));
	for (int i = 0; i < len1; i++) {
		tea[i].name = teac + random[i];
		for (int j = 0; j < len2; j++) {
			tea[i].stdn[j].name = stude + random[j];
			tea[i].stdn[j].score = rand() % 41 + 60;
		}
	}

}

void print(teacher tea[], int len1, int len2) {

	int i, j;
	for (i = 0; i < len1; i++) {
		cout << tea[i].name << endl;
		for (j = 0; j<len2; j++){
			cout << tea[i].stdn[j].name << endl;
			cout << tea[i].stdn[j].score << endl;
			cout << "--------------" << endl;
		}
		cout << "---------" << endl;
	}

}



int main() {
	teacher tea[3];
	int len1 = sizeof(tea) / sizeof(tea[0]);
	int len2 = sizeof(tea[0].stdn) / sizeof(std1);

	values(tea, len1, len2);

	print(tea, len1, len2);


	return 0;
}



//结构体案例2

struct hero {
	string name;
	int age;
	bool sex;
};


void swaps(hero* p, hero* q) {
	hero t;
	t = *p;
	*p = *q;
	*q = t;
}

void sort(hero heros[], int len) {
	int i, j,t;
	for (i = 0; i < len; i++) {
		for (j = i; j < len; j++) {
			if (heros[i].age > heros[j].age) {
				swaps(&heros[i], &heros[j]);
			}
		}
	}

}


void print(hero heros[], int len) {
	for (int i = 0; i < len; i++) {
		cout << heros[i].age << heros[i].name << heros[i].sex << endl;
		cout << "----------- " << endl;


	}
}


int main() {

	hero heros[5] = {
		{"刘备",23,"1"},
		{"关羽",22,"1"},
		{"张飞",20,"1"},
		{"赵云",21,"1"},
		{"貂蝉",19,"0"},
	};

	int len = sizeof(heros) / sizeof(heros[2]);
	sort(heros, len);
	print(heros, len);
	

}

*/



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

	//switch��ʹ��
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

//�����֣�ϵͳ�������һ��1��100֮������֣���ҽ��в²⣬����´���ʾ������ֹ�����С������¶Թ�ϲ���ʤ���������˳���Ϸ��

	//������ӵ����ɣ������
	cout << (unsigned)time(NULL) <<endl;
	srand((unsigned)time(NULL));
	int a = 1, b = 100,f;
	int flag = rand() % (b - a + 1) + a;

	while (true) {
		cin >> f;
		if (f > flag) {
			cout << "�´��ˣ�С��" << endl;
		}
		else if (f < flag) {
			cout << "��С�ˣ����" << endl;
		}
		else {
			cout << flag<< '\n' << f << endl;
			break;
		}

	}

	cout << "OK" << endl;

	//do...while���ʹ��
	int a = 10, b = 1;
	do {
		a++;
		cout << a << endl;
	} while (a < 12);
	cout << a << endl;

			

//ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵������������磺1^3 + 5^3+ 3^3 = 153��������do...while��䣬�������3λ���е�ˮ�ɻ���

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



//��1��ʼ��������100�� ������ָ�λ����7����������ʮλ����7�����߸�������7�ı��������Ǵ�ӡ�����ӣ���������ֱ�Ӵ�ӡ�����
for (int i = 1; i <= 100; i++) {
	if (i == 7 || i % 10 == 7 || i / 10 % 10 == 7 || i % 7 == 0) {
		cout << "YES" << endl;
	}
	else {
		cout << i << endl;
	}

	}


//Ƕ��ѭ����ӡһ��10*10�ġ�*������
for (int i = 1; i < 10; i++) {
	for (int j = 1; j < 10; j++) {
		cout << "* ";
	}
	cout << "*" << endl;
	}



//continue��ʹ��
for (int i = 0; i < 100; i++)
{
	if (i % 2 == 0)
	{
		continue;
	}
	cout << i << endl;
}


//goto����ʹ��
	goto FLAG;
	cout << "1" << endl;


FLAG:
	cout << "2" << endl;

	
//�������
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << sizeof(a) << endl;
	cout << sizeof(a[1]) << endl;
	cout << &a[1] << endl;



//��һ�������м�¼����ֻС������أ��磺int arr[5] = {300,350,200,400,250};�ҳ�����ӡ���ص�С�����ء�
	int arr[5] = { 300,350,200,400,250 };
	int flag = arr[0];
	for (int i = 1; i < (sizeof(arr) / sizeof(arr[0])); i++) {
		if (arr[i] > flag) {
			flag = arr[i];
		}
	}
	cout << flag << endl;


//������һ��5��Ԫ�ص����飬���ҽ�Ԫ������.
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
	


	//��ά�������
	int arr3[2][3] = { 1,2,3,4,5,6 };
	cout << arr3[1][2] << endl;
	int arr4[][3] = { 1,2,3,4,5,6 };
	cout << "��ά�����һ��Ԫ�ص�ַ��" << &arr4[0][0] << endl;



	//����������������ͬѧ�����������ģ����壩����һ�ο����еĳɼ��ֱ����±���ֱ��������ͬѧ���ܳɼ�
	int scores[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80},
	};
	string names[3] = { "����","����","����" };
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
	
	//һ�ַ�ʽ������ʹ�ú���������������ֵ
pair<int,int> swap(int num1, int num2) {
	cout << "����ǰ��" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "������" << endl;
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

	cout << "mian�е� a = " << res.first << endl;
	cout << "mian�е� b = " << res.second << endl;

	return 0;
}



//ͷ�ļ����ò���
int main() {
	int a = 10, b = 20;
	swap(a, b);
	cout << a << b << endl;
}




//ָ���йز���
int main() {

	//1��ָ��Ķ���
	int a = 10; //�������ͱ���a

	//ָ�붨���﷨�� �������� * ������ ;
	int * p = NULL;
	cout << p << endl;
	////ָ�������ֵ
	//p = &a; //ָ��ָ�����a�ĵ�ַ
	//cout << &a << endl; //��ӡ����a�ĵ�ַ
	//cout << p << endl;  //��ӡָ�����p

	////2��ָ���ʹ��
	////ͨ��*����ָ�����ָ����ڴ�
	//cout << "*p = " << *p << endl;

	//cout << *p << endl; //* ������
	//cout << sizeof(p) << endl;
	//cout << sizeof(char*) << endl;
	//cout << sizeof(float*) << endl;
	//cout << sizeof(double*) << endl;

	return 0;
}

*/





//20221130
/*Day 5



//ָ��ר��
void swap2(int* a,int* b) {
	int t = *a;
	*a = *b;
	*b = t;

}

//ָ��ר��
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



//�ṹ��ר��
struct student
	{
		//��Ա�б�
		string name;  //����
		int age;      //����
		int score;    //����
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
	//	//��Ա�б�
	//	string name;  //����
	//	int age;      //����
	//	int score;    //����
	//};

	//struct teacher {
	//	int id;
	//	string name;
	//	int age;
	//	student stu[10];
	//};


	//teacher te;
	//te.stu[1].score

	//student stu = { "����",18,100};
	//student* p = &stu;

	//student num[3] = {
	//	{"����",18,80 },
	//	{"����",19,60 },
	//	{"����",20,70 }
	//};
	//student* q = num;

	//cout << q++->age << q++->name << q++->score << endl;

	//cout << num[2].age << num[2].name << num[2].score << endl;
	//
	//
	//cout << p->age << p->name << p->score << endl;


	student test = { "����",18,100};

	valuepass(test);

	cout << test.name << endl;

	addresspass(&test);
	cout << test.name << endl;



	return 0;
	}




//�ṹ�尸��1
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



//�ṹ�尸��2

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
		{"����",23,"1"},
		{"����",22,"1"},
		{"�ŷ�",20,"1"},
		{"����",21,"1"},
		{"����",19,"0"},
	};

	int len = sizeof(heros) / sizeof(heros[2]);
	sort(heros, len);
	print(heros, len);
	

}

*/



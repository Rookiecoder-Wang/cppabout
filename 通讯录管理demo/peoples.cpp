#include "peoples.hpp"


void addpeople(book * p) {
	if (p->num == MAX) {
		cout<< "FULL" << endl;
		return;
	}
	int nu = p->num;
	cout << nu << endl;
	//姓名
	string name;
	cout << "请输入姓名：" << endl;
	cin >> name;
	p->ps[nu].name = name;

	cout << "请输入性别：" << endl;
	cout << "1 -- 男" << endl;
	cout << "2 -- 女" << endl;
	//性别
	int sex = 0;
	while (true)
	{
		cin >> sex;
		if (sex == 1 || sex == 2)
		{
			p->ps[nu].sex = sex;
			break;
		}
		cout << "输入有误，请重新输入";
	}

	//年龄
	cout << "请输入年龄：" << endl;
	int age = 0;
	cin >> age;
	p->ps[nu].age = age;

	//联系电话
	cout << "请输入联系电话：" << endl;
	long long int phone;
	cin >> phone;
	p->ps[nu].tel = phone;

	//家庭住址
	cout << "请输入家庭住址：" << endl;
	string address;
	cin >> address;
	p->ps[nu].address = address;

	p->num++;

	cout << "添加成功" << endl;
	system("cls");

}


void showpeople(book* p) {

	if (p->num == 0) {
		cout << "EMPTY!" << endl;
		return;
	}

	cout << "Name plz" << endl;
	string str;
	cin >> str;
	for (int i = 0; i < p->num; i++) {
		if (p->ps[i].name == str) {
			cout <<"yeal we find it" << endl;
			break;
		}

		if (i == p->num - 1) {
			cout << "Wrong Name" << endl;
		}
	}

}

void delpeople(book* p) {
	if (p->num == 0) {
		cout << "EMPTY!" << endl;
		return;
	}
	cout << "Name plz" << endl;
	string str;
	cin >> str;
	for (int i = 0; i < p->num; i++) {
		if (p->ps[i].name == str) {
			cout << "yeal we del it" << endl;
			for (int j = i; j < p->num-1; j++) {
				p->ps[j] = p->ps[j + 1];
			}
			p->num--;
			break;
		}

		if (i == p->num - 1) {
			cout << "Wrong Name" << endl;
		}
	}
}


void changepeople(book* p) {
	if (p->num == 0) {
		cout << "NULL" << endl;
	}

	cout << "NAME plz" << endl;
	string str;
	cin >> str;


}

void trunkpeople(book* p) {
	while (p->num != 0) {




	}



}
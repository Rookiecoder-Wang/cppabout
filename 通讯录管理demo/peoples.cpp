#include "peoples.hpp"


void addpeople(book * p) {
	if (p->num == MAX) {
		cout<< "FULL" << endl;
		return;
	}
	int nu = p->num;
	cout << nu << endl;
	//����
	string name;
	cout << "������������" << endl;
	cin >> name;
	p->ps[nu].name = name;

	cout << "�������Ա�" << endl;
	cout << "1 -- ��" << endl;
	cout << "2 -- Ů" << endl;
	//�Ա�
	int sex = 0;
	while (true)
	{
		cin >> sex;
		if (sex == 1 || sex == 2)
		{
			p->ps[nu].sex = sex;
			break;
		}
		cout << "������������������";
	}

	//����
	cout << "���������䣺" << endl;
	int age = 0;
	cin >> age;
	p->ps[nu].age = age;

	//��ϵ�绰
	cout << "��������ϵ�绰��" << endl;
	long long int phone;
	cin >> phone;
	p->ps[nu].tel = phone;

	//��ͥסַ
	cout << "�������ͥסַ��" << endl;
	string address;
	cin >> address;
	p->ps[nu].address = address;

	p->num++;

	cout << "��ӳɹ�" << endl;
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
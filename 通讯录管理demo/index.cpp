#include "index.hpp"
#include "peoples.hpp"

book bo;

//�˵�����
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}


int indexpage() {
	while (true) {
		showMenu();
		int sel;
		cin >> sel;
		switch (sel) {
		case 1:  //�����ϵ��
			addpeople(&bo);
			break;
		case 2:  //��ʾ��ϵ��
			showpeople(&bo);
			break;
		case 3:  //ɾ����ϵ��
			delpeople(&bo);
			break;
		case 4:  //������ϵ��
			showpeople(&bo);
			break;
		case 5:  //�޸���ϵ��
			changepeople(&bo);
			break;
		case 6:  //�����ϵ��
			trunkpeople(&bo);
			break;
		case 0:  //�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			return 0;
		default :
			continue;
		}
	}

	return 0;
}
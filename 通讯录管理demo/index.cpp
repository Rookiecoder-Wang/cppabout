#include "index.hpp"
#include "peoples.hpp"

book bo;

//菜单界面
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}


int indexpage() {
	while (true) {
		showMenu();
		int sel;
		cin >> sel;
		switch (sel) {
		case 1:  //添加联系人
			addpeople(&bo);
			break;
		case 2:  //显示联系人
			showpeople(&bo);
			break;
		case 3:  //删除联系人
			delpeople(&bo);
			break;
		case 4:  //查找联系人
			showpeople(&bo);
			break;
		case 5:  //修改联系人
			changepeople(&bo);
			break;
		case 6:  //清空联系人
			trunkpeople(&bo);
			break;
		case 0:  //退出通讯录
			cout << "欢迎下次使用" << endl;
			return 0;
		default :
			continue;
		}
	}

	return 0;
}
#include <iostream>

using namespace std;

//int* func() {
//
//	int* p = new int[1000];
//	delete[] p;
//	return p;
//}
//
//
//int main() {
//
//
//	int* p = func();
//
//	for(int i = 0 ;i < 10 ; i ++)
//	{
//		*p = 10;
//		p++;
//	}
//	cout << "--------" << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << *p << endl;
//		p++;
//	}
//
//
//
//	return 0;
//}



int main() {



	int a = 10;
	int* p = &a;

	*p = 100;
	cout << a << endl;

	int& b = a;
	b = 10000;
	cout << a << endl;






	return 0;
}
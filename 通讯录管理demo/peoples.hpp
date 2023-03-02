#include <iostream>

#define MAX 1000

using namespace std;


struct person {
	string name;
	string sex;
	int age;
	long long int tel;
	string address;
};

struct book {
	person ps[MAX];
	int num;
};

void addpeople(book* p);
void showpeople(book* p);
void delpeople(book* p);
void changepeople(book* p);
void trunkpeople(book* p);
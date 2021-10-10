#include <iostream>
#include "Super_1.h"
#include "Super_2.h"
#include "Sub_1.h"
#include "Sub_2.h"

using namespace std;

int main() {

	cout << "create instances." << endl;
	Super_1 *s1 = new Sub_1();
	Super_2 *s2 = new Sub_2();

	cout << endl;

	cout << "delete instances." << endl;
	delete s1; /* Super_1 クラスでデストラクタが仮想関数になっていないため、Sub_1のデストラクタが実行されない */
	delete s2;

	return 0;
}
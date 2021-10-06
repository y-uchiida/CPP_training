#include <iostream>
#include <string>
#include "Calc.h"

using namespace std;

int main()
{
	/* テンプレートを、int型で指定したオブジェクト */
	CCalc<int> intAdder;
	intAdder.setVars(1, 2);

	/* テンプレートを、string クラスで指定したオブジェクト */
	CCalc<string> strAdder;
	strAdder.setVars("ABC", "DEF");

	cout << intAdder.add() << endl
		 << strAdder.add() << endl;
	return 0;
}

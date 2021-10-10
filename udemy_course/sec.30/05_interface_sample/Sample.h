#ifndef _SAMPLE_H_
#define _SAMPLE_H_

#include <iostream>
#include "Interface_1.h"
#include "Interface_2.h"

using namespace std;

/*
 * Interface_1 と Interface_2を継承したクラス Sample
 * ２つのインターフェースから継承したfunc_1 から func_4を実装する
 */
class Sample : public Interface_1, public Interface_2 {
public:
	void func_1() { cout << "func1" << endl; }
	void func_2() { cout << "func2" << endl; }
	void func_3() { cout << "func3" << endl; }
	void func_4() { cout << "func4" << endl; }
};

#endif

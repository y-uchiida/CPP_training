#ifndef _SUB_2_H_
#define _SUB_2_H_

#include "Super_2.h"

class Sub_2 : public Super_2 {
public:
	Sub_2() { cout << "Sub_2 クラスのコンストラクタ" << endl; }
	~Sub_2() { cout << "Sub_2 クラスのデストラクタ" << endl; }
};

#endif
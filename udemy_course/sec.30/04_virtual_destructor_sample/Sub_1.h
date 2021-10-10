#ifndef _SUB_1_H_
#define _SUB_1_H_

#include "Super_1.h"

class Sub_1 : public Super_1 {
public:
	Sub_1() { cout << "Sub_1 クラスのコンストラクタ" << endl; }
	~Sub_1() { cout << "Sub_1 クラスのデストラクタ" << endl; }
};

#endif

#ifndef _Calc2_H_
#define _Calc2_H_

#include "Calc.h"

/* オーバーライドのサンプル: 計算式も出してくれるクラス */
class Calc2 : public Calc
{
public:
	/* addのメソッドを上書きする */
	int add();
	int add(int a, int b);
};

#endif
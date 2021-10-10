#ifndef _SUPER_2_H_
#define _SUPER_2_H_

#include <iostream>

using namespace std;

class Super_2 {
public:
	Super_2() { cout << "Super_2 クラスのコンストラクタ" << endl; }

	/* Super_2 クラスでは、デストラクタを仮想関数にしているので、
	 * サブクラスのデストラクタも実行できる
	 */
	virtual ~Super_2() { cout << "Super_2 クラスのデストラクタ" << endl; }
};

#endif

#ifndef _CROW_H_
#define _CROW_H_

#include "Bird.h"

class Crow : public Bird {
public:

	/* Bird クラスがsing() を仮想関数として実装しているので、
	 * Crow クラスの実装が呼び出される
	 */
	void sing() { cout << "Crow クラスの実装: カーカー" << endl; }

	/* Bird クラスがfly() を仮想関数として実装していないので、
	 * Crow クラスのfly() は呼び出されない
	 */
	void fly() { cout << "Crow クラスの実装: カラスがバサバサ飛びます" << endl; }
};

#endif // _CROW_H_
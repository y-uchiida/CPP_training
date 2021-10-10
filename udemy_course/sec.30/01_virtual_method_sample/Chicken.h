#ifndef _CHICKEN_H_
#define _CHICKEN_H_

#include "Bird.h"

class Chicken : public Bird {
public:

	/* Bird クラスがsing() を仮想関数として実装しているので、
	 * Chiken クラスの実装が呼び出される
	 */
	void sing() { cout << "Chilen クラスの実装: コケコッコー" << endl; }

	/* Bird クラスがfly() を仮想関数として実装していないので、
	 * Chiken クラスのfly() は呼び出されない
	 */
	void fly() { cout << "Chikenクラスの実装: にわとりは飛べません" << endl; }
};

#endif // _CHICKEN_H_

#ifndef _BIRD_H_
#define _BIRD_H_

#include <iostream>
#include <string>

using namespace std;

class Bird {
public:
	/* サブクラスで別の実装を行う場合、virtual をつけて仮想関数にしておく
	 * これをしないと、常に基底クラスの関数が呼び出されてしまう
	 * Birdクラスのsing() は仮想関数にしてあるので、サブクラスで別途sing() を実装し、
	 * Birdクラスを継承すると、サブクラスの関数が実行される
	 */
	virtual void sing() { cout << "Birdクラスの関数: 鳥が鳴く" << endl; }

	/* fly() メソッドは、virtuaをつけていないので、サブクラスでfly() を実装していても、
	 * Birdクラスのfly() が実行される
	 */
	void fly() { cout << "Birdクラスの関数: 鳥が飛ぶ" << endl; }
};

#endif // _BIRD_H_

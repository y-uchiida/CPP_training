#ifndef _AMBULANCE_H_
#define _AMBULANCE_H_

#include "Car.h"

/* Ambulance クラス
 * Car クラスを継承したクラス
 * クラスの継承は、クラスの宣言の後ろに : public 親クラス名 と記述する
 */
class Ambulance : public Car
{
public:
	Ambulance();
	Ambulance(string name);

	/* デストラクタは、仮想関数として virtual をつけておく必要がある
	 * C++では、継承するとまず親クラスのメソッドから参照する仕組みになっている
	 * そのため、デストラクタも何もしないと親クラスのものが先に実行されてしまう
	 * 子クラス内で確保したメモリの解放に、親クラスの中のメンバプロパティなどの値などが必要な場合、
	 * うまく解放できなくなってしまうことなどがある
	 * 仮想関数にしておくことで、子クラス側のメソッドから参照してくれるようになるので、その心配がなくなる
	 * ちなみに、デストラクタ以外のメソッドでも、オーバーライドさせて子クラスのものを実行したい場合は
	 * 仮想関数にしておく必要がある
	 */
	virtual ~Ambulance();

	void drive();
	void emergency();

private:
	int number;
	string name;
};

#endif
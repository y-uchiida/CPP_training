/* Ambulance.cpp
 * 親クラスとしてCar クラスを継承しているので、
 * Ambulance クラス として追加で実装すべきものだけ記述する
 */

#include <iostream>
#include <string>
#include "Ambulance.h"

using namespace std;

/* Javaなどのルールと異なり、なにも設定していなくても、
 * まず親クラスのコンストラクタから実行される
 */
Ambulance::Ambulance() : number(119), name("AMBULANCE")
{
	cout << "This is medical hero, " << this->name << "!!" << endl;
}

Ambulance::Ambulance(string name) : number(119)
{
	this->name = name;
	cout << "This is medical hero, " << this->name << "!!" << endl;
}

Ambulance::~Ambulance()
{
	cout << this->name << "is now retired. thank you!!" << endl;
}

/* drive()
 * 親クラスで実装している内容とは異なるものにしたいので、子クラス側でも宣言
 * オーバーライドさせるためには、親クラスの宣言(Car.h)で、drive()にvirtualをつけておく必要がある
 */
void Ambulance::drive()
{
		cout << "normal drive" << endl;
		cout << "if you have accident or some sick, call here " << this->number << "!!" << endl;
		this->fuel--;
		this->distance++;
		cout << "remain fuel: " << this->fuel;
		cout << ", distanse: " << this->distance << endl;
		cout << endl;
}

/* emergency()
 * 緊急出動なので、たくさん移動できる
 */
void Ambulance::emergency()
{
	cout << "emergency drive! please pave the way!!" << endl;
	this->fuel--;
	this->distance += 2;
	cout << "remain fuel: " << this->fuel;
	cout << ", distanse: " << this->distance << endl;
	cout << endl;
}

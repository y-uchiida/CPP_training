#include <iostream>
#include <string>
#include "Ghost.h"

using namespace std;

/* 静的クラスメンバ count を初期化
 * クラスメンバにアクセスするときは、クラス名::メンバ名 と記述する
 */
int Ghost::count = 0;

Ghost::Ghost() : id(0)
{
	/* インスタンスが増えたので、countをインクリメント */
	Ghost::count++;
	this->id = Ghost::count;

	cout << "ゴースト" << this->id << " が未練に目覚めた" << endl;
	this->moan();
	Ghost::showCount(); /* 静的メンバメソッドは、コンストラクタの中からも呼べる */
}

Ghost::~Ghost()
{
	/* インスタンスが減ったので、countをデクリメント */
	Ghost::count--;
	cout << "ゴースト" << this->id << " を除霊した！！" << endl;
	Ghost::showCount(); /* デストラクタの中からも呼べる */
}

void Ghost::showCount()
{
	cout << Ghost::count << "体のゴーストがいる" << endl;
}

void Ghost::moan()
{
	cout << "ゴースト" << this->count << ": アアアアァァ...." << endl;
}
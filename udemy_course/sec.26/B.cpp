#include <iostream>

/* A, B両方のクラスファイルを読み込みする */
#include "A.h"
#include "B.h"

using namespace std;

B::B(A *pA)
{
	/* 引数で受け取ったAのインスタンスのポインタを、
	 * メンバプロパティにセットする
	 * これにより、Bから呼び出し元のAへの参照ができるようになる
	 */
	ptr_A = pA;
}
B::~B()
{
}
void B::baz()
{
	cout << "bar" << endl;
	ptr_A->foo();
}
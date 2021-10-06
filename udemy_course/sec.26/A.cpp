#include <iostream>

/* A, B両方のクラスファイルを読み込みする */
#include "A.h"
#include "B.h"

using namespace std;

A::A()
{
	/* Bのインスタンスを生成し、A内部に持っておく
	 * Bは、引数で渡されたthis(Aのインスタンスのポインタ)を
	 * 自身のptr_Aに設定する
	 */
	ptr_B = new B(this);
}
A::~A()
{
	/* Aの削除をする際、一緒にBのインスタンスを削除する
	 * これを忘れると、メモリリークになる
	 */
	delete ptr_B;
}

void A::foo()
{
	cout << "foo" << endl;
}
void A::bar()
{
	ptr_B->baz();
}
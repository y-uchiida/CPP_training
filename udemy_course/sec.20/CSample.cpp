#include "CSample.h"

/* setNum():
 * numのセッターメソッド
 * 引数として与えられたintをプロパティnumに代入する
 */
void CSample::setNum(int num)
{
	/* this を使って、オブジェクト自身のポインタを指すことができる
	 * ポインタなので、メソッドやプロパティを参照するときはアロー演算子を使う
	 */
	this->num = num;
}

/* getNum()
 * numのゲッターメソッド
 * numの現在の値を返す
 */
int CSample::getNum()
{
	return (this->num);
}
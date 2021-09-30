#include "Calc.h"

/* 引数なしコンストラクタ
 * 2つのメンバを0で初期化
 */
Calc::Calc() : n(0), m(0) {}

/* 引数つきコンストラクタ
 * 引数で受け取った2つのint を、それぞれn, mに代入
 */
Calc::Calc(int n, int m) : n(n), m(m) {}

/* 引数なしadd()
 * メンバプロパティを加算したものを返す
 */
int Calc::add()
{
	return (this->n + this->m);
}

/* 引数つき add()
 * 引数で受け取った値を加算したものを返す
 */
int Calc::add(int a, int b)
{
	return (a + b);
}

/* setNumbers()
 * nとmをまとめて設定
 */
void Calc::setNumbers(int n, int m)
{
	this->n = n;
	this->m = m;
}

/* setN()
 * nだけ設定
 */
void Calc::setN(int n)
{
	this->n = n;
}

/* setM()
 * m だけ設定
 */
void Calc::setM(int m)
{
	this->m = m;
}

int Calc::getN()
{
	return (this->n);
}

int Calc::getM()
{
	return (this->m);
}
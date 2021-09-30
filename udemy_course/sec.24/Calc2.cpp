#include <iostream>
#include "Calc2.h"

using namespace std;

/* 引数なしadd()
 * 標準出力に計算結果を出力し、メンバプロパティを加算したものを返す
 */
int Calc2::add()
{
	int ret;

	ret = getN() + getM();
	printf("add result... %d + %d = %d\n", getN(), getM(), ret);
	return (ret);
}

/* 引数つき add()
 * 標準出力に計算結果を出力し、引数で受け取った値を加算したものを返す
 */
int Calc2::add(int a, int b)
{
	int ret;
	ret = a + b;
	printf("add result... %d + %d = %d\n", a, b, ret);
	return (ret);
}
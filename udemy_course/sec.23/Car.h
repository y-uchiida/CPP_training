/* Car.h
 * 車クラス
 */

#include <string>

#ifndef _CAR_H_
#define _CAR_H_

using namespace std;

class Car
{
// public:
protected:
	/* 子クラスからも利用するため、publicではなくprotectedにする */
	int distance;
	int fuel;
	string name;

public:
	Car();
	Car(string name);

	/* 親クラスであるCarのデストラクタにも、virtualをつけておく */
	virtual ~Car();

	void drive();
	void supply(int f);
};

#endif
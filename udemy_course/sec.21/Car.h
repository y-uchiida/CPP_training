/* Car.h
 * 車クラス
 */

#include <string>

#ifndef _CAR_H_
#define _CAR_H_

class Car
{
private:
	/* data */
	int distance;
	int fuel;
	std::string name;

public:
	Car();
	Car(std::string name);
	~Car();
	void drive();
	void supply(int f);
};

#endif
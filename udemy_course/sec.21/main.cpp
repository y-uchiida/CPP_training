#include <iostream>
#include <string>
#include <cstddef>
#include "Car.cpp"

int main()
{
	/* オブジェクトとしてそのまま生成する */
	Car car_1;

	/* Carクラスのポインタを用意しておき、あとからnewする */
	Car *car_2;
	car_2 = new Car("George");

	car_1.supply(20);
	car_1.drive();

	car_2->supply(10);
	car_2->drive();

	/* newしたら、忘れずにdeleteしないといけない(メモリリークの原因) */
	delete car_2;
	car_2 = NULL;
	return (0);
}
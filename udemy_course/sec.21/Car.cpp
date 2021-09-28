#include <iostream>
#include <string>
#include "Car.h"

/* コンストラクタ
 * クラス名と同じ名前のメソッド
 * プロパティの初期値などを設定する
 */
Car::Car() : distance(0), fuel(0), name("CAR")
{
	std::cout << "my new gear, " << this->name << "!!" << std::endl;
	std::cout << std::endl;
}

Car::Car(std::string name) : distance(0), fuel(0)
{
	this->name = name;
	std::cout << "my new gear, " << this->name << "!!" << std::endl;
	std::cout << std::endl;
}

/* デストラクタ
 * クラス名の先頭に~ をつけたメソッド
 * オブジェクトが消える時に呼び出される
 * メンバプロパティが確保したメモリの解放を行う時などに利用
 */
Car::~Car()
{
	std::cout << "my " << this->name << " have scraped..." << std::endl;
	std::cout << std::endl;
}

/* drive()
 * fuel を消費して移動し、distanceを増加させる
 */
void Car::drive()
{
	if (this->fuel > 0) {
		std::cout << "happy drive!!" << std::endl;
		this->fuel--;
		this->distance++;
		std::cout << "remain fuel: " << this->fuel;
		std::cout << ", distanse: " << this->distance << std::endl;
		std::cout << std::endl;
	}
	else {
		std::cout << this->name << " has no fuel... please supply" << std::endl;
		std::cout << std::endl;
	}
}

void Car::supply(int f)
{
	if (f <= 0) {
		std::cout << "warning: amount of supplied fuel is less than 1." << std::endl;
		std::cout << std::endl;
		return ;
	}
	this->fuel += f;
	std::cout << "fuel charged!! (remain: " << this->fuel << ")" << std::endl;
	std::cout << std::endl;
}
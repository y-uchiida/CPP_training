#include <iostream>
#include <string>
#include "Bird.h"
#include "Chicken.h"
#include "Crow.h"

using namespace std;

int main() {
	Bird *bird_1, *bird_2;
	bird_1 = new Crow(); /* Crow クラスは、親クラスBird の完全仮想関数 sing を実装していなければならない */
	bird_2 = new Chicken(); /* Chiken クラスは、親クラスBird の完全仮想関数 sing を実装していなければならない */

	bird_1->sing(); /* カラスがなく */
	bird_1->fly(); /* Crowクラスではなく Birdクラスの実装が呼び出される */

	bird_2->sing(); /* にわとりがなく */
	bird_2->fly(); /* Chikenクラスではなく Birdクラスの実装が呼び出される */

	delete bird_1, bird_2;
	return 0;
}
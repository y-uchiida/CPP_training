#include <iostream>
#include "Ghost.cpp"

using namespace std;

int main()
{
	Ghost *g1, *g2, *g3;

	g1 = new Ghost();
	cout << "最初のゴースト出現ここまで" << endl << endl;
	
	g2 = new Ghost();
	cout << endl;
	g3 = new Ghost();
	cout << "ゴースト2, 3出現ここまで" << endl << endl;

	cout << "静的クラスメンバ showCountを実行" << endl;
	Ghost::showCount();
	cout << endl;

	delete g1;
	delete g2;
	delete g3;
	cout << "ゴースト除霊　ここまで" << endl << endl;

	cout << "最後にもう一度、静的クラスメンバ showCountを実行" << endl;
	Ghost::showCount();
	cout << endl;
}
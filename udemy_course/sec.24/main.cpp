#include <iostream>
#include "Calc.cpp"
#include "Calc2.cpp"

using namespace std;

int main()
{
	Calc *obj1, *obj2;
	Calc2 *obj3;

	cout << "Calc オブジェクトの生成" << endl << endl;
	obj1 = new Calc(); /* 引数なしコンストラクタ... obj1のn, m は0 */
	obj2 = new Calc(30, 12); /* 引数付コンストラクタ... obj2のn, mは引数の値で初期化 */

	cout << "Calc2 オブジェクトの生成" << endl;
	obj3 = new Calc2();

	/* obj3 にはsetterを使って値をあとから入れる */
	obj3->setNumbers(100, 200);
	obj3->setN(-242);

	cout << "計算を実行" << endl << endl;

	cout
		<< "obj1->add()... " << endl
		<< obj1->getN() << " + " << obj1->getM() << " = " << obj1->add() << endl << endl;

	cout << endl;

	cout
		<< "obj2->add()... " << endl
		<< obj2->getN() << " + " << obj2->getM() << " = " << obj2->add() << endl;

	cout << endl;

	cout << "Calc2 の計算を実行" << endl;
	obj3->add();

}
#ifndef _CALC_H_
#define _CALC_H_

/* オーバーロードのサンプル: 足し算を行うクラス */
class Calc
{
private:
	int n, m;


public:
	/* 引数を持たないコンストラクタ: デフォルトコンストラクタ
	 * コンストラクタを明示的に定義しない場合、これが自動でコンパイルされる
	 * ひとつでもひきつ宇月コンストラクタを定義した場合にも、
	 * 引数なしのコンストラクタを利用するときは、明示的に実装しなければならない
	 */
	Calc();

	/* 引数つきコンストラクタ
	 * new で初期化する場合に、引数を渡したい場合には
	 * どの型の引数を、いくつ、どの順番で渡すのかを明示しておく必要がある
	 * また、引数の数と種類が異なるコンストラクタを設定しておくことができる
	 */
	Calc(int n, int m);

	/* 引数なしの足し算メソッド */
	int add();

	/* 引数つきの足し算メソッド */
	int add(int a, int b);

	/* アクセサメソッド(getter) */
	int getN();
	int getM();

	/* アクセサメソッド(setter) */
	void setNumbers(int n, int m);
	void setN(int n);
	void setM(int m);
};

#endif
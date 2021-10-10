#ifndef _BIRD_H_
#define _BIRD_H_

#include <iostream>
#include <string>

using namespace std;

/* 完全仮想関数を持っているクラスは、それ自体としてインスタンスを生成できない
 * Java でいうところの抽象クラス(abstruct クラス)にあたるため
 */

class Bird {
public:
	/* 完全仮想関数
	 * virtual を先頭に、 「= 0;」 を末尾につけて実装されたメソッドのこと
	 * 親クラスとして存在を定義するのみにし、実装はサブクラスに任せる
	 * サブクラスは、完全仮想関数を実装しないとインスタンスを生成できない
	 * Java でいうところの、abstruct メソッドに相当する
	 */
	virtual void sing() = 0;

	void fly() { cout << "Birdクラスの関数: 鳥が飛ぶ" << endl; }
};

#endif // _BIRD_H_

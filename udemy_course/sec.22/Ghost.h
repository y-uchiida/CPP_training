/*
 * Ghost.h
 */

#ifndef _GHOST_H_
#define _GHOST_H_

class Ghost
{
public:
	Ghost(); /* コンストラクタ */
	~Ghost(); /* デストラクタ */
	static void showCount();
	void moan();

private:
	int id;
	/* staticをつけると、静的クラス変数になる
	 * 特定のオブジェクトに属さず、クラスから直接利用できる
	 */
	static int count;
};

#endif
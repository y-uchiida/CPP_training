#ifndef _A_H_
#define _A_H_

/* クラスBを宣言しておく */
class B;

class A
{
private:
	B *ptr_B;

public:
	A();
	virtual ~A();
	void foo();
	void bar();
};

#endif
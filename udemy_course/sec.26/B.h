#ifndef _B_H_
#define _B_H_

/* クラスAを宣言しておく */
class A;

class B
{
private:
	A *ptr_A;

public:
	B(A *ptr_A);
	virtual ~B();
	void baz();
};

#endif

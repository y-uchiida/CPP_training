#include <iostream>
#include "Interface_1.h"
#include "Interface_2.h"
#include "Sample.h"

/*
 * 引数にInterface_1 のポインタを渡すことで、
 * foo() の中では、Interface_1で定義された関数のみを利用できる
 */
void foo(Interface_1 *);

/*
 * 引数にInterface_2 のポインタを渡すことで、
 * bar() の中では、Interface_2 で定義された関数のみを利用できる
 */
void bar(Interface_2 *);

int main() {
	Sample *s = new Sample();
	foo((Interface_1 *)s); /* Interface_1のポインタとして、Sample オブジェクトを渡す */
	bar((Interface_2 *)s); /* Interface_2のポインタとして、Sample オブジェクトを渡す */
	return 0;
}

//  Interface_1 のみが使える関数
void foo(Interface_1* p)
{
	p->func_1(); /* Interface_1 で定義されており、Interface_2 は参照できない */
	p->func_2(); /* Interface_1 で定義されており、Interface_2 は参照できない */
	//p->func_3(); /* 引数で渡された、Interface_1のポインタでは参照できない */
	//p->func_4(); /* 引数で渡された、Interface_1のポインタでは参照できない */
}
//  Interface_2 のみが使える関数
void bar(Interface_2* p)
{
	//p->func_1(); /* 引数で渡された、Interface_2のポインタでは参照できない */
	//p->func_2(); /* 引数で渡された、Interface_2のポインタでは参照できない */
	p->func_3(); /* Interface_2 で定義されており、Interface_1 は参照できない */
	p->func_4(); /* Interface_2 で定義されており、Interface_1 は参照できない */
}

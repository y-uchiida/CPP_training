#include "CSample.h"

/*
 * CSample::set(int num)
 * 引数で受け取ったnumを、プライベートプロパティm_numに代入する
 * (いわゆるsetterメソッド)
 */
void CSample::set(int num)
{
	m_num = num;
}

/*
 * CSample::get()
 * プライベートプロパティm_numの値を返すだけ
 * (いわゆるgetterメソッド)
 */
int CSample::get()
{
	return m_num;
}
/* CSample.h
 * CSample クラスの定義を記述する
 * クラスの実装はCSample.cppで行う
 */

/* Cのヘッダファイルと同じく、インクルードガードを記述するべし */
#ifndef _CSAMPLE_H_
#define _CSAMPLE_H_

/* CSample クラスの宣言 */
class CSample /* クラス名の先頭は大文字にする慣習 */
{
public: /* クラス外部からアクセス可能なプロパティとメソッド */
	void set(int num);
	int get();

private: /* クラス外部からアクセスできないプロパティとメソッド */
	int m_num;
}; /* クラス宣言の末尾には;が必要 */

#endif // _CSAMPLE_H_
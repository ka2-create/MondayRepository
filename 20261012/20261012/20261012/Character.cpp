#include"Character.h"
#include<iostream>

Character::Character(std::string name)
{
	this->name = name;
}

std::string Character::GetName()//get name→名前表示するため
{								//オーバーライド→仮想関数から上書き						
	return name;				//バーチャル→派生クラス先で上書き
}								//継承→あるクラスから（親クラス）のメンバーを
								//別のクラス(派生クラスや、子クラス)が引継ぎ再利用・拡張する仕組み
								//仮想関数→基底クラスのポインタや参照を通じて、
								//実行時に派生クラスでオーバーライド（上書き）された関数を呼び出す仕組み
								//コンストラクタ（Constructor）: クラスのオブジェクトが生成される際に自動的に呼び出される初期化用の特殊な関数。
								//クラス（Class）: データとそれを操作する関数をまとめたユーザー定義型の設計図。	
								//ポインタ（Pointer）: メモリのアドレス（場所）を格納する変数。
								//	




void Character::Attack()
{
	std::cout << "攻撃した" << std::endl;
}

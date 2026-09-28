#pragma once
#include"Config.h"
class CardManager
{
private:
	int cards[CARD_TOTAL];
	int cardCount;
public:
	//コンストラクタ
	CardManager();
	//カードを作成
	void CreateCards();
	//カードシャッフル
	void ShufflreCards();
	//一枚ドロー
	int DrawCard();
	//残りのカード枚数取得
	int GetCardCount();
};
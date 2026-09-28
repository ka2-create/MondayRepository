#pragma once
#include"Player.h"
#include"CPU.h"
#include"CardManager.h"

class Turn
{
public:

	bool PlayerTurn(Player* player, CardManager* cardManager);

	void PlayerCputurn(Player* player, );
};
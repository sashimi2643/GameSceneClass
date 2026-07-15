#pragma once
#include "Element.h"

// @brief 敵のクラス
// @details
// この構造体は、敵の基本的な属性を格納します。
struct EnemyData
{
	// メモリの最適化
	const char Name[256];

	int ID;
	int HP;
	int ATK;
	int DEF;
	int SPD;
	int Gold;
	int EXP;

	Element Element;
	float CriticalRate;
};
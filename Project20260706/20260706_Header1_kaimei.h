#pragma once
/// <summary>
/// 回復関数
/// </summary>
/// <param name="hp">プレイヤーHP</param>
void Heal(int& hp);

/// <summary>
/// 入力チェック
/// </summary>
/// <param name="min">最小値</param>
/// <param name="max">最大値</param>
/// <returns>入力した値</returns>
int InputCheck(int min, int max);

/// <summary>
/// 進行関数
/// </summary>
void Run();

//summary is なに
//関数の中身の内容を表示(説明文)
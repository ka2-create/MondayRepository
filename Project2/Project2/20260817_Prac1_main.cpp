#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260817_Prac1_header.h"

using namespace std;

//定数
const int PITING_MIN = 0;
const int PITING_MAX = 3;
const int PROBABILITY = 4;
const int STRIKE_COUNT = 3;
const int BALL_COUNT = 4;
const int OUT_COUNT = 3;
const int HIT_COUNT = 4;

int main(void)
{
    //ローカル変数
    int ply, emy;
    int prod;
    int Strike = 0;
    int Ball = 0;
    int Out = 0;
    int Hit = 0;
    //乱数の初期化
    srand((unsigned int)time(NULL));
    
    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;
    //ゲームループ
    //OutがOUT_COUNTよりも小さいかつHitが HIT_COUNTよりも小さい時
    while (Out < OUT_COUNT && Hit < HIT_COUNT)
    {
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート "
            << "1:カーブ "
            << "2:スライダー "
            << "3:シンカー"
            << endl;
        //入力チェック
        while (true)
        {
            cin >> ply;

            if (PITING_MIN > ply || PITING_MAX < ply)
            {
                cout << "入力に誤りがあります。"
                    << "再度入力してください。"
                    << endl;
            }
            else
            {
                break;
            }
        }


        PitingType(ply);

        //敵の手をランダムで生成
        emy = rand() % PROBABILITY;


        prod = rand() % PROBABILITY;
        //投げた手と打った場所が違う場合

        if (ply != emy)
        {
            if (prod == 0)
            {
                cout << "ボール！" << endl;
                Ball++;
            }
            else
            {
                cout << "ストライク！！" << endl;
                Strike++;
            }
        }

        else
        {
            Strike = 0;
            Ball = 0;

            if (prod == 1)
            {
                cout << "OUT!!!" << endl;
                Out++;
            }
            else
            {
                cout << "HIT!!" << endl;
                Hit++;
            }
        }
        //ストライクのカウントもしくはボールのカウントに到達した場合
        if (Strike >= STRIKE_COUNT || Ball >= BALL_COUNT)
        {
            if (Strike >= STRIKE_COUNT)
            {
                Out++;
            }
            //ボール
            else
            {
                Hit++;
            }

            Strike = 0;
            Ball = 0;
        }
        //ラウンドの結果の表示
        cout << "B:" << Ball << endl;
        cout << "S:" << Strike << endl;
        cout << "O:" << Out << endl;
        cout << "Runner:" << Hit << endl;

    }

    //最終結果
    Result(Out);

    return 0;
}
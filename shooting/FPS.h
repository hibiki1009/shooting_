#pragma once
#include"DxLib.h"
#include "common.h"

class FPS {
private:
    int FrameTime;                              // 1フレームの時間(ミリ秒)
    int WaitTime;                               // 待ち時間
    int LastTime, NowTime;                      // 最後に取得した時間と，今の時間
    float Count;                                // フレームのカウント
    float Fps;                                  // 表示するしたFPS値
    int UpdateTime;                             // 表示値を更新する時間
    int LastUpdate;                             // 最後に表示値を更新した時間

    // 初期化
    void Init(float RefreshRate, int UpdateTime);
public:

    // コンストラクタ
    FPS(float RefreshRate, int UpdateTime) {
        Init(RefreshRate, UpdateTime);
    }
    FPS() {
        Init(FRAMERATE, UPDATETIME);
    }


    void Wait();        // 待ち時間の計算


    float Get();        //FPS値の計算

    // 描画処理
    void Disp() {
        SetFontSize(10);
        DrawFormatString(10, 10, 0xffffff, "fps:%0.1f", Fps);
        SetFontSize(24);
    }
    // 処理をまとめたもの
    float All() {
        Get();
        Wait();
        return (Fps);
    }

};




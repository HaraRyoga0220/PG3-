#include <cstdio>

class Enemy {
public:

    Enemy();
    // 状態遷移関数
    void TransitionTo(void (Enemy::*newState)());

    // 更新関数
    void Update();

private:
    //接近
    void Approach();

    //射撃
    void Shoot();

    //離脱
    void Withdraw();

    // 関数テーブルの初期化
    void spFuncTable();

private:
    void (Enemy::*currentState)();  
    void (Enemy::*stateFunctions[3])();  // 関数テーブル
};


#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>

class Enemy {
public:
    // Constructor
    Enemy();

    // Destructor
    ~Enemy();

    // 状態遷移関数
    void TransitionTo(void (Enemy::*newState)());

    // 更新関数
    void Update();

private:
    // 状態関数：接近
    void Approach();

    // 状態関数：射撃
    void Shoot();

    // 状態関数：離脱
    void Withdraw();

    // 現在の状態を表すメンバ関数ポインタ
    void (Enemy::*currentState)();
};

#endif // ENEMY_H


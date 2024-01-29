#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>

class Enemy {
public:
   
    enum State {
        APPROACH,
        SHOOT,
        WITHDRAW
    };

    Enemy();

    // 状態遷移関数
    void TransitionTo(State newState);

    // 更新関数
    void Update();

private:
    // 状態関数：接近
    void Approach();

    // 状態関数：射撃
    void Shoot();

    // 状態関数：離脱
    void Withdraw();

   
    State currentState;
};

#endif // ENEMY_H
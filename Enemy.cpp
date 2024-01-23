#include "enemy.h"

// Constructor
Enemy::Enemy() {
    // 初期状態を設定
    currentState = &Enemy::Approach;
}
// 状態遷移関数
void Enemy::TransitionTo(void (Enemy::*newState)()) {
    currentState = newState;
}

// 更新関数
void Enemy::Update() {
    (this->*currentState)();
}

//接近
void Enemy::Approach() {
    printf("接近\n");
    TransitionTo(&Enemy::Shoot);
}

//射撃
void Enemy::Shoot() {
    printf("射撃\n");
    TransitionTo(&Enemy::Withdraw);
}

//離脱
void Enemy::Withdraw() {
    printf("離脱\n");
    
    TransitionTo(&Enemy::Approach);
}

// 関数テーブルの初期化
void Enemy::spFuncTable() {
    stateFunctions[0] = &Enemy::Approach;
    stateFunctions[1] = &Enemy::Shoot;
    stateFunctions[2] = &Enemy::Withdraw;
}

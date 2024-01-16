#include "enemy.h"

// Constructor
Enemy::Enemy() {
    // 初期状態を設定
    currentState = &Enemy::Approach;
}

// Destructor
Enemy::~Enemy() {
    // 何かしらの解放処理があればここに記述
}

// 状態遷移関数
void Enemy::TransitionTo(void (Enemy::*newState)()) {
    currentState = newState;
}

// 更新関数
void Enemy::Update() {
    (this->*currentState)();
}

// 状態関数：接近
void Enemy::Approach() {
    std::cout << "接近" << std::endl;
    // 何らかの処理...

    // 射撃状態に遷移
    TransitionTo(&Enemy::Shoot);
}

// 状態関数：射撃
void Enemy::Shoot() {
    std::cout << "射撃" << std::endl;
    // 何らかの射撃処理...

    // 離脱状態に遷移
    TransitionTo(&Enemy::Withdraw);
}

// 状態関数：離脱
void Enemy::Withdraw() {
    std::cout << "離脱" << std::endl;
    // 何らかの離脱処理...

    // 接近状態に遷移（サイクル）
    TransitionTo(&Enemy::Approach);
}
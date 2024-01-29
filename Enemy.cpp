#include "Enemy.h"

// Constructor
Enemy::Enemy() {
    // 初期状態を設定
    currentState = APPROACH;
}


// 状態遷移関数
void Enemy::TransitionTo(State newState) {
    currentState = newState;
}

// 更新関数
void Enemy::Update() {
    switch (currentState) {
        case APPROACH:
            Approach();
            break;
        case SHOOT:
            Shoot();
            break;
        case WITHDRAW:
            Withdraw();
            break;
        default:
            // 何もしない
            break;
    }
}

// 接近
void Enemy::Approach() {
    std::cout << "接近" << std::endl;
  
    TransitionTo(SHOOT);
}

//射撃
void Enemy::Shoot() {
    std::cout << "射撃" << std::endl;

    TransitionTo(WITHDRAW);
}

//離脱
void Enemy::Withdraw() {
    std::cout << "離脱" << std::endl;

    TransitionTo(APPROACH);
}
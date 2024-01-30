#include "Enemy.h"

Enemy::Enemy() {
    currentState = APPROACH;
}

void Enemy::TransitionTo(State newState) {
    currentState = newState;
}

void Enemy::Update() {
    //ポインタテーブル
    void (Enemy::*spFuncTable[])() = {&Enemy::Approach, &Enemy::Shoot, &Enemy::Withdraw};

    //ポインタ呼び出し
    (this->*spFuncTable[currentState])();
}

void Enemy::Approach() {
    std::cout << "接近" << std::endl;
    TransitionTo(SHOOT);
}

void Enemy::Shoot() {
    std::cout << "射撃" << std::endl;
    TransitionTo(WITHDRAW);
}

void Enemy::Withdraw() {
    std::cout << "離脱" << std::endl;
    TransitionTo(APPROACH);
}
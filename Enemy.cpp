#include "Enemy.h"

Enemy::Enemy() {
    currentState = APPROACH;
}

void Enemy::TransitionTo(State newState) {
    currentState = newState;
}

void Enemy::Update() {
    //�|�C���^�e�[�u��
    void (Enemy::*spFuncTable[])() = {&Enemy::Approach, &Enemy::Shoot, &Enemy::Withdraw};

    //�|�C���^�Ăяo��
    (this->*spFuncTable[currentState])();
}

void Enemy::Approach() {
    std::cout << "�ڋ�" << std::endl;
    TransitionTo(SHOOT);
}

void Enemy::Shoot() {
    std::cout << "�ˌ�" << std::endl;
    TransitionTo(WITHDRAW);
}

void Enemy::Withdraw() {
    std::cout << "���E" << std::endl;
    TransitionTo(APPROACH);
}
#include "Enemy.h"

// Constructor
Enemy::Enemy() {
    // ������Ԃ�ݒ�
    currentState = APPROACH;
}


// ��ԑJ�ڊ֐�
void Enemy::TransitionTo(State newState) {
    currentState = newState;
}

// �X�V�֐�
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
            // �������Ȃ�
            break;
    }
}

// �ڋ�
void Enemy::Approach() {
    std::cout << "�ڋ�" << std::endl;
  
    TransitionTo(SHOOT);
}

//�ˌ�
void Enemy::Shoot() {
    std::cout << "�ˌ�" << std::endl;

    TransitionTo(WITHDRAW);
}

//���E
void Enemy::Withdraw() {
    std::cout << "���E" << std::endl;

    TransitionTo(APPROACH);
}
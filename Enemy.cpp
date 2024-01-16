#include "enemy.h"

// Constructor
Enemy::Enemy() {
    // ������Ԃ�ݒ�
    currentState = &Enemy::Approach;
}

// Destructor
Enemy::~Enemy() {
    // ��������̉������������΂����ɋL�q
}

// ��ԑJ�ڊ֐�
void Enemy::TransitionTo(void (Enemy::*newState)()) {
    currentState = newState;
}

// �X�V�֐�
void Enemy::Update() {
    (this->*currentState)();
}

// ��Ԋ֐��F�ڋ�
void Enemy::Approach() {
    std::cout << "�ڋ�" << std::endl;
    // ���炩�̏���...

    // �ˌ���ԂɑJ��
    TransitionTo(&Enemy::Shoot);
}

// ��Ԋ֐��F�ˌ�
void Enemy::Shoot() {
    std::cout << "�ˌ�" << std::endl;
    // ���炩�̎ˌ�����...

    // ���E��ԂɑJ��
    TransitionTo(&Enemy::Withdraw);
}

// ��Ԋ֐��F���E
void Enemy::Withdraw() {
    std::cout << "���E" << std::endl;
    // ���炩�̗��E����...

    // �ڋߏ�ԂɑJ�ځi�T�C�N���j
    TransitionTo(&Enemy::Approach);
}
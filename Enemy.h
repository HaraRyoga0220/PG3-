#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>

class Enemy {
public:
    // Constructor
    Enemy();

    // Destructor
    ~Enemy();

    // ��ԑJ�ڊ֐�
    void TransitionTo(void (Enemy::*newState)());

    // �X�V�֐�
    void Update();

private:
    // ��Ԋ֐��F�ڋ�
    void Approach();

    // ��Ԋ֐��F�ˌ�
    void Shoot();

    // ��Ԋ֐��F���E
    void Withdraw();

    // ���݂̏�Ԃ�\�������o�֐��|�C���^
    void (Enemy::*currentState)();
};

#endif // ENEMY_H


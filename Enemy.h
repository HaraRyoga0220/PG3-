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

    // ��ԑJ�ڊ֐�
    void TransitionTo(State newState);

    // �X�V�֐�
    void Update();

private:
    // ��Ԋ֐��F�ڋ�
    void Approach();

    // ��Ԋ֐��F�ˌ�
    void Shoot();

    // ��Ԋ֐��F���E
    void Withdraw();

   
    State currentState;
};

#endif // ENEMY_H
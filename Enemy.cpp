#include "Enemy.h"

// Constructor
Enemy::Enemy() {
    // ‰Šúó‘Ô‚ğİ’è
    currentState = APPROACH;
}


// ó‘Ô‘JˆÚŠÖ”
void Enemy::TransitionTo(State newState) {
    currentState = newState;
}

// XVŠÖ”
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
            // ‰½‚à‚µ‚È‚¢
            break;
    }
}

// Ú‹ß
void Enemy::Approach() {
    std::cout << "Ú‹ß" << std::endl;
  
    TransitionTo(SHOOT);
}

//ËŒ‚
void Enemy::Shoot() {
    std::cout << "ËŒ‚" << std::endl;

    TransitionTo(WITHDRAW);
}

//—£’E
void Enemy::Withdraw() {
    std::cout << "—£’E" << std::endl;

    TransitionTo(APPROACH);
}
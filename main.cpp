#include "Enemy.h"

int main() {
    Enemy enemy;

    // シーンの更新を数回繰り返す例
    for (int i = 0; i < 3; ++i) {
        enemy.Update();
    }

    return 0;
}
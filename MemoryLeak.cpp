#include <iostream>

class Enemy {
public:
    Enemy(int hp) : health(hp) {
        std::cout << "Enemy created with " << health << " HP\n";
    }
    ~Enemy() {
        std::cout << "Enemy destroyed\n";
    }

    void Attack() {
        std::cout << "Enemy attacks!\n";
    }

private:
    int health;
};

void SpawnEnemy() {
    Enemy* enemy = new Enemy(100);  // Memory allocated but never deallocated
    enemy->Attack();
}

int main() {
    for (int i = 0; i < 5; ++i) {
        SpawnEnemy(); // Memory leak occurs every time this function is called
    }
    
    return 0;
}

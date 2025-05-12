#include <memory>

void SpawnEnemy() {
    std::unique_ptr<Enemy> enemy = std::make_unique<Enemy>(100);
    enemy->Attack();
} // Automatically deleted when function ends

#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>

int main() {
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    for (int i = 0; i < 5; ++i) {
        SpawnEnemy();
    }

    return 0;
}

#include "includes.h"

void initGame(game_t *game)
{
    initWindow(1280, 720);
    game->windowSize = (Vector2){GetMonitorWidth(GetCurrentMonitor()), GetMonitorHeight(GetCurrentMonitor())};
    initWindow(game->windowSize.x, game->windowSize.y);
    game->id = -1;
    initCamera(game);
    initCube(game);
    initWall(game);
    initItem(game);
    initProjectile(game);
    initSounds(game);
    initModels(game);
    initSprite(game);
    initStat(game);
    initPlayer(game);
    initMenu(game);
}

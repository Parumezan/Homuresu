#include "iencli.h"

int client_action_mng(client_t *client, game_t *game, char *msg)
{
    if (strncmp(msg, "HELLO", 5) == 0) {
        game->id = atoi(msg + 6);
    } else if (strncmp(msg, "BULLET", 6) == 0) {
        addBulletToGame(game, msg + 7);
    } else if (strncmp(msg, "INFO", 4) == 0) {
        addInfoPlayerToGame(game, msg + 5);
    }
    return 0;
}
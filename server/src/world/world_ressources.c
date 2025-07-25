/*
** EPITECH PROJECT, 2025
** zappy
** File description:
** world_ressources
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "../include/server.h"
#include "../include/map_parameters.h"

void add_linemate_to_tile(tile_t **tile, int height,
    int width, server_t *server)
{
    int total_density = (height * width) * LINEMATE_MUL;
    int respawn_per_cycle = total_density / TIME_UNIT_REP;
    int i = 0;
    int x = 0;
    int y = 0;

    if (respawn_per_cycle < 1)
        respawn_per_cycle = 1;
    for (i = 0; i < respawn_per_cycle; ++i) {
        x = rand() % width;
        y = rand() % height;
        add_ress_to_tile(&tile[y][x], LINEMATE);
        if (server) {
            notify_tile_change(server, x, y);
        }
    }
}

void add_deraumere_to_tile(tile_t **tile, int height,
    int width, server_t *server)
{
    int total_density = (height * width) * DERAUMERE_MUL;
    int respawn_per_cycle = total_density / TIME_UNIT_REP;
    int i = 0;
    int x = 0;
    int y = 0;

    if (respawn_per_cycle < 1)
        respawn_per_cycle = 1;
    for (i = 0; i < respawn_per_cycle; ++i) {
        x = rand() % width;
        y = rand() % height;
        add_ress_to_tile(&tile[y][x], DERAUMERE);
        if (server) {
            notify_tile_change(server, x, y);
        }
    }
}

void add_sibur_to_tile(tile_t **tile, int height,
    int width, server_t *server)
{
    int total_density = (height * width) * SIBUR_MUL;
    int respawn_per_cycle = total_density / TIME_UNIT_REP;
    int i = 0;
    int x = 0;
    int y = 0;

    if (respawn_per_cycle < 1)
        respawn_per_cycle = 1;
    for (i = 0; i < respawn_per_cycle; ++i) {
        x = rand() % width;
        y = rand() % height;
        add_ress_to_tile(&tile[y][x], SIBUR);
        if (server) {
            notify_tile_change(server, x, y);
        }
    }
}

void add_mendiane_to_tile(tile_t **tile, int height,
    int width, server_t *server)
{
    int total_density = (height * width) * MENDIANE_MUL;
    int respawn_per_cycle = total_density / TIME_UNIT_REP;
    int i = 0;
    int x = 0;
    int y = 0;

    if (respawn_per_cycle < 1)
        respawn_per_cycle = 1;
    for (i = 0; i < respawn_per_cycle; ++i) {
        x = rand() % width;
        y = rand() % height;
        add_ress_to_tile(&tile[y][x], MENDIANE);
        if (server) {
            notify_tile_change(server, x, y);
        }
    }
}

void add_phiras_to_tile(tile_t **tile, int height,
    int width, server_t *server)
{
    int total_density = (height * width) * PHIRAS_MUL;
    int respawn_per_cycle = total_density / TIME_UNIT_REP;
    int i = 0;
    int x = 0;
    int y = 0;

    if (respawn_per_cycle < 1)
        respawn_per_cycle = 1;
    for (i = 0; i < respawn_per_cycle; ++i) {
        x = rand() % width;
        y = rand() % height;
        add_ress_to_tile(&tile[y][x], PHIRAS);
        if (server) {
            notify_tile_change(server, x, y);
        }
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "move.h"

extern char **board_state;
extern int **addresses;

int *move(char *message, const int player)
{
    int choice;
    int *cell = (int *)malloc(2 * sizeof(int));
move_start:
    printf(message);
    scanf("%d", &choice);
    cell = *(addresses + choice - 1);
    char *cell_value = *(board_state + *cell) + *(cell + 1);
    if (!isdigit(*cell_value))
    {
        printf("Cell already marked select another!\n");
        goto move_start;
    }
    *cell_value = (player == 1) ? 'x' : 'o';
    return cell;
}
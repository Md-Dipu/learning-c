#include <stdio.h>
#include <stdlib.h>
#include "board.h"
#include "move.h"
#include "winchecker.h"

char **board_state;
int **addresses;
int board_size;

int main(void)
{
    board_size = 3;
    board_state = (char **)malloc(board_size * sizeof(char *));
    addresses = (int **)malloc(board_size * board_size * sizeof(int *));
    char init_state = '1';
    int index_of_address = 0;
    for (int i = 0; i < board_size; i++)
    {
        *(board_state + i) = (char *)malloc(board_size * sizeof(char));
        for (int j = 0; j < board_size; j++)
        {
            board_state[i][j] = init_state++;
            *(addresses + index_of_address) = (int *)malloc(2 * sizeof(int));
            **(addresses + index_of_address) = i;
            *(*(addresses + index_of_address) + 1) = j;
            index_of_address++;
        }
    }

    int player = 1;
    int move_count = 0;
    int winner = 0;

    do
    {
        display_board(player, 0);
        int *current_move = move("\nSelect your move: ", player);

        if (winchecker(current_move, player) == Success)
        {
            winner = player;
            break;
        }

        player = (player != 1) ? 1 : 2;
        move_count++;

    } while (move_count < board_size * board_size);

    display_board(0, winner);

    for (int i = 0; i < board_size; i++)
        free(*(board_state + i));
    free(board_state);

    for (int i = 0; i < board_size * board_size; i++)
        free(*(addresses + i));
    free(addresses);

    return EXIT_SUCCESS;
}
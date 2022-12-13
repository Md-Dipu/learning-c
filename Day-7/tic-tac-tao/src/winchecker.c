// #include <iso646.h>
#include "winchecker.h"

extern char **board_state;
extern int board_size;

enum status_g winchecker(int *last_move, const int player)
{
    int match_counter = 1;
    enum status_g check_status = Not_found;
    char player_sign = player == 1 ? 'x' : 'o';
    int essitial_matching_count_for_win = board_size;

    // check all the possible cases for last move for current player
    // checking horizontal cases
    // checking forward cells
    for (int i = *(last_move + 1) + 1; i < board_size; i++)
    {
        if (*(*(board_state + *last_move) + i) == player_sign)
        {
            match_counter++;
            continue;
        }
        break;
    }

    // checking is won or not
    if (match_counter >= essitial_matching_count_for_win)
    {
        return Success;
    }

    // checking backward cells
    for (int i = *(last_move + 1) - 1; i >= 0; i--)
    {
        if (*(*(board_state + *last_move) + i) == player_sign)
        {
            match_counter++;
            continue;
        }
        break;
    }

    // checking is won or not
    if (match_counter >= essitial_matching_count_for_win)
    {
        return Success;
    }

    // checking vertical cases
    match_counter = 1;

    // checking upward cells
    for (int i = *last_move - 1; i >= 0; i--)
    {
        if (*(*(board_state + i) + *(last_move + 1)) == player_sign)
        {
            match_counter++;
            continue;
        }
        break;
    }

    // checking is won or not
    if (match_counter >= essitial_matching_count_for_win)
    {
        return Success;
    }

    // checking downward cells
    for (int i = *last_move + 1; i < board_size; i++)
    {
        if (*(*(board_state + i) + *(last_move + 1)) == player_sign)
        {
            match_counter++;
            continue;
        }
        break;
    }

    // checking is won or not
    if (match_counter >= essitial_matching_count_for_win)
    {
        return Success;
    }

    // checking x-case
    // checking \-case
    match_counter = 1;

    // checking \-case upward cells
    for (int i = *last_move - 1, j = *(last_move + 1) - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (*(*(board_state + i) + j) == player_sign)
        {
            match_counter++;
            continue;
        }
        break;
    }

    // checking is won or not
    if (match_counter >= essitial_matching_count_for_win)
    {
        return Success;
    }

    // checking \-case downward cells
    for (int i = *last_move + 1, j = *(last_move + 1) + 1; i < board_size && j < board_size; i++, j++)
    {
        if (*(*(board_state + i) + j) == player_sign)
        {
            match_counter++;
            continue;
        }
        break;
    }

    // checking is won or not
    if (match_counter >= essitial_matching_count_for_win)
    {
        return Success;
    }

    // checking /-case
    match_counter = 1;

    // checking /-case upward cells
    for (int i = *last_move - 1, j = *(last_move + 1) + 1; i >= 0 && j < board_size; i--, j++)
    {
        if (*(*(board_state + i) + j) == player_sign)
        {
            match_counter++;
            continue;
        }
        break;
    }

    // checking is won or not
    if (match_counter >= essitial_matching_count_for_win)
    {
        return Success;
    }

    // checking /-case downward cells
    for (int i = *last_move + 1, j = *(last_move + 1) - 1; i < board_size && j >= 0; i++, j--)
    {
        if (*(*(board_state + i) + j) == player_sign)
        {
            match_counter++;
            continue;
        }
        break;
    }

    // checking is won or not
    if (match_counter >= essitial_matching_count_for_win)
    {
        return Success;
    }

    return check_status;
}
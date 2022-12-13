#include <stdio.h>
#include <stdlib.h>

#include "board.h"

#define DATALINE(win_status)                                  \
       printf("|");                                           \
       for (int i = 0; i < 3; i++)                            \
       {                                                      \
              printf("  %c  |", *(*(board_state + row) + i)); \
       }                                                      \
       row++;                                                 \
       win_status;                                            \
       printf("\n")

#define TURN_CHECKER(player_number) (turn_of == player_number) ? "Yes" : "No"
#define WINER_DISPLAY (winner_is != 0) ? printf(" Player %d won", winner_is) : printf(" ");

extern char **board_state;

void display_board(const int turn_of, const int winner_is)
{
       system("clear");
       int row = 0;
       printf("+-----------------+\n"
              "|     |     |     |\n");
       DATALINE();
       printf("|     |     |     | Turn of:\n"
              "|-----------------| Player-1 (%s)\n"
              "|     |     |     | Player-2 (%s)\n",
              TURN_CHECKER(1), TURN_CHECKER(2));
       DATALINE(WINER_DISPLAY);
       printf("|     |     |     |\n"
              "|-----------------|\n"
              "|     |     |     |\n");
       DATALINE();
       printf("|     |     |     |\n"
              "+-----------------+\n");
}
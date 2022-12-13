#ifndef __G_WINCHECKER
#define __G_WINCHECKER

/**
 * Game Status
 * 0 Not_found  Player not win on current board.
 * 1 Success    Player win on current board.
 * 2 Failed     Some went wrong: function not worked correctly.
 */
enum status_g
{
    Not_found,
    Success,
    Failed
};

/**
 * Check winner for last move and player
 * Return as status_g
 */
enum status_g winchecker(int *, const int);

#endif //__G_WINCHECKER
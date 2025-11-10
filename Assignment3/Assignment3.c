#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include "Assignment3.h"

// Helper function to validate moves
int is_valid_move(const char* move) {
    return (strcmp(move, "Rock") == 0 ||
        strcmp(move, "Paper") == 0 ||
        strcmp(move, "Scissors") == 0);
}

// Function to determine the outcome of Rock, Paper, Scissors
const char* determine_winner(const char* player1, const char* player2) {

    // Validate inputs
    if (!is_valid_move(player1) || !is_valid_move(player2)) {
        return "Invalid";
    }

    // Check for draw
    if (strcmp(player1, player2) == 0) {
        return "Draw";
    }

    // Determine winner
    if ((strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) ||
        (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0) ||
        (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0)) {
        return "Player1";
    }
    else {
        return "Player2";
    }
}

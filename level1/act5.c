#include <stdio.h>

typedef struct {
    char player_name[30];
    int jersey_number;
    int runs_scored;
} Player;

void readPlayers(int n, Player p[]);
float calculateAverageRuns(int n, Player p[]);

int main() {
    Player p[11];
    float avg;

    readPlayers(11, p);
    avg = calculateAverageRuns(11, p);

    printf("Average Runs: %.2f\n", avg);

    return 0;
}

void readPlayers(int n, Player p[]) {
    // TODO: Use a loop to read player_name, jersey_number, and runs_scored
}

float calculateAverageRuns(int n, Player p[]) {
    float average = 0;

    // TODO: Calculate total runs using a loop
    // TODO: Compute average = total_runs / n

    return average;
}
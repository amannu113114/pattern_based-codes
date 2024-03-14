#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>

int main() {
    int i;

    initscr(); // Initialize ncurses
    start_color(); // Enable color support
    init_pair(1, COLOR_RED, COLOR_WHITE); // Define color pair (RED text on WHITE background)

    for (i = 1; i <= 120; i++) {
        clear(); // Clear the screen
        attron(COLOR_PAIR(1)); // Turn on color pair 1
        printw("I LOVE YOU");
        attroff(COLOR_PAIR(1)); // Turn off color pair 1
        refresh(); // Refresh the screen
        usleep(200000); // Sleep for 200 milliseconds
    }

    endwin(); // End ncurses

    return 0;
}

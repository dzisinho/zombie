#include <iostream>
#include "game.h"

using namespace std;

int main() {
    // title
    cout << "Welcome to Zombie War." << endl << "Press [ENTER] to start.";
    cin.get();

    // start the game
    startGame();

    return 0;
}

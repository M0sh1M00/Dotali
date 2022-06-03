#include "Menu.h"

#include <iostream>
#include <string>


// THIS FILE SHOULD ONLY HAVE MAIN LOOP AT THE END

int main() {
    std::cout << "Hello World!\n";

    bool running = true;
    int menuResult, gameResult;

    while (running) {

        menuResult = runMenu(window); // 1 to 4 is the world

        if (!menuResult) running = false;

        // Open a world
        else if (menuResult < 5) {
            /*
            // Create a thread for the server
            if (createServer()) {
                std::cout << "Error with server" << std::endl;
            }

            gameResult = createGameInstance();

            closeServer();

            if (gameResult == 1) running = false; // quit if result is 1 else go the the menu again
            */
        }
    }

    window.close();

}


//class gameInstance()
int gameLoop() {

    bool running = true;

    while (running) {


    }


}
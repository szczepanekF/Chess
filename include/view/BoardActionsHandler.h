#pragma once

#include <SFML/Graphics.hpp>
#include "model/Game.h"

class BoardActionsHandler {
public:
    BoardActionsHandler(const int textureSize);


    void onPressAction(sf::RenderWindow &window);
    void onReleaseAction(sf::RenderWindow &window);
    void updateBoard(sf::RenderWindow &window);

private:
    void updateMousePos(sf::RenderWindow &window);
    void loadTextures();

    int textureSize = 100;
    Board gameboard;
    std::map<std::string, sf::Texture> textureMap;
    std::map<std::string, sf::Sprite> spriteMap;
    sf::Texture textureBoard[BOARD_LENGTH][BOARD_LENGTH];
    sf::Sprite spriteBoard[BOARD_LENGTH][BOARD_LENGTH];
    Game chessGame = Game(gameboard);
    std::pair<int, int> oldPosIndex = {-1, -1};
    std::pair<int, int> mousePos = {0, 0};


};
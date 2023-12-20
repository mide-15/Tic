#include <iostream>
#include <SFML/Graphics.hpp>
#include "DifficultyMenu.h"
using namespace std;

void DifficultyMenu() {
    sf::Text title; sf::Font font;

    title.setFont(font);
    title.setString("TIC-TAC-TOE");
    title.setPosition(190.f, 0.f);
    title.setCharacterSize(100);
    title.setFillColor(sf::Color::White);
    title.setStyle(sf::Text::Bold);
}
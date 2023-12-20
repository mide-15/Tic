#include <iostream>
#include <SFML/Graphics.hpp>
#include "P1vsP2.h"
#include "board.h"
#include "P1vsCOM.h"
using namespace std;

int main()
{
    sf::RenderWindow w(sf::VideoMode(1000, 1000), "Tic-Tac-Toe", sf::Style::Close | sf::Style::Titlebar);
    sf::Text title; sf::Text singleplayer; sf::Text multiplayer;
    sf::Font font;
    font.loadFromFile("Fonts/arial.ttf");
    title.setFont(font);
    title.setString("TIC-TAC-TOE");
    title.setPosition(190.f, 0.f);
    title.setCharacterSize(100);
    title.setFillColor(sf::Color::White);
    title.setStyle(sf::Text::Bold);

    singleplayer.setFont(font);
    singleplayer.setString("1: P1 vs. COM");
    singleplayer.setPosition(345.f, 450.f);
    singleplayer.setCharacterSize(45);
    singleplayer.setFillColor(sf::Color::White);

    multiplayer.setFont(font);
    multiplayer.setString("2: P1 vs. P2");
    multiplayer.setPosition(370.f, 550.f);
    multiplayer.setCharacterSize(45);
    multiplayer.setFillColor(sf::Color::White);

    while (w.isOpen()) {
        sf::Event eve;
        while (w.pollEvent(eve)) {
            switch (eve.type) {
                case sf::Event::Closed:
                    w.close();
                    break;
                case sf::Event::TextEntered:
                    /*if (eve.text.unicode == 49) {
                        P1vsCOM(w, title, title, font);
                    }*/
                    if (eve.text.unicode == 50) {
                        P1vsP2(w, title, title, font);
                    }
                    break;
                default:
                    break;
            }
        }
        w.clear();
        w.draw(title); /*w.draw(singleplayer);*/  w.draw(multiplayer);
        w.display();
    }
    return 0;
}
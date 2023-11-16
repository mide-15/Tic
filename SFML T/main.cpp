#include <iostream>
#include <SFML/Graphics.hpp>
#include "P1vsP2.h"
#include "board.h"
using namespace std;

int main()
{
    sf::RenderWindow w(sf::VideoMode(1000, 1000), "Tic-Tac-Toe", sf::Style::Close | sf::Style::Titlebar);
    sf::Text text; sf::Text title;
    sf::Font font;
    font.loadFromFile("Fonts/arial.ttf");
    text.setFont(font);
    text.setString("TIC-TAC-TOE");
    text.setPosition(190.f, 0.f);
    text.setCharacterSize(100);
    text.setFillColor(sf::Color::White);
    text.setStyle(sf::Text::Bold);

    title.setFont(font);
    title.setString("2: P1 vs. P2");
    title.setPosition(370.f, w.getSize().y / 2 - 50);
    title.setCharacterSize(45);
    title.setFillColor(sf::Color::White);

    while (w.isOpen()) {
        sf::Event eve;
        while (w.pollEvent(eve)) {
            switch (eve.type) {
                case sf::Event::Closed:
                    w.close();
                    break;
                case sf::Event::TextEntered:
                    if (eve.text.unicode == 50) {
                        P1vsP2(w, text, title, font);
                    }
                    break;
                default:
                    break;
            }
        }
        w.clear();
        w.draw(text); w.draw(title);
        w.display();
    }
    return 0;
}
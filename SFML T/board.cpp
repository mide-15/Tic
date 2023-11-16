#include <iostream>
#include <SFML/Graphics.hpp>
#include "board.h"
using namespace std;

void board(sf::RenderWindow &w) {
	sf::RectangleShape line1(sf::Vector2f(20.0f,550.0f));
	line1.setPosition(330.f, 50.f);

	sf::RectangleShape line2(sf::Vector2f(20.0f, 550.0f));
	line2.setPosition(610.f, 50.f);

	sf::RectangleShape line3(sf::Vector2f(650.0f, 20.0f));
	line3.setPosition(160.f, 210.f);

	sf::RectangleShape line4(sf::Vector2f(650.0f, 20.0f));
	line4.setPosition(160.f, 400.f);

	w.draw(line1); w.draw(line2); w.draw(line3); w.draw(line4);
	w.display();
}
#include <iostream>
#include <SFML/Graphics.hpp>
#include "P1vsP2.h"
#include "board.h"
using namespace std;

void P1vsP2(sf::RenderWindow &w, sf::Text& text, sf::Text& title, sf::Font& font) {
    sf::Text p1;
    p1.setFont(font);
    p1.setString("P1 Turn");
    p1.setPosition(300.f, 700.f);
    p1.setCharacterSize(100);
    p1.setFillColor(sf::Color::White);
    p1.setStyle(sf::Text::Bold);
    sf::Text x1, x2, x3, x4, x5, x6, x7, x8, x9;

    sf::Text menu;
    menu.setFont(font);
    menu.setPosition(130.f, 850.f);
    menu.setCharacterSize(65);
    menu.setFillColor(sf::Color::White);
    menu.setStyle(sf::Text::Bold);

    sf::RectangleShape winningLine1(sf::Vector2f(700.0f, 20.0f)); winningLine1.setPosition(9990.f, 9990.f); winningLine1.setFillColor(sf::Color::Green);
    sf::RectangleShape winningLine2(sf::Vector2f(20.0f, 650.0f)); winningLine2.setPosition(9990.f, 9990.f); winningLine2.setFillColor(sf::Color::Green);
    sf::RectangleShape winningLine3(sf::Vector2f(850.0f, 20.0f)); winningLine3.setPosition(9990.f, 9990.f); winningLine3.rotate(40); winningLine3.setFillColor(sf::Color::Green);
    sf::RectangleShape winningLine4(sf::Vector2f(850.0f, 20.0f)); winningLine4.setPosition(9990.f, 9990.f); winningLine4.rotate(140); winningLine4.setFillColor(sf::Color::Green);

    bool p1turn = true; w.setKeyRepeatEnabled(false);
    
    while (w.isOpen()) {
        w.setKeyRepeatEnabled(false);
        sf::Event eve;
        while (w.pollEvent(eve)) {
            switch (eve.type) {
            case sf::Event::Closed:
                w.close();
                break;
            case sf::Event::MouseButtonPressed:
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
                    sf::Vector2i mousepos = sf::Mouse::getPosition(w); w.setKeyRepeatEnabled(false);
                    if (mousepos.x < 330 && mousepos.x > 160 && mousepos.y < 210 && mousepos.y > 50) {
                        if (p1turn == true) {
                            x1.setFont(font);
                            x1.setString("X");
                            x1.setCharacterSize(100);
                            x1.setFillColor(sf::Color::White);
                            p1.setString("P2 Turn");
                        }
                        else {
                            x1.setFont(font);
                            x1.setString("O");
                            x1.setCharacterSize(100);
                            x1.setFillColor(sf::Color::White);
                            p1.setString("P1 Turn");
                        }
                        x1.setPosition(210.f, 60.f); p1turn = !p1turn;
                    }
                    if (mousepos.x > 350 && mousepos.x < 610 && mousepos.y < 210 && mousepos.y > 50) {
                        if (p1turn == true) {
                            x2.setFont(font);
                            x2.setString("X");
                            x2.setCharacterSize(100);
                            x2.setFillColor(sf::Color::White);
                            p1.setString("P2 Turn");
                        }
                        else {
                            x2.setFont(font);
                            x2.setString("O");
                            x2.setCharacterSize(100);
                            x2.setFillColor(sf::Color::White);
                            p1.setString("P1 Turn");
                        }
                        x2.setPosition(440.f, 60.f); p1turn = !p1turn;
                    }
                    if (mousepos.x > 630 && mousepos.x < 810 && mousepos.y < 210 && mousepos.y > 50) {
                        if (p1turn == true) {
                            x3.setFont(font);
                            x3.setString("X");
                            x3.setCharacterSize(100);
                            x3.setFillColor(sf::Color::White);
                            p1.setString("P2 Turn");
                        }
                        else {
                            x3.setFont(font);
                            x3.setString("O");
                            x3.setCharacterSize(100);
                            x3.setFillColor(sf::Color::White);
                            p1.setString("P1 Turn");
                        }
                        x3.setPosition(690.f, 60.f); p1turn = !p1turn;
                    }
                    if (mousepos.x > 630 && mousepos.x < 810 && mousepos.y > 230 && mousepos.y < 400) {
                        if (p1turn == true) {
                            x4.setFont(font);
                            x4.setString("X");
                            x4.setCharacterSize(100);
                            x4.setFillColor(sf::Color::White);
                            p1.setString("P2 Turn");
                        }
                        else {
                            x4.setFont(font);
                            x4.setString("O");
                            x4.setCharacterSize(100);
                            x4.setFillColor(sf::Color::White);
                            p1.setString("P1 Turn");
                        }
                        x4.setPosition(690.f, 250.f); p1turn = !p1turn;
                    }
                    if (mousepos.x > 350 && mousepos.x < 610 && mousepos.y > 230 && mousepos.y < 400) {
                        if (p1turn == true) {
                            x5.setFont(font);
                            x5.setString("X");
                            x5.setCharacterSize(100);
                            x5.setFillColor(sf::Color::White);
                            p1.setString("P2 Turn");
                        }
                        else {
                            x5.setFont(font);
                            x5.setString("O");
                            x5.setCharacterSize(100);
                            x5.setFillColor(sf::Color::White);
                            p1.setString("P1 Turn");
                        }
                        x5.setPosition(440.f, 250.f); p1turn = !p1turn;
                    }
                    if (mousepos.x < 330 && mousepos.x > 160 && mousepos.y > 230 && mousepos.y < 400) {
                        if (p1turn == true) {
                            x6.setFont(font);
                            x6.setString("X");
                            x6.setCharacterSize(100);
                            x6.setFillColor(sf::Color::White);
                            p1.setString("P2 Turn");
                        }
                        else {
                            x6.setFont(font);
                            x6.setString("O");
                            x6.setCharacterSize(100);
                            x6.setFillColor(sf::Color::White);
                            p1.setString("P1 Turn");
                        }
                        x6.setPosition(210.f, 250.f); p1turn = !p1turn;
                    }
                    if (mousepos.x < 330 && mousepos.x > 160 && mousepos.y > 420 && mousepos.y < 600) {
                        if (p1turn == true) {
                            x7.setFont(font);
                            x7.setString("X");
                            x7.setCharacterSize(100);
                            x7.setFillColor(sf::Color::White);
                            p1.setString("P2 Turn");
                        }
                        else {
                            x7.setFont(font);
                            x7.setString("O");
                            x7.setCharacterSize(100);
                            x7.setFillColor(sf::Color::White);
                            p1.setString("P1 Turn");
                        }
                        x7.setPosition(210.f, 460.f); p1turn = !p1turn;
                    }
                    if (mousepos.x > 350 && mousepos.x < 610 && mousepos.y > 420 && mousepos.y < 600) {
                        if (p1turn == true) {
                            x8.setFont(font);
                            x8.setString("X");
                            x8.setCharacterSize(100);
                            x8.setFillColor(sf::Color::White);
                            p1.setString("P2 Turn");
                        }
                        else {
                            x8.setFont(font);
                            x8.setString("O");
                            x8.setCharacterSize(100);
                            x8.setFillColor(sf::Color::White);
                            p1.setString("P1 Turn");
                        }
                        x8.setPosition(440.f, 460.f); p1turn = !p1turn;
                    }
                    if (mousepos.x > 630 && mousepos.x < 810 && mousepos.y > 420 && mousepos.y < 600) {
                        if (p1turn == true) {
                            x9.setFont(font);
                            x9.setString("X");
                            x9.setCharacterSize(100);
                            x9.setFillColor(sf::Color::White);
                            p1.setString("P2 Turn");
                        }
                        else {
                            x9.setFont(font);
                            x9.setString("O");
                            x9.setCharacterSize(100);
                            x9.setFillColor(sf::Color::White);
                            p1.setString("P1 Turn");
                        }
                        x9.setPosition(690.f, 460.f); p1turn = !p1turn;
                    }
                }
                break;
                case sf::Event::TextEntered:
                    if (eve.text.unicode == 48) {
                        return;
                    }
                    break;
            default:
                break;
            }
        }

        if (x1.getString() == "X" && x2.getString() == "X" && x3.getString() == "X") {
            winningLine1.setPosition(135.f, 110.f); p1.setString("P1 Wins!"); p1.setPosition(270.f, 700.f); menu.setString("0: Return to Main Menu");
        }
        if (x1.getString() == "O" && x2.getString() == "O" && x3.getString() == "O") {
            winningLine1.setPosition(135.f, 110.f); p1.setString("P2 Wins!"); p1.setPosition(270.f, 700.f); menu.setString("0: Return to Main Menu");
        }

        if (x4.getString() == "X" && x5.getString() == "X" && x6.getString() == "X") {
            winningLine1.setPosition(135.f, 300.f); p1.setString("P1 Wins!"); p1.setPosition(270.f, 700.f); menu.setString("0: Return to Main Menu");
        }
        if (x4.getString() == "O" && x5.getString() == "O" && x6.getString() == "O") {
            winningLine1.setPosition(135.f, 300.f); p1.setString("P2 Wins!"); p1.setPosition(270.f, 700.f); menu.setString("0: Return to Main Menu");
        }

        if (x7.getString() == "X" && x8.getString() == "X" && x9.getString() == "X") {
            winningLine1.setPosition(135.f, 510.f); p1.setString("P1 Wins!"); p1.setPosition(270.f, 700.f); menu.setString("0: Return to Main Menu");
        }
        if (x7.getString() == "O" && x8.getString() == "O" && x9.getString() == "O") {
            winningLine1.setPosition(135.f, 510.f); p1.setString("P2 Wins!"); p1.setPosition(270.f, 700.f); menu.setString("0: Return to Main Menu");
        }


        if (x1.getString() == "X" && x6.getString() == "X" && x7.getString() == "X") {
            winningLine2.setPosition(235.f, 20.f); p1.setString("P1 Wins!"); p1.setPosition(270.f, 700.f); menu.setString("0: Return to Main Menu");
        }
        if (x1.getString() == "O" && x6.getString() == "O" && x7.getString() == "O") {
            winningLine2.setPosition(235.f, 20.f); p1.setString("P2 Wins!"); p1.setPosition(270.f, 700.f); menu.setString("0: Return to Main Menu");
        }

        if (x2.getString() == "X" && x5.getString() == "X" && x8.getString() == "X") {
            winningLine2.setPosition(465.f, 20.f); p1.setString("P1 Wins!"); p1.setPosition(270.f, 700.f); menu.setString("0: Return to Main Menu");
        }
        if (x2.getString() == "O" && x5.getString() == "O" && x8.getString() == "O") {
            winningLine2.setPosition(470.f, 20.f); p1.setString("P2 Wins!"); p1.setPosition(270.f, 700.f); menu.setString("0: Return to Main Menu");
        }

        if (x3.getString() == "X" && x4.getString() == "X" && x9.getString() == "X") {
            winningLine2.setPosition(715.f, 20.f); p1.setString("P1 Wins!"); p1.setPosition(270.f, 700.f); menu.setString("0: Return to Main Menu");
        }
        if (x3.getString() == "O" && x4.getString() == "O" && x9.getString() == "O") {
            winningLine2.setPosition(715.f, 20.f); p1.setString("P2 Wins!"); p1.setPosition(270.f, 700.f); menu.setString("0: Return to Main Menu");
        }

        if (x1.getString() == "X" && x5.getString() == "X" && x9.getString() == "X") {
            winningLine3.setPosition(150.f, 20.f); p1.setString("P1 Wins!"); p1.setPosition(270.f, 700.f); menu.setString("0: Return to Main Menu");
        }
        if (x1.getString() == "O" && x5.getString() == "O" && x9.getString() == "O") {
            winningLine3.setPosition(150.f, 20.f); p1.setString("P2 Wins!"); p1.setPosition(270.f, 700.f); menu.setString("0: Return to Main Menu");
        }
        if (x3.getString() == "X" && x5.getString() == "X" && x7.getString() == "X") {
            winningLine4.setPosition(810.f, 50.f); p1.setString("P1 Wins!"); p1.setPosition(270.f, 700.f); menu.setString("0: Return to Main Menu");
        }
        if (x3.getString() == "O" && x5.getString() == "O" && x7.getString() == "O") {
            winningLine4.setPosition(810.f, 50.f); p1.setString("P2 Wins!"); p1.setPosition(270.f, 700.f); menu.setString("0: Return to Main Menu");
        }


        if (x1.getString() != "" && x2.getString() != "" && x3.getString() != "" && x4.getString() != "" && x5.getString() != "" && x6.getString() != "" && x7.getString() != "" && x8.getString() != "" && x9.getString() != "" && (p1.getString() == "P1 Turn" || p1.getString() == "P2 Turn")) {
            p1.setString("It's A Tie!"); p1.setPosition(260.f, 700.f); menu.setString("0: Return to Main Menu");
        }


        w.clear();
        w.draw(p1); w.draw(x1); w.draw(x2);  w.draw(x3);  w.draw(x4);  w.draw(x5);  w.draw(x6);  w.draw(x7);  w.draw(x8);  w.draw(x9);
        w.draw(winningLine1); w.draw(winningLine2); w.draw(winningLine3); w.draw(winningLine4); w.draw(menu);
        board(w);
    }
}
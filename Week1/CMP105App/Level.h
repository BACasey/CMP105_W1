#pragma once

#include <SFML/Graphics.hpp>
#include <string.h>
#include <iostream>


class Level{
public:
	Level(sf::RenderWindow* hwnd);
	~Level();

	void handleInput();
	void update();
	void render();

private:
	void beginDraw();
	void endDraw();
	sf::RenderWindow* window;

	sf::RectangleShape rect;
	sf::RectangleShape redRect;
	sf::RectangleShape greenRect;
	sf::RectangleShape blueRect;
	sf::CircleShape circle;
	sf::Font arial;
	sf::Text text;
};
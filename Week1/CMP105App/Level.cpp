#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rect.setSize(sf::Vector2f(50, 5));
	rect.setPosition(100, 100);
	rect.setFillColor(sf::Color::Red);

	redRect.setSize(sf::Vector2f(50, 50));
	redRect.setPosition(300, 300);
	redRect.setFillColor(sf::Color::Red);
	greenRect.setSize(sf::Vector2f(35, 35));
	greenRect.setPosition(307, 307);
	greenRect.setFillColor(sf::Color::Green);
	blueRect.setSize(sf::Vector2f(20, 20));
	blueRect.setPosition(315, 315);
	blueRect.setFillColor(sf::Color::Blue);

	circle.setPosition(150, 150);
	circle.setRadius(50);
	circle.setOutlineThickness(5);
	circle.setOutlineColor(sf::Color::Blue);
	circle.setFillColor(sf::Color::Red);

	if (!arial.loadFromFile("font/arial.ttf"))
	{
		std::cout << "OH NOE" << std::endl;
	}

	text.setFont(arial);
	text.setFillColor(sf::Color::Black);
	text.setCharacterSize(32);
	text.setStyle(sf::Text::Bold);
	text.setPosition(300, 50);
	text.setString("Henlo Wrold");
}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(text);
	window->draw(rect);
	window->draw(redRect);
	window->draw(greenRect);
	window->draw(blueRect);
	window->draw(circle);

	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}
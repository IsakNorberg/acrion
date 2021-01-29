#include "SFML/Graphics.hpp"
#include "MyGame.h"
#include "GameFunc.h"
#include <iostream>
#include "String.h"
#include "Game.h"


int main(int argc, char** argv)
{
	sf::VideoMode video_mode;
	const char* title = "";

	Game* game = new Game(video_mode.width, video_mode.height, title);

	sf::RenderWindow window(video_mode, title);
	sf::Clock clock;
	sf::Time delta;
	float frameTime = 1.0f / 60.0f;
	bool running = true;

	//test
	Map myMap(1000); // något konstigt med the map sak
	Player myPlayer(1, 1);
	

	while (running)
	{
		std::cout << "You are in a " << myMap[myPlayer.getPlayerX() * myPlayer.getPlayerY()]<< "\n" << "wear do you want to go? \n";
		myPlayer.move();
		StringComand comand = "Hej";
		StringComand comand2 = "Hej";
		if (comand == comand2)
		{
			comand.toLower();
			comand2.toLower();
		}
		sf::Event event;
		delta = clock.restart();
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
				case sf::Event::EventType::Closed:
					running = false; break;
			}
		}

		window.clear(sf::Color::Black);
	
		if (game->Update(delta.asSeconds()))
			game->Draw(window);
		else
			running = false;
	
		window.display();
		sf::Time delay(sf::seconds(frameTime - delta.asSeconds()));
		sf::sleep(delay);
	}

	delete game;
	game = nullptr;
	return 0;
}
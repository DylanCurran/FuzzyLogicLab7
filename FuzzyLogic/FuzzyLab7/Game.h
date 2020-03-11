/// <summary>
/// author Dylan Curran 2020
/// </summary>
#ifndef GAME_HPP
#define GAME_HPP
/// <summary>
/// include guards used so we don't process this file twice
/// </summary>
#include <SFML/Graphics.hpp>
#include "Enemy.h"
#include "Defender.h"
class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();

private:
	
	void processEvents();
	void processKeys(sf::Event t_event);
	void update(sf::Time t_deltaTime);
	void render();
	
	Enemy m_enemy;
	Defender m_defender;
	int m_randEnemies = 0;
	sf::RenderWindow m_window; // main SFML window
	bool m_exitGame; // control exiting game

};

#endif // !GAME_HPP


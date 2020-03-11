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
	float calculateLeftTriangle();
	float calculateRightTriangle();
	float calculateWithinBounds();
	void processEvents();
	void processKeys(sf::Event t_event);
	void update(sf::Time t_deltaTime);
	void render();
	
	Enemy m_enemy;
	Defender m_defender;
	int m_randEnemies = 0;
	sf::RenderWindow m_window; // main SFML window
	bool m_exitGame; // control exiting game
	int m_minTroops[4]{0,3,15,25}; // size in order
	int m_maxTroops[4]{10,20,30,30}; // max in order
	int m_outRanges[7]{ 0,10,3,20,15,30,25 }; // ranges in order last value is large
	int m_maxDanger[5]{10,15,20,25,30} // ranges for small, medium and last is large

};

#endif // !GAME_HPP


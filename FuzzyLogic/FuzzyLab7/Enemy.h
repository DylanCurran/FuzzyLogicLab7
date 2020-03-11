#ifndef ENEMY
#define ENEMY
#include <iostream>
#include <SFML/Graphics.hpp>
class Enemy
{
private:
	sf::Vector2f m_enemyPos;
	sf::Sprite m_enemySprite;
	sf::Texture m_enemyTexture;
public:
	Enemy();
	~Enemy();
	void initEnemy();
	void render(sf::RenderWindow& t_window);
	void setPosition(sf::Vector2f t_position) { m_enemyPos = t_position;  m_enemySprite.setPosition(m_enemyPos); }
	sf::Vector2f getPosition() { return m_enemyPos; }
};
#endif	//!ENEMY
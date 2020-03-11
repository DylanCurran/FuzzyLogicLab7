#include "Enemy.h"

Enemy::Enemy()
{
}

Enemy::~Enemy()
{
}

void Enemy::initEnemy()
{
	m_enemyTexture.loadFromFile("enemy.png");
	m_enemySprite.setTexture(m_enemyTexture);
}

void Enemy::render(sf::RenderWindow& t_window)
{
	t_window.draw(m_enemySprite);
}

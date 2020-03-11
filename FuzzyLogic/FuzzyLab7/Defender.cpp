#include "Defender.h"

Defender::Defender()
{
}

Defender::~Defender()
{
}

void Defender::initDefender()
{
	m_defenderTexture.loadFromFile("soldier.png");
	m_defenderSprite.setTexture(m_defenderTexture);
}

void Defender::render(sf::RenderWindow& t_window)
{
	t_window.draw(m_defenderSprite);
}

#ifndef DEFENDER
#define DEFENDER
#include <iostream>
#include <SFML/Graphics.hpp>
class Defender
{
public:
	Defender();
	~Defender();
	void initDefender();
	void render(sf::RenderWindow& t_window);
	void setPosition(sf::Vector2f t_position) { m_defenderPos = t_position; m_defenderSprite.setPosition(m_defenderPos); }
private:
	sf::Vector2f m_defenderPos;
	sf::Sprite m_defenderSprite;
	sf::Texture m_defenderTexture;
};
#endif	// !DEFENDER
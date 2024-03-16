#pragma once
#include <vector>

#include "Global.hpp"
#include "Bullet.hpp"
#include "Animation.hpp"

class Player
{
	//Is it okay to call this variable "dead"?
	//I mean, it's a spaceship.
	//And spaceships don't die, they get destroyed.
	bool dead;
	bool dead_animation_over;
	bool shield_animation_over;

	byte current_power;
	byte reload_timer;

	word power_timer;
	word x;
	word y;

	std::vector<Bullet> bullets;

	sf::Sprite bullet_sprite;
	sf::Sprite sprite;

	sf::Texture bullet_texture;
	sf::Texture texture;

	Animation explosion;
public:
	Player();

	bool get_dead() const;
	bool get_dead_animation_over() const;

	unsigned char get_current_power() const;

	unsigned short get_power_timer() const;
	unsigned short get_y() const;

	void die();
	void draw(sf::RenderWindow& i_window);
	void reset();
	void update(std::mt19937_64& i_random_engine, std::vector<Bullet>& i_enemy_bullets, std::vector<Enemy>& i_enemies, Ufo& i_ufo);

	IntRect get_hitbox() const;
};
#include "EnemyShip.h"



EnemyShip::EnemyShip(float agent_width, float agent_height, glm::vec2 position, std::string texture)
	:Ship(agent_width,agent_height,position,texture),_elapsed(0)
{
	
}

void EnemyShip::update(float deltaTime) {
	_elapsed += deltaTime;
	_position.y -= 5;
}

float EnemyShip::getPos() {
	return _position.y;
}

bool EnemyShip::colisiono(float x, float y) {

	if ((_position.x + 40  >= x && _position.x - 40 <= x) &&
		(_position.y + 20 >= y && _position.y - 20 <= y)) {
		return true;
	}
	return false;
}

EnemyShip::~EnemyShip()
{
}

#include "enemy.h"
using namespace std;

Enemy::Enemy(char type, int hp, int atk, int def) : Character(type, hp, atk, def) {
}

bool Enemy::isHostile() {
	return true;
}

Enemy::~Enemy() {
}
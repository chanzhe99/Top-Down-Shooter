#pragma once

#include <GameObject.h>

class Bullet : public GameObject
{
private:
	Vector2 Velocity;

public:
	//! Instantiates BulletObject with default values
	Bullet();
	//! Initialises a EnemyObject instance that takes in a Sprite pointer
	Bullet(Sprite* DesiredSprite);
	~Bullet();

	//! Returns true if the bullet goes off screen
	bool CheckBorders(const Vector2& GameBorder);
	//! Updates the BulletObject
	void Update(float DeltaTime);
};


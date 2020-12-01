#pragma once
#include <string>
#include "SDL.h"
#include "ECS.h"
#include "Components.h"

// TODO: Wall's not working.

// AABB collision (Access Alligned Bounding Box)
/*  
* If all three of the following are true then we have collision
* A.x + A.w >= B.x &&
* B.x + B.w >= A.x &&
* A.y + A.h >= B.y &&
* B.y + B.h >= A.y
*/
class ColliderComponent : public Component
{
public:

	SDL_Rect collider;
	std::string tag;

	TransformComponent* transform;

	ColliderComponent(std::string t)
	{
		tag = t;
	}
	void init() override
	{
		if (!entity->hasComponent<TransformComponent>())
		{
			entity->addComponent<TransformComponent>();
		}

		transform = &entity->getComponent<TransformComponent>();

		Game::colliders.push_back(this);
	}

	void update() override
	{
		collider.x = static_cast<int>(transform->position.x);
		collider.y = static_cast<int>(transform->position.y);
		collider.w = transform->width * transform->scale;
		collider.h = transform->height * transform->scale;
	}

};
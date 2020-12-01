#include "Collision.h"
#include "ECS/ColliderComponent.h"

// Youtube comment on episode 13
/* instead of doing the AABB calculation yourself you can just pass it to SDL_HasIntersection:
*bool Collision::AABB(const SDL_Rect & A, const SDL_Rect & B)
*{
* return SDL_HasIntersection(&A, &B);
*}
*/

bool Collision::AABB(const SDL_Rect& recA, const SDL_Rect& recB)
{
	if (
		recA.x + recA.w >= recB.x &&
		recB.x + recB.w >= recA.x &&
		recA.y + recA.h >= recB.y &&
		recB.y + recB.h >= recA.y
		)
	{
		return true;
	}

	return false;
}

bool Collision::AABB(const ColliderComponent& colA, const ColliderComponent& colB)
{
	if (AABB(colA.collider, colB.collider))
	{
		// std::cout << colA.tag << " hit: " << colB.tag << std::endl;
		return true;
	}
	else
	{
		return false;
	}
}
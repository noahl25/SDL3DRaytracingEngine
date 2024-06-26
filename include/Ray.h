#pragma once

#include <glm/glm.hpp>

struct Ray {
	glm::vec2 Start;
	glm::vec2 Direction;
};


struct RaycastHit {
	glm::vec2 HitPos;
	float Distance;
	float PerpendicularDistance;
	bool Hit = false;
	int Side;
};
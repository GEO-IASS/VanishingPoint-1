#pragma once

#include <glew.h>
#include <glm/glm.hpp>

class Camera {
public:
	Camera();

	void mousePress(int mouse_x, int mouse_y);
	void rotate(int mouse_x, int mouse_y, float senstivity);
	void rotateAroundZ(int mouse_x, int mouse_y, float senstivity);
	//void zoom(float delta);
	void zoom(float delta, float senstivity, int width, int height);
	void move(int mouse_x, int mouse_y);
	void updatePMatrix(int width,int height);
	void updateMVPMatrix();

public:
	float fovy;
	glm::vec3 pos;
	float xrot;
	float yrot;
	float zrot;

	float distanceBase;

	glm::vec2 mouse_pos;

public:
	glm::mat4 mvMatrix;
	glm::mat4 pMatrix;
	glm::mat4 mvpMatrix;
};


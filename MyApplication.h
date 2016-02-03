#pragma once
#include "stdio.h"
#include "SolarSystem.h"

using glm::vec3;
using glm::vec4;
using glm::mat4;

class Application
{

public :
	Application();	
	int startup();
	int update();
	void draw();
	void shutdown();

	SolarSystem System;

	float dt;
private:

	float totalTime;
	float currentTime;

	int m_x;
	int m_y;
	GLFWwindow *window;
	mat4 m_view;
	mat4 m_projection;

	Planet Center;
};
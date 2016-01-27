#pragma once
#include "stdio.h"
#include "Planets.h"

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
private:
	int m_x;
	int m_y;
	GLFWwindow *window;
	mat4 m_view;
	mat4 m_projection;
	
};
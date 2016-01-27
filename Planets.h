#pragma once

#include <gl_core_4_4.h> 
#include <GLFW/glfw3.h> 
#include <Gizmos.h>
#include <glm\glm.hpp>
#include <glm\ext.hpp>



class Planet
{
public:
	Planet(float, float, glm::vec3, glm::vec4, glm::mat4, Planet);
	Planet();
	void Draw();
	void Update();
	glm::vec3 getPos()
	{
		return m_Pos;
	}
private:
	float m_Speed;
	float m_Size;
	glm::vec3 m_Pos;
	glm::vec4 m_Color;
	glm::mat4 m_Model;
	Planet m_Children();
};
#pragma once

#include <vector>
#include <string>

#include <glm\glm.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include <glm\gtc\type_ptr.hpp>

#include "Mesh.h"
#include "Shader.h"
#include "Texture.h"

class Skybox
{
public:
	Skybox();

	Skybox(std::vector<std::string>faceLocations);

	void DrawSkybox(glm::mat4 viewMatrix, glm::mat4 projectionMatrix);

	~Skybox();

private:
	Mesh* skyMesh;
	Shader* skyShader;
	
	GLuint textureId;
	GLuint uniformProjection, uniformView;
};


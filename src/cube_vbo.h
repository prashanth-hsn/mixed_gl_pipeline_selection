#pragma once

#include <glm/glm.hpp>

class CubeRenderer {
private:
    GLuint VAO, VBO, EBO;
    GLuint shaderProgram;
    GLuint modelLoc, viewLoc, projectionLoc, selectedLoc;

public:
    CubeRenderer();

    ~CubeRenderer();

    void setupShaders();

    void setupBuffers();

    void render(const glm::mat4& view, const glm::mat4& projection, const std::vector<glm::mat4>& models, bool selected);
};

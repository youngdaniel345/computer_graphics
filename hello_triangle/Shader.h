#ifndef SHADER_H
#define SHADER_H

#include <glad/glad.h> // GLAD includes the required OpenGL headers

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader
{
    public:
        unsigned int ID;        // program ID

        // Constructor reads and builds the shader
        Shader(const GLchar* vertexPath, const GLchar* fragmentPath);

        void use(); // Use the active shader

        // Utility functions for uniforms
        // const keyword at end of function declaration means these functions can't
        // change any member variables in the Shader class, such as our program ID
        void setBool(const std::string &name, bool value) const;
        void setInt(const std::string &name, int value) const;
        void setFloat(const std::string &name, float value) const;
};

#endif // SHADER_H

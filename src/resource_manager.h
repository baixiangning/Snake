#include <map>
#include <string>

#include "stb_image.h"
#include "shader.h"
#include "texture.h"
class  ResourceManager
{
public:
    static std::map<std::string, Shader> Shaders;
    static std::map<std::string, Texture2D> Textures;

    static Shader   LoadShader(const GLchar* vShaderFile, const GLchar* fShaderFile, const GLchar* gShaderFile, std::string name);

    static Shader   GetShader(std::string name);

    static Texture2D LoadTexture(const GLchar* file, GLboolean alpha, std::string name);

    static Texture2D GetTexture(std::string name);

    static void      Clear();

private:
    // Private constructor, that is we do not want any actual resource manager objects. Its members and functions should be publicly available (static).
    ResourceManager() { }
    // Loads and generates a shader from file
    static Shader    loadShaderFromFile(const GLchar* vShaderFile, const GLchar* fShaderFile, const GLchar* gShaderFile = nullptr);
    // Loads a single texture from file
    static Texture2D loadTextureFromFile(const GLchar* file, GLboolean alpha);
};
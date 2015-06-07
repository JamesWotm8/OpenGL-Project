#include <iostream>

// GLEW
#define GLEW_STATIC
#include <GLFW\glew.h>
// GLFW
#include <GLFW/glfw3.h>

int main(){
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

	//initialize GLFW
	GLFWwindow* window = glfwCreateWindow(800, 600, "LearnOpenGL", nullptr, nullptr);
	glfwMakeContextCurrent(window);
	if (window == NULL){
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
		
	//initialize GLEW
	glewExperimental = GL_TRUE;
	if (glewInit() != GLEW_OK){
		std::cout << "Failed to initialize GLEW" << std::endl;
		return -1;
	}

	return 0;	
}
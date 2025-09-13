#include <GLFW/glfw3.h>

namespace vengeance {
	GLFWwindow* g_window = nullptr;
}

void initialize_glfw() {

	static int width  = 800;
	static int height = 600; 

	if (!glfwInit()) {
		//log("Engine shutting down, as GLFW failed to initialize. Fuck?");
	}

	//log("GLFW has been initialized");
	vengeance::g_window = glfwCreateWindow(width, height, "Vengeance6", nullptr, nullptr);
}

int main() {

	initialize_glfw();

	while (!glfwWindowShouldClose(vengeance::g_window)) {
		glfwSwapBuffers(vengeance::g_window);
		glfwPollEvents();
	}

	return 0;
}


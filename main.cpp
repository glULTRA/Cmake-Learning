#include "Engine.h"
#include <GLFW/glfw3.h>

int main(){
    Engine eng1;
    eng1.RunEngine(); 

    glfwInit();

    GLFWwindow *window = glfwCreateWindow(640, 480, "TEST", NULL ,NULL);

    if(!window);

    glfwMakeContextCurrent(window);

    while(!glfwWindowShouldClose(window))
    {
        glClearColor(0.1f, 0.2f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

}

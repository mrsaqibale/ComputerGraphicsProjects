#include <GLFW/glfw3.h>
#include <GL/gl.h>


int main(){
    GLFWwindow* window;
    if(!glfwInit()){
        return -1;
    }
    window = glfwCreateWindow(550, 444, "hello pakistan", NULL, NULL);
    glfwMakeContextCurrent(window);
    

    while (!glfwWindowShouldClose(window)){
        glClearColor(1.0,1.0,1.0,0.0);
        glfwPollEvents();
        glfwSwapBuffers(window);
    }
    glfwTerminate();
    return 0;
}
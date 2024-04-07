#include <GLFW/glfw3.h>
#include <GL/gl.h>



int main(int argc, char** argv){
    
    GLFWwindow* window;
    if(!glfwInit()){
        return -1;
    }
    window = glfwCreateWindow(500, 500, "pakistan", NULL, NULL);
    glfwMakeContextCurrent(window);
    

    while (!glfwWindowShouldClose(window)){
        glClearColor(0.0,1.0,1.0,0.0);
        // glBegin(GL_POINT);
        // glVertex2i(100,200);
        // glVertex2i(100,200);
        // glVertex2i(100,200);
        // glEnd();
        
        glfwPollEvents();
        glfwSwapBuffers(window);
    }
    glfwTerminate();
    return 0;
}
// gcc main.c -o main -lglfw -lGL -lX11 -lm -lpthread -ldl
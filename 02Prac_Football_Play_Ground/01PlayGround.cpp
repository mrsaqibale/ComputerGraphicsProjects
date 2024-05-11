// by mrsaqibale
#include <GL/glut.h>
#include <GL/gl.h>
#include "display.h"

// write display function calls
void display(){
    Display obj;
    obj.display();
}
int main(int argc, char* argv[])
{
    // Initialize glut function 
    glutInit(&argc, argv);

    //Set window size and display
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1200, 900);
    glutInitWindowPosition(50,50);
    glutCreateWindow("Play Ground");

    //set the background color
    glClearColor(0.7,0.2,0.4,0.0);
    gluOrtho2D(-1.0,1.0,-1.0,1.0);
    //Register Display Function
    glutDisplayFunc(display);

    //main loop
    glutMainLoop();

    //return
    return 0;
}
// g++ -o outputs/final 01PlayGround.cpp  display.cpp -lGL -lGLU -lglut


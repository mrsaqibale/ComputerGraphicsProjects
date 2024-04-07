#include <GL/gl.h>
#include <GL/glut.h>

int main(int argc, char** argv) {
    // START --> ONLY OPEN THE SCREEN FOR MILISEC
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,800);
    glutInitWindowPosition(100,100);
    glutCreateWindow("New Window");
    
    // END

    // START
    glClearColor(1.0,1.0,0.0,0.5);
    glBegin (GL_POINTS);
    glVertex2i (100, 50);
    glVertex2i (100, 130);
    glVertex2i (150, 130);
    glEnd();
    
    glBegin (GL_LINES); //draws one line
glVertex2i (40, 100);
glVertex2i (202, 96);
// between 2 vertices
glEnd ();
    glutMainLoop();
    return 0;
}
// g++ 03WindosCode.cpp -o 3 -lGL -lGLU -lglut

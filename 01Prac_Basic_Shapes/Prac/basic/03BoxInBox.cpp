#include <GL/glut.h>
#include <GL/gl.h>

// create display function which show triangle
void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    // First Box large yellow
    glColor3f(1.0,1.0,0.0);
    glLineWidth(10.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.5, 0.5);
    glVertex2f(-0.5, 0.5);
    glVertex2f(-0.5, -0.5);
    glVertex2f(0.5, -0.5);
    glEnd();

    // Second Box small red
    glColor3f(1.0,0.0,0.0);
    glLineWidth(7.0);
    // glBegin(GL_LINE_LOOP);   // simple box
    glBegin(GL_POLYGON);   // simple polygon with filled color red
    glVertex2f(0.3, 0.3);
    glVertex2f(-0.3, 0.3);
    glVertex2f(-0.3, -0.3);
    glVertex2f(0.3, -0.3);
    glEnd();


    glFlush();
}

int main(int argc, char** argv)
{
    // initlize basic glut
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1400, 1000);
    glutCreateWindow("Box In Box");


    // set color and call display function
    glClearColor(1.0,1.0,1.0,0.0);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

// g++ 03BoxInBox.cpp -o outputs/3 -lGL -lglut
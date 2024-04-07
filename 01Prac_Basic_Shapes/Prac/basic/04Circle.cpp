#include <GL/glut.h>
#include <GL/gl.h>
#include <cmath>
#include <iostream>

// create display function which show triangle
void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    // First Box large yellow
    glColor3f(1.0,1.0,0.0);
    glLineWidth(10.0);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 100; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(100);  // Angle for each segment
        float x = 500.0 * cosf(theta);  // Calculate x coordinate
        float y = 500.0 * sinf(theta);  // Calculate y coordinate
        std::cout<<x<<"  "<<y<<"\n";
        x = x/ 1400.0;
        y = y/1000.0;
        glVertex2f(x, y);  // Set vertex
    }
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
// parametric equations of a circle

    // set color and call display function
    glClearColor(1.0,1.0,1.0,0.0);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

// g++ 04Circle.cpp -o outputs/4 -lGL -lglut
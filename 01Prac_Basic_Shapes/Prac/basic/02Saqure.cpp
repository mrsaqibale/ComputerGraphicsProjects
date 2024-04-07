#include <GL/glut.h>
#include <GL/gl.h>

// create display function which show triangle
void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    // DRAW SAQURE
    glColor3f(1.0,1.0,0.0);
    glLineWidth(10.0);

    // glBegin(GL_LINE_LOOP);        //FOR SIMPLE SAQURE
    glBegin(GL_POLYGON);             //FOR COLORED SAQURE
    glVertex2f(0.5, 0.5);
    glVertex2f(-0.5, 0.5);
    glVertex2f(-0.5, -0.5);
    glVertex2f(0.5, -0.5);
    glEnd();
    glFlush();
}

int main(int argc, char** argv)
{
    // initlize basic glut
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1400, 1000);
    glutCreateWindow("Saqure");


    // set color and call display function
    glClearColor(1.0,1.0,1.0,0.0);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

// g++ 02Saqure.cpp -o outputs/2 -lGL -lglut
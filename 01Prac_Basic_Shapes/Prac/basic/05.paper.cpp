#include <GL/glut.h>
#include <GL/gl.h>

// create display function which show triangle
void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    // DRAW SAQURE
   // glColor3f(1.0,1.0,0.0);
    glLineWidth(10.0);

    // glBegin(GL_LINE_LOOP);        //FOR SIMPLE SAQURE
    // glBegin(GL_TRIANGLE_FAN);             //FOR COLORED SAQURE
    // glVertex2f(0.1, 0.1);
    // glVertex2f(0.4, 0.6);
    // glVertex2f(0.6, 0.1);
    // glVertex2f(0.8, 0.7);
    // glVertex2f(0.9, 0.1);
    // glEnd();
    // glFlush();

    glBegin(GL_LINE_LOOP); // Use GL_LINE_LOOP to draw the outlines
// glVertex3f(4.0, 4.4,0.0);
// glVertex3f(8.0, 4.0,0.0);
// glVertex3f(10.0, 3.0,0.0);
// glVertex3f(9.0, 8.0,0.0);
// glVertex3f(6.0, 8.0,0.0);
// glVertex3f(4.0, 12.0,0.0);
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
    glClearColor(0.5,0.0,1.0,0.0);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

// g++ 02Saqure.cpp -o outputs/2 -lGL -lglut
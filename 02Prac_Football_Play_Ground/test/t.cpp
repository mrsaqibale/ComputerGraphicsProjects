#include <GL/glut.h>
#include <math.h>

void init() {
    
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0); // 2D orthographic projection
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

float p1, q1, p2, q2;
    float a;
    double frradius = 0.05;

    p1 = 0.75, q1 = 0.5;
    glColor3f(0, 1, 1);

    glBegin(GL_LINE_STRIP);
    glVertex2f(p1, q1);


    for (a = 0.0f; a < 3.2f; a += 0.1)

    {
        p2 = p1 + -sin(a) * frradius;
        q2 = q1 + cos(a) * frradius;
        glVertex2f(p2, q2);
    }

    glEnd();


    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("OpenGL Playground");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

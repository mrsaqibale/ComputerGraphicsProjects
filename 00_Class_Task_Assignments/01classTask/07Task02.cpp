#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw Dots
    glPointSize(20.0);
    glColor3f(1.0, 0.0, 0.0);
    glLineWidth(5.0);
    // glBegin(GL_LINE_LOOP);
    // glVertex2f(-0.3, -0.7);
    // glVertex2f(0.0, 0.7);
    // glVertex2f(0.3, -0.7);
    // glVertex2f(-0.4, 0.2);
    // glVertex2f(0.4, 0.2);
    // glEnd();

    // dimand
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.5, 0.0);
    glVertex2f(0.0, 0.5);
    glVertex2f(-0.5, 0.0);
    glVertex2f(0.0, -0.5);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1500, 1000);
    glutInitWindowPosition(100,100);
	glutCreateWindow("OPENGL DOTS AND LINES");
    glClearColor(1.0,1.0,1.0,0.0);
    gluOrtho2D(-1.0,1.0,-1.0,1.0);
	glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
// gcc 06Chat.cpp -o 6 -lGL -lGLU -lglut
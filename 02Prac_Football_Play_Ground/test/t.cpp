#include <GL/glut.h>

void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0); // Black background color
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0); // 2D orthographic projection
}

void drawBorders() {
    // Draw white border
    glColor3f(1.0, 1.0, 1.0); // White color for the border
    glLineWidth(10.0); // Set line width to 10
    glBegin(GL_LINE_LOOP);
    glVertex2f(-9.5, -9.5);
    glVertex2f(9.5, -9.5);
    glVertex2f(9.5, 9.5);
    glVertex2f(-9.5, 9.5);
    glEnd();

    // Draw dark yellow inner border
    glColor3f(0.5, 0.5, 0.0); // Dark yellow color
    glLineWidth(5.0); // Set line width to 5
    glBegin(GL_LINE_LOOP);
    glVertex2f(-8.5, -8.5);
    glVertex2f(8.5, -8.5);
    glVertex2f(8.5, 8.5);
    glVertex2f(-8.5, 8.5);
    glEnd();
}

void drawBackground() {
    // Draw red background inside the white border
    glColor3f(1.0, 0.0, 0.0); // Red color for the background
    glBegin(GL_POLYGON); // Use GL_POLYGON to fill the inner side
    glVertex2f(-9.0, -9.0);
    glVertex2f(9.0, -9.0);
    glVertex2f(9.0, 9.0);
    glVertex2f(-9.0, 9.0);
    glEnd();
}

void drawDarkFilledArea() {
    // Draw dark filled area inside the yellow border
    glColor3f(0.2, 0.2, 0.2); // Dark color for the filled area
    glBegin(GL_POLYGON); // Use GL_POLYGON to fill the inner side
    glVertex2f(-8.0, -8.0);
    glVertex2f(8.0, -8.0);
    glVertex2f(8.0, 8.0);
    glVertex2f(-8.0, 8.0);
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    drawBorders();
    drawBackground();
    drawDarkFilledArea();

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

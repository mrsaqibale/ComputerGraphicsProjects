#include <GL/freeglut.h>
#include <GL/glu.h>
#include <GL/gl.h>

enum MainMenu {
    COLOR_RED = 1,
    COLOR_GREEN,
    COLOR_BLUE,
    COLOR_EXIT
};
float red = 0.0f;
float green = 0.0f;
float blue = 0.0f;
void display() {
    glFlush();
}

void menuCallback(int option) {
    option = option +1;
};

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);

    glutInitWindowSize(1200, 900);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Play Ground");

    glutDisplayFunc(display);

    glutCreateMenu(menuCallback);
    glutAddMenuEntry("Red", COLOR_RED);
    glutAddMenuEntry("Green", COLOR_GREEN);
    glutAddMenuEntry("Blue", COLOR_BLUE);
    glutAddMenuEntry("Exit", COLOR_EXIT);
    glutAttachMenu(GLUT_RIGHT_BUTTON);

    glutMainLoop();
    return 0;
}

// g++ -o outputs/final 01PlayGround.cpp  display.cpp -lGL -lGLU -lglut


#include <GL/freeglut_std.h>
// #include <iostream>
#include <GL/glu.h>
#include <GL/glut.h>

enum MainMenu{
    OPTION_1 = 1,
    OPTION_2 ,
    OPTION_3 ,
    OPTION_EXIT
};

void display();
void menuCallback(int option);


int main(int argc, char* argv[]) {
    // Initialize glut function 
    glutInit(&argc, argv);

    //Set window size and display
    // glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1200, 900);
    glutInitWindowPosition(50,50);
    glutCreateWindow("Play Ground");

    glutDisplayFunc(display);

    // create menu options

    glutCreateMenu(menuCallback);

    glutAddMenuEntry("Option 1", OPTION_1);
    glutAddMenuEntry("Option 2", OPTION_2);
    glutAddMenuEntry("Option 3", OPTION_3);
    glutAddMenuEntry("Exit", OPTION_EXIT);

    glutAttachMenu(GLUT_RIGHT_BUTTON);


    glutMainLoop();
    return 0;
}
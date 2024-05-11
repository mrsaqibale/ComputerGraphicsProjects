#include <GL/freeglut.h>
#include <GL/freeglut_std.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <math.h>

enum MainMenu {
    OPTION_1 = 1,
    OPTION_2,
    OPTION_3,
    OPTION_EXIT
};

void display() {
    glColor3f(0, 0, 0);
    glLineWidth(3.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.0, 0.6);
    glVertex2f(0.0, -0.6);
    glEnd();

    // draw a circle  with white line
    glColor3f(1, 1, 1);
    glLineWidth(8);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 100; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(100);  
        float x = 10.0 * cosf(theta);  
        float y = 10.0 * sinf(theta);  
        x = x/ 140.0;
        y = y/100.0;
        glVertex2f(x, y); 
    }
    glEnd();

    // fill the circle with lite green color 
    glColor3f(0.5, 0.9, 0.4);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(100);  
        float x = 10.0 * cosf(theta);  
        float y = 10.0 * sinf(theta);  
        x = x/ 140.0;
        y = y/100.0;
        glVertex2f(x, y);  
    }
    glEnd();
    glFlush();
}
void display1() {
    glColor3f(0, 0, 0);
    glLineWidth(3.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.0, 0.6);
    glVertex2f(0.0, -0.6);
    glEnd();

    // draw a circle  with white line
    glColor3f(0, 1, 1);
    glLineWidth(8);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 100; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(100);  
        float x = 10.0 * cosf(theta);  
        float y = 10.0 * sinf(theta);  
        x = x/ 140.0;
        y = y/100.0;
        glVertex2f(x, y); 
    }
    glEnd();

    // fill the circle with lite green color 
    glColor3f(0, 0, 0.4);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(100);  
        float x = 10.0 * cosf(theta);  
        float y = 10.0 * sinf(theta);  
        x = x/ 140.0;
        y = y/100.0;
        glVertex2f(x, y);  
    }
    glEnd();
    glFlush();
}



void mouse(int button, int state, int b, int c){
    if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN){
        display();
    }
    else if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
        display1();
    }
    c = 1;
}





void motionf(int val1, int val2){
    val1 = 1;
    val2 = 2;
}
int main(int argc, char* argv[]) {
    glutInit(&argc, argv);

    glutInitWindowSize(1200, 900);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Play Ground");

    
glutMouseFunc(mouse);
glutMotionFunc(motionf);

    // glutCreateMenu(menuCallback);
    // glutDisplayFunc(display);
    
    // glutAddMenuEntry("Option 1", OPTION_1);
    // glutAddMenuEntry("Option 2", OPTION_2);
    // glutAddMenuEntry("Option 3", OPTION_3);
    // glutAddMenuEntry("Exit", OPTION_EXIT);
    // glutAttachMenu(GLUT_RIGHT_BUTTON);

    glutMainLoop();
    return 0;
}

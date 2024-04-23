#include <GL/glut.h>
#include <GL/gl.h>

//DRAW SIDE BAR 
void sideBar(){
    glColor3f(1.0,0.0,0.0);
    glLineWidth(5.0);

    //UPPER BAR
    glBegin(GL_POLYGON);
    glVertex2f(0.9,0.9);
    glVertex2f(0.9,0.6);
    glVertex2f(-0.9,0.6);
    glVertex2f(-0.9,0.9);
    glEnd();
    //white line under upper bar
    glBegin(GL_LINE_LOOP);
    glVertex2f(1,1);
    glVertex2f(1,0.7);
    glVertex2f(-1,0.7);
    glVertex2f(-1,1);
    glEnd();
// thk hy kud ko ham badlty hn
// sukria mashvrat ka chlty hn





    //LOWER BAR
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1,-1);
    glVertex2f(-1,-0.7);
    glVertex2f(1,-0.7);
    glVertex2f(1,-1);
    glEnd();

    //LEFT SIDE BAR
    glColor3f(1.0,0.5,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.7,0.7);
    glVertex2f(-1,0.7);
    glVertex2f(-0.7,-0.7);
    glVertex2f(-1,-0.7);
    glEnd();

    //RIGHT SIDE BAR
    glColor3f(1.0,0.5,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.7,0.7);
    glVertex2f(1,0.7);
    glVertex2f(0.7,-0.7);
    glVertex2f(1,-0.7);
    glEnd();
    

    // MAIN PLAY GROUND

    glFlush();
}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    sideBar();
    
}


int main(int argc, char* argv[])
{
    // Initialize glut function 
    glutInit(&argc, argv);

    //Set window size and display
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1200, 900);
    glutInitWindowPosition(50,50);
    glutCreateWindow("Play Ground");

    //set the background color
    glClearColor(0.7,0.2,0.4,0.0);
    gluOrtho2D(-1.0,1.0,-1.0,1.0);
    //Register Display Function
    glutDisplayFunc(display);

    //main loop
    glutMainLoop();

    //return
    return 0;
}

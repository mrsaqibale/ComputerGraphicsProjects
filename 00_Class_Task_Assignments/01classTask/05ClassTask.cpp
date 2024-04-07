#include <GL/glut.h>
#include <GL/gl.h>

void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    //DRAY DOTS
    glPointSize(10.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POINT);
    glVertex2f(0.5,0.5);
    glVertex2f(-0.5,0.5);
    glVertex2f(-0.5,-0.5);
    glVertex2f(0.5,-0.5);
    glEnd();

    // Draw line
    glLineWidth(5.0);
    glColor3f(0.0,0.0,1.0);
    glBegin(GL_LINE);
    glVertex2f(-0.5,0.0);
    glVertex2f(0.5,0.0);
    glEnd();
    glFlush();

}

int main(int argc, char * argv[])
{
    
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

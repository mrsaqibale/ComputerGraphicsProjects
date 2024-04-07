#include <GL/gl.h>
#include <GL/glut.h>
// #include <GL/glew.h>



void changeViewPort(int w, int h)
{
	glViewport(0, 0, w, h);
}

void render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glutSwapBuffers();
}



int main(int argc, char* argv[]) {

	// Initialize GLUT
	glutInit(&argc, argv);
	// Set up some memory buffers for our display
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	// Set the window size
	glutInitWindowSize(800, 600);
	// Create the window with the title "Hello,GL"
	glutCreateWindow("Hello, GL");
	// Bind the two functions (above) to respond when necessary
	glutReshapeFunc(changeViewPort);
	glutDisplayFunc(render);
    glClearColor(1.0,0.1,0.0,0.5);

	// Very important!  This initializes the entry points in the OpenGL driver so we can 
	// call all the functions in the API.
	// GLenum err = glewInit();
	// if (GLEW_OK != err) {
	// 	// fprintf(stderr, "GLEW error");
	// 	return 1;
	// }


	glutMainLoop();
	return 0;
}

// g++ 04BaeCode.cpp -o 4 -lGL -lGLU -lglut
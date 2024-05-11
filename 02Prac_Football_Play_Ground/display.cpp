
#include "display.h"
#include <GL/glut.h>
#include <GL/gl.h>
#include <math.h>

// constructor
Display::Display(){

}

// UPPER SIDE CODE FUNCTIONS 
void Display::drawInnerMainBorder(){
    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(10.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.99,0.99);
    glVertex2f(-0.99,0.99);
    glVertex2f(-0.99,0.7);
    glVertex2f(0.99,0.7);
    glEnd();
}
void Display::drawLiteBlueOuter(){
    glColor3f(0.7, 0.9, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(0.99,0.99);
    glVertex2f(-0.99,0.99);
    glVertex2f(-0.99,0.7);
    glVertex2f(0.99,0.7);
    glEnd();
}
void Display::drawOuterMainBorder(){
    glColor3f(0.62, 0.62, 0.57);
    glLineWidth(3.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.92,0.92);
    glVertex2f(-0.92,0.92);
    glVertex2f(-0.92,0.77);
    glVertex2f(0.92,0.77);
    glEnd();
}
void Display::drawLiteBlueInner(){
    glColor3f(0.7, 0.9, 1.0);
    glLineWidth(10.0);
    glBegin(GL_QUADS);
    glVertex2f(0.92,0.92);
    glVertex2f(-0.92,0.92);
    glVertex2f(-0.92,0.77);
    glVertex2f(0.92,0.77);
    glEnd();
}

// lower side of the window
void Display::LdrawInnerMainBorder(){
    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(10.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.99,-0.99);
    glVertex2f(-0.99,-0.99);
    glVertex2f(-0.99,-0.7);
    glVertex2f(0.99,-0.7);
    glEnd();
}
void Display::LdrawLiteRedOuter(){
    glColor3f(0.9, 0.23, 0.15);
    glBegin(GL_QUADS);
    glVertex2f(0.99,-0.99);
    glVertex2f(-0.99,-0.99);
    glVertex2f(-0.99,-0.7);
    glVertex2f(0.99,-0.7);
    glEnd();
}
void Display::LdrawOuterMainBorder(){
    glColor3f(0.62, 0.62, 0.57);
    glLineWidth(3.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.92,-0.92);
    glVertex2f(-0.92,-0.92);
    glVertex2f(-0.92,-0.77);
    glVertex2f(0.92,-0.77);
    glEnd();
}
void Display::LdrawLiteRedInner(){
    glColor3f(0.9, 0.23, 0.15);
    glLineWidth(10.0);
    glBegin(GL_QUADS);
    glVertex2f(0.92,-0.92);
    glVertex2f(-0.92,-0.92);
    glVertex2f(-0.92,-0.77);
    glVertex2f(0.92,-0.77);
    glEnd();
}


// RIGHT SIDE CODE 
void Display::drawRightSideOuter(){
    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(10.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.99,0.7);
    glVertex2f(0.7,0.7);
    glVertex2f(0.7,-0.7);
    glVertex2f(0.99,-0.7);
    glEnd();
// FILL WITH DARK BLUE COLOR 
    glColor3f(0.1, 0.3, 0.8);
    glBegin(GL_QUADS);
    glVertex2f(0.99,0.7);
    glVertex2f(0.7,0.7);
    glVertex2f(0.7,-0.7);
    glVertex2f(0.99,-0.7);
    glEnd();

}

// LEFT SIDE 

void Display::drawLeftSideOuter(){
    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(10.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.99, 0.7);
    glVertex2f(-0.7, 0.7);
    glVertex2f(-0.7, -0.7);
    glVertex2f(-0.99, -0.7);
    glEnd();

    // FILL WITH goldon color
    glColor3f(0.7, 0.5, 0.1);
    glBegin(GL_QUADS);
    glVertex2f(-0.99, 0.7);
    glVertex2f(-0.7, 0.7);
    glVertex2f(-0.7, -0.7);
    glVertex2f(-0.99, -0.7);
    glEnd();
}


// draw inner zameen in dark color
void Display::drawInnerZameen(){
    glColor3f(0.5, 0.4, 0.3);
    glBegin(GL_QUADS);
    glVertex2f(0.7, 0.7);
    glVertex2f(-0.7, 0.7);
    glVertex2f(-0.7, -0.7);
    glVertex2f(0.7, -0.7);
    glEnd();
}

// draw green land
void Display::drawGreenLand(){
    // draw black border on whole
    glColor3f(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.6, 0.6);
    glVertex2f(-0.6, 0.6);
    glVertex2f(-0.6, -0.6);
    glVertex2f(0.6, -0.6);
    glEnd();
    // green land 
    glColor3f(0, 0.8, 0);
    glBegin(GL_QUADS);
    glVertex2f(0.6, 0.6);
    glVertex2f(-0.6, 0.6);
    glVertex2f(-0.6, -0.6);
    glVertex2f(0.6, -0.6);
    glEnd();
}

// draw central line and circle 
void Display::drawCenterCircleLine(){
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

}


// INNER SIDES OF THE GROUND

// right side of the gorund
void Display::rMainGround(){

    // draw the black line on goal
    glColor3f(0, 0, 0);
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.6, 0.45);
    glVertex2f(0.3, 0.45);
    glVertex2f(0.3, -0.45);
    glVertex2f(0.6, -0.45);
    glEnd();

    // create goal 
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex2f(0.6, 0.25);
    glVertex2f(0.5, 0.25);
    glVertex2f(0.5, -0.25);
    glVertex2f(0.6, -0.25);
    glEnd();

    // create the boll on the front of the goal
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(100);  
        float x = 10.0 * cosf(theta);  
        float y = 10.0 * sinf(theta);  
        x = x/ 900.0;
        y = y/900.0;
        glVertex2f(x+0.4, y+0.0);  
    }
    glEnd();

    // draw the half circle on the start of the black line in the right side (rarc) 
    glColor3f(0, 0, 0);
    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
    float x1, y1 , x2, y2, teta;
    float radius = 0.11;
    x1 = 0.3;
    y1 = 0.01;
    for (teta = 0.0; teta<3.13f; teta+=0.1) {
        // float theta = 2.0f * 3.1415926f * float(i) / float(100);  
        // float x = 10.0 * cosf(theta);  
        // float y = 10.0 * sinf(theta);  
        // x = x/ 100.0;
        // y = y/100.0;
        x2 = x1 - sin(teta) * radius;
        y2 = y1 + cos(teta) * radius;
        glVertex2f(x2, y2);  
        // glVertex2f(x+0.3, y+0.2);  
    }
    glEnd();
}
// left side of the gorund
void Display::lMainGround(){
    glColor3f(0, 0, 0);
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.6, 0.45);
    glVertex2f(-0.3, 0.45);
    glVertex2f(-0.3, -0.45);
    glVertex2f(-0.6, -0.45);
    glEnd();

    // create goal 
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex2f(-0.6, 0.25);
    glVertex2f(-0.5, 0.25);
    glVertex2f(-0.5, -0.25);
    glVertex2f(-0.6, -0.25);
    glEnd();

    // create the boll on the front of the goal
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(100);  // Angle for each segment
        float x = 10.0 * cosf(theta);  // Calculate x coordinate
        float y = 10.0 * sinf(theta);  // Calculate y coordinate
        x = x/ 900.0;
        y = y/900.0;
        glVertex2f(x-0.4, y+0.0);  
    }
    glEnd();


    // draw the half circle on the start of the black line in the right side (rarc) 
    glColor3f(0, 0, 0);
    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
    float x1, y1 , x2, y2, teta;
    float radius = 0.11;
    x1 = -0.3;
    y1 = -0.01;
    for (teta = 0.0; teta<3.18f; teta+=0.1) {
        // float theta = 2.0f * 3.1415926f * float(i) / float(100);  
        // float x = 10.0 * cosf(theta);  
        // float y = 10.0 * sinf(theta);  
        // x = x/ 100.0;
        // y = y/100.0;
        x2 = x1 + sin(teta) * radius;
        y2 = y1 + cos(teta) * radius;
        glVertex2f(x2, y2);  
        // glVertex2f(x+0.3, y+0.2);  
    }
    glEnd();
}

// display function
void Display::display(){
    glClear(GL_COLOR_BUFFER_BIT);
    // draw upper side
    drawInnerMainBorder();
    drawLiteBlueOuter();
    drawOuterMainBorder();
    drawLiteBlueInner();
    // draw lower side
    LdrawInnerMainBorder();
    LdrawLiteRedOuter();
    LdrawOuterMainBorder();
    LdrawLiteRedInner();

    // draw right side 
    drawRightSideOuter();


    // left side outer
    drawLeftSideOuter();

    // draw inner zameen
    drawInnerZameen();

    // draw green land
    drawGreenLand();

    // draw centeral line and circle function
    drawCenterCircleLine();


    // inner main ground
    rMainGround();
    lMainGround();
    glFlush();

    
}
#include <iostream>
#include<fstream>
#include<string>
#include<windows.h>
#include <GL/glut.h>


void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    /*glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(0.99f, -0.99f);
    glVertex2f(-0.99f, -0.99f);
    glVertex2f(0.99f, -0.7f);
    glVertex2f(-0.99f, -0.7f);
    glEnd();*/
    glColor3f(0.32f, 0.32f, 0.32f);
    glRectf(0.99f, -0.99f, -0.99f, -0.6f);


    glBegin(GL_QUADS);
    glColor3f(0.18f, 0.30f, 0.30f);
    glVertex2f(0.28f, 0.25f);
    glVertex2f(0.2f, 0.25f);
    glVertex2f(0.2f, 0.65f);
    glVertex2f(0.28f, 0.65f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.3f, 0.00f);
    glVertex2f(0.70f, -0.3f);
    glVertex2f(0.80f, 0.15f);
    glVertex2f(0.88f, -0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.36f, 0.20f, 0.09f);
    glVertex2f(0.75f, -0.3f);
    glVertex2f(0.83f, -0.3f);
    glVertex2f(0.83f, -0.75f);
    glVertex2f(0.75f, -0.75f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.3f, 0.00f);
    glVertex2f(-0.70f, -0.3f);
    glVertex2f(-0.80f, 0.15f);
    glVertex2f(-0.88f, -0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.36f, 0.20f, 0.09f);
    glVertex2f(-0.75f, -0.3f);
    glVertex2f(-0.83f, -0.3f);
    glVertex2f(-0.83f, -0.75f);
    glVertex2f(-0.75f, -0.75f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(0.18f, 0.30f, 0.30f);
    glVertex2f(-0.50f, 0.06f);
    glVertex2f(0.50f, 0.06f);
    glVertex2f(0.0f, 0.50f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.18f, 0.50f, 0.50f);
    glVertex2f(-0.40f, 0.06f);
    glVertex2f(0.40f, 0.06f);
    glVertex2f(0.40f, -0.75);
    glVertex2f(-0.40f, -0.75);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.18f, 0.30f, 0.30f);
    glVertex2f(-0.10f, -0.25f);
    glVertex2f(0.10f, -0.25f);
    glVertex2f(0.10f, -0.75f);
    glVertex2f(-0.10f, -0.75f);
    glEnd();


    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(-0.4f, -0.1f);
    glVertex2f(0.4f, -0.1f);
    glVertex2f(-0.4f, -0.2f);
    glVertex2f(0.4f, -0.2f);
    glVertex2f(-0.4f, -0.3f);
    glVertex2f(0.4f, -0.3f);
    glVertex2f(-0.4f, -0.4f);
    glVertex2f(0.4f, -0.4f);
    glVertex2f(-0.4f, -0.5f);
    glVertex2f(0.4f, -0.5f);
    glVertex2f(-0.4f, -0.6f);
    glVertex2f(0.4f, -0.6f);
    glVertex2f(-0.4f, -0.7f);
    glVertex2f(0.4f, -0.7f);
    glEnd();


    glFlush();
}



/*void reshape(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10, 10, -10, 10);
    glMatrixMode(GL_MODELVIEW);

}*/


void init()
{
    glClearColor(0.19, 0.6, 0.8, 1.0);
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(150, 10);
    glutInitWindowSize(1000, 600);

    glutCreateWindow("My First CG Program");

    glutDisplayFunc(display);
    init();

    glutMainLoop();

    return 0;
}



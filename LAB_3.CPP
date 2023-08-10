#include <iostream>
#include<fstream>
#include<string>
#include<windows.h>
#include <GL/glut.h>


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

    glutDisplayFunc();
    init();

    glutMainLoop();

    return 0;
}



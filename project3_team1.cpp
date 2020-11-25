/*==================================================================================================
 COURSE:                CSC 525/625
 ASSIGNMENT:            Project 3
 DATE:                  12/7/20
 TEAM MEMBERS (CONTRIBUTION PERCENTAGE; SUBTASKS):
 -David Engleman        ()
 -Matthew Glenn         ()
 -Benjamin Pottebaum    ()
 -Niko Robbins          ()
 -Tristan Tyler         (16.67%; created code)
 -Alicia Willard        ()
 DESCRIPTION:           
 NOTES:                 Must use C:\Temp as the location of the files or the root of the file hierarchy.
 FILES:                 project3_team1.cpp, labProject.sln, freeglut.dll, glut.h, freeglut.lib
 IDE/COMPILER:          Microsoft Visual Studio 2019
 INSTRUCTION FOR COMPILATION AND EXECUTION:
    1.        Double click on labProject.sln    to OPEN the project
    2.        Press Ctrl+F7                     to COMPILE
    3.        Press Ctrl+F5                     to EXECUTE
==================================================================================================*/
#include <iostream>
#include <GL/glut.h>

using namespace std;

void mainInit();
void mainDisplayCallback();


int main(int argc, char** argv) {
    glutInit(&argc, argv);              // Initialization
    glutInitWindowSize(800, 600);       // Specify a window size
    glutInitWindowPosition(50, 0);     // Specify a window position
    glutInitDisplayMode(GLUT_DEPTH);
    glutCreateWindow("Project 3 - Team 1");  
    glEnable(GL_DEPTH_TEST);
    mainInit();                           // Specify some settings
    glutDisplayFunc(mainDisplayCallback); 
    glutMainLoop();                     
    return 0;                           
}


void mainInit() {
    glClearColor(1, 1, 1, 0);  // Specify a background color: white
    glOrtho(-200, 200, -200, 200, -200, 200);  // Specify a viewing area
    glMatrixMode(GL_PROJECTION);
}


void mainDisplayCallback() {
    glClear(GL_COLOR_BUFFER_BIT);  
    glClear(GL_DEPTH_BUFFER_BIT);

    glFlush();  // Flush out the buffer contents
}

#pragma once
#include <gl/freeglut.h>

class Render {
public:
	void Init(int argc, char *argv[], int width, int height) {
		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
		glutInitWindowSize(width, height);
		glutCreateWindow("Tracker");
		glutDisplayFunc(redraw);
	}

	void Rendering() {
		glutDisplayFunc(redraw);
		glutReshapeFunc(reshape);
		glutPostRedisplay();
		glutMainLoopEvent();
	}

	static void reshape(int width, int height) {
		GLfloat pmatrix[16];
		glMatrixMode(GL_PROJECTION);
		glLoadMatrixf(pmatrix);
	}

	static void redraw(void) {
		glEnable(GL_DEPTH_TEST);

		glDepthRange(0, 1);
		glClearColor(0.0, 0.0, 0.0, 1.0);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		
		glPushMatrix();
		glTranslatef(0, 0, -100);
		glBegin(GL_TRIANGLES);
		glColor3f(1, 0, 0);
		glVertex3f(-30, -30, 0);
		glColor3f(0, 1, 0);
		glVertex3f(30, -30, 0);
		glColor3f(0, 0, 1);
		glVertex3f(-30, 30, 0);
		glEnd();

		glPopMatrix();
		glutSwapBuffers();

	}

private:

};
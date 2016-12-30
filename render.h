#pragma once
#include <windows.h>
#include <gl/gl.h>
#include <gl/glu.h>
#include <gl/glut.h>

class Render {
public:
	void Init(int argc, char *argv[], int width, int height) {
		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
		glutCreateWindow("My first GLUT program");

		glutDisplayFunc(redraw);

		glMatrixMode(GL_PROJECTION);						//hello
		gluPerspective(45, //view angle
			1.0,	//aspect ratio
			10.0, //near clip
			200.0);//far clip
		glMatrixMode(GL_MODELVIEW);
	}

	static void redraw(void) {
		glClear(GL_COLOR_BUFFER_BIT);

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
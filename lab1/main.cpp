#include "GL\freeglut.h"

int w_width = 400;
int w_height = 400;

void init();
void display();
void drawObject(float a);

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(w_width, w_height);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutCreateWindow("Lab 1");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

void init()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	drawObject(0.5);
	glutSwapBuffers();
}

void drawObject(float a)
{
	for (int i = 0; i < 6; i++)
	{
		glColor3f(1.0f, 0.0f, 0.0f);
		glRotatef(60, 0.0f, 0.0f, 1.0f);

		float h = (a * 1.74) / 2;

		glBegin(GL_POLYGON);
		glColor3f(0.0f, 0.75f, 1.0f);
		glVertex2f(0.0f, 0.0f);
		glColor3f(1.0f, 0.0f, 1.0f);
		glVertex2f(-a / 2, h);
		glColor3f(0.5f, 0.0f, 1.0f);
		glVertex2f(a / 2, h);
		glEnd();
	}
}
#include <GL/glew.h>
#include <GL/freeglut.h>

#define WidthWindow  500
#define HeightWindow 500

double Height = 1000;
double Width  = 1000;

void RayCasting(){
	int Line, Column;
	double x, y, Dx, Dy;

	Dy = Height/HeightWindow;
	Dx = Width/WidthWindow;

	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_POINTS);

		for (Line = 0; Line < HeightWindow; Line ++){
			y = Height/2 - Dy/2 - Line * Dy;

			for (Column = 0; Column < WidthWindow; Column ++){
				x = -Width/2 + Dx/2 + Column * Dx;

				glColor3f(0.2, 0.5, 0.9);
				glVertex2f(Column, Line);
			}
		}

	glEnd();
	glFlush();
}

void Resize(int w, int h){ 
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, WidthWindow, HeightWindow, 0, -1.0, 1.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}


int main(int argc, char **argv){

	glutInit(&argc, argv);
	glutInitContextProfile(GLUT_COMPATIBILITY_PROFILE);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(WidthWindow, HeightWindow);
	glutInitWindowPosition(0, 0);

	glutCreateWindow("Snow Man");
	glutDisplayFunc(RayCasting);
	glutReshapeFunc(Resize);

	glewExperimental = GL_TRUE;
	glewInit();

	glutMainLoop();

	glClearColor(0.8, 0.9, 0.9, 0.0);

	return 0;
}
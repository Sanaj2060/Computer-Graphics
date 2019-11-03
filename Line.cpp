#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
glClear (GL_COLOR_BUFFER_BIT);


glLineWidth(2.5);
glColor3f (1.0, 0.0, 0.0);
glBegin(GL_LINES);
glVertex3f(0.90,0.90,0.0);
glVertex3f(0.90,0.50,0.0);
glEnd();

glColor3f (1.0, 0.0, 0.0);
glPointSize(3.0);
glBegin(GL_POINTS);
glVertex3f(0.5, 0.5, 0.0);
glVertex3f(0.5, -0.5, 0.0);
glVertex3f(-0.5, 0.5, 0.0);
glVertex3f(-0.5, -0.5, 0.0);
glEnd();


glColor3f (0.0, 0.0, 1.0);
glBegin(GL_TRIANGLES);
glVertex3f (0.25, 0.75, 0.0);
glVertex3f (0.75, 0.75, 0.0);
glVertex3f (0.50, 1.00, 0.0);
glEnd();

glFlush ();
}
void init (void)
{
glClearColor (1.0, 1.0, 1.0, 1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("triangles");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}

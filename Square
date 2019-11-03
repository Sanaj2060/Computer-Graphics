#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glBegin(GL_POLYGON);
 
  glColor3f( 1.0, 0.0, 0.0 );     glVertex3f(  2.0, 4.0, 0.0 );      // P1 is red
  glColor3f( 0.0, 1.0, 0.0 );     glVertex3f(  6.0, 4.0, 0.0 );      // P2 is green
  glColor3f( 0.0, 0.0, 1.0 );     glVertex3f(  6.0, 8.0, 0.0 );      // P3 is blue
  glColor3f( 1.0, 0.0, 1.0 );     glVertex3f(  2.0, 8.0, 0.0 );      // P4 is purple
 
glEnd();
glFlush ();
}
void init (void)
{
glClearColor (1.0, 1.0, 1.0, 1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 10.0, 0.0, 10.0, -1.0, 1.0);
}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("SQUARE");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}

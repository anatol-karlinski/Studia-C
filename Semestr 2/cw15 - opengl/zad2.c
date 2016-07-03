#include <GL/glut.h>
#include <math.h>

//============================================
// Definicje kolorow:

#define CZARN 0.0, 0.0, 0.0
#define CZERW 1.0, 0.0, 0.0
#define ZIELO 0.0, 1.0, 0.0
#define ZOLTY 1.0, 1.0, 0.0
#define NIEBI 0.0, 0.0, 1.0
#define MAGEN 1.0, 0.0, 1.0
#define CYJAN 0.0, 1.0, 1.0
#define BIALY 1.0, 1.0, 1.0

#define POMAR 1.0, 0.7, 0.0


//============================================
// Geometria obrazka:

void geom(int w, int h) {
  glMatrixMode(GL_PROJECTION); glLoadIdentity();
  //glLoadIdentity();
  glOrtho(-3,3 , -3,3 , -3,3);
  //gluLookAt(0.1,0.9,1.0 ,0,0,0 , 0,1,0);
  gluLookAt(0.4,0.4,1, 0,0,0, 0,1,0);
  //glMatrixMode(GL_MODELVIEW);
}

//============================================
// Scena:

#define M_PI 3.14159265358979323846
double przyrost = M_PI/20;

void  odcinek_okregu(double prom, double kat0, double kat1) {
  for (double kat=kat0; kat<=kat1; kat+=przyrost)
    glVertex3d(prom*cos(kat), prom*sin(kat), 0);
}

void kula(double x, double y, double z) {
  glPushMatrix();  glTranslated(x,y,z);
  glutSolidSphere(0.1,60,20);
  glPopMatrix();
}

void wyswietl(void) {
  glClear(GL_COLOR_BUFFER_BIT);
  glLoadIdentity();

  glPointSize(50);

  glColor3d(CZARN); kula(-1,-1,-1);
  glColor3d(CZERW); kula( 1,-1,-1);
  glColor3d(ZIELO); kula(-1, 1,-1);
  glColor3d(POMAR); kula( 1, 1,-1);
  glColor3d(NIEBI); kula(-1,-1, 1);
  glColor3d(MAGEN); kula( 1,-1, 1);
  glColor3d(CYJAN); kula(-1, 1, 1);
  glColor3d(BIALY); kula( 1, 1, 1);

  glColor3d(CZARN);
  glBegin(GL_LINE_LOOP);
    glVertex3d(-1,-1,-1);
    glVertex3d( 1,-1,-1);
    glVertex3d( 1, 1,-1);
    glVertex3d(-1, 1,-1);
    glVertex3d(-1, 1, 1);
    glVertex3d( 1, 1, 1);
    glVertex3d( 1,-1, 1);
    glVertex3d(-1,-1, 1);
    glVertex3d(-1,-1,-1);
    glVertex3d(-1, 1,-1);
  glEnd();
  glBegin(GL_LINES);
    glVertex3d(-1,-1, 1); glVertex3d(-1, 1, 1);
    glVertex3d( 1, 1, 1); glVertex3d( 1, 1,-1);
    glVertex3d( 1,-1, 1); glVertex3d( 1,-1,-1);
  glEnd();

  glFlush();
}

double kat_obrotu = M_PI/360;

void  timer(int v) {
  static double alfa = 0;
  alfa += kat_obrotu;
  if (alfa >= 2*M_PI)  alfa -= 2*M_PI;
  glMatrixMode(GL_MODELVIEW); glLoadIdentity();
  gluLookAt(20*cos(alfa), 7, 20*sin(alfa),  0,0,0,  0,1,0);
  glutPostRedisplay();
  glutTimerFunc(15, timer, v);
}

//============================================

int main(int ile_arg, char* arg[]) {
  glutInit(&ile_arg, arg);
  glutInitWindowSize(400, 300);
  glutInitWindowPosition(20, 10);
  glutCreateWindow(arg[0]);
  glClearColor(ZIELO, 0.0);
  glutReshapeFunc(geom);
  glutDisplayFunc(wyswietl);
  
  glutTimerFunc(15, timer, 0);
  
  glutMainLoop();
  return 0;
}

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
#define M_PI acos(-1.0)
#define R 8

//============================================
// Geometria obrazka:

void geom(int w, int h) {
  // Granice przedstawionego fragmentu przestrzeni:
  //   glOrtho(lewa, prawa, dolna, gorna, przednia, tylna);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glOrtho(-20, 20, -15, 15, -4, 4);
  glMatrixMode(GL_MODELVIEW);
}

//============================================
// Scena:

void wyswietl(void) {
  glClear(GL_COLOR_BUFFER_BIT);
  glLoadIdentity();

  //----------------
  // Odcinki:
  
  glColor3d(BIALY);            // kolor
  glLineWidth(5);              // grubosc linii

  glPushMatrix();              // pamietanie wspolrzednych oraz:
  glTranslated(0.0, 0.0, 0);  // przesuniecie

  glBegin(GL_LINE_LOOP);          // odcinki parami
  int i,x,y;
  int n = 8;
  for(i=0;i<n;i++)
  {
	x = R * cos((M_PI/2 + 2*M_PI*i) / n); 
	y = R * sin((M_PI/2 + 2*M_PI*i) / n);
	glVertex3d(x, y, 0); 

  }
  glEnd();

  glPopMatrix();               // odwolanie przesuniecia


  glFlush();
}

//============================================

int main(int ile_arg, char* arg[]) {
  glutInit(&ile_arg, arg);
  glutInitWindowSize(400, 300);
  glutInitWindowPosition(20, 10);
  glutCreateWindow(arg[0]);
  glClearColor(CZARN, 0.0);
  glutReshapeFunc(geom);
  glutDisplayFunc(wyswietl);
  glutMainLoop();
  return 0;
}

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>


void display1()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
// the house////////////////////////////////
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,0.2);
    glVertex2f(-90,-130);
    glVertex2f(90,-130);
    glVertex2f(90,60);
    glVertex2f(-90,60);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.3f,0.0f,0.1f);
    glVertex2f(-30,-130);
    glVertex2f(30,-130);
    glVertex2f(30,-50);
    glVertex2f(-30,-50);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-20,-100);
    glVertex2f(-22,-100);

    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3f,0.0f,0.1f);
    glVertex2f(90,60);
    glVertex2f(90,120);
    glVertex2f(50,120);
    glVertex2f(50,90);

    glEnd();


// the river
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex2f(250,-250);
    glVertex2f(-250,-250);
    glVertex2f(-250,-140);
    glVertex2f(-200,-150);
    glVertex2f(-150,-140);
    glVertex2f(-100,-150);
    glVertex2f(-50,-140);
    glVertex2f(0,-150);
    glVertex2f(50,-140);
    glVertex2f(100,-150);
    glVertex2f(150,-140);
    glVertex2f(200,-150);
    glVertex2f(250,-140);
    glVertex2f(250,-250);

    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.8f,0.1f);
    glVertex2f(-210,-30);
    glVertex2f(-180,-30);
    glVertex2f(-180,50);
    glVertex2f(-195,40);
    glVertex2f(-210,50);
    glEnd();
// the green ground////////////////////
    glBegin(GL_POLYGON);
    glColor3f(0.6f,0.8f,0.1f);
    glVertex2f(250,-140);
    glVertex2f(250,30);
    glVertex2f(90,30);
    glVertex2f(90,-140);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.6f,0.8f,0.1f);
    glVertex2f(250,-140);
    glVertex2f(150,-140);
    glVertex2f(200,-150);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.6f,0.8f,0.1f);
    glVertex2f(150,-140);
    glVertex2f(50,-140);
    glVertex2f(100,-150);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.6f,0.8f,0.1f);
    glVertex2f(50,-140);
    glVertex2f(-50,-140);
    glVertex2f(0,-150);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.6f,0.8f,0.1f);
    glVertex2f(-50,-140);
    glVertex2f(-150,-140);
    glVertex2f(-100,-150);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.6f,0.8f,0.1f);
    glVertex2f(-150,-140);
    glVertex2f(-250,-140);
    glVertex2f(-200,-150);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6f,0.8f,0.1f);
    glVertex2f(-90,-140);
    glVertex2f(-90,-130);
    glVertex2f(90,-130);
    glVertex2f(90,-140);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6f,0.8f,0.1f);
    glVertex2f(-250,-140);
    glVertex2f(-250,30);
    glVertex2f(-90,30);
    glVertex2f(-90,-140);
    glEnd();
//the triangle of the house
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,0.5f,0.5f);
    glVertex2f(90,60);
    glColor3f(0.5f,0.5f,0.5f);
    glVertex2f(-90,60);
    glColor3f(0.0f,0.0f,0.3f);
    glVertex2f(0,150);
    glEnd();

// rotated windows
    glRotatef(40.0,0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.6f,0.5f,0.5f);
    glVertex2f(-80,40);
    glVertex2f(-80,-10);
    glVertex2f(-40,-10);
    glVertex2f(-40,40);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.00,0.00,0.00);
    glVertex2f(-60,40);
    glVertex2f(-60,-10);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.00,0.00,0.00);
    glVertex2f(-80,15);
    glVertex2f(-40,15);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6f,0.5f,0.5f);
    glVertex2f(80,40);
    glVertex2f(80,-10);
    glVertex2f(40,-10);
    glVertex2f(40,40);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.00,0.00,0.00);
    glVertex2f(60,40);
    glVertex2f(60,-10);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.00,0.00,0.00);
    glVertex2f(80,15);
    glVertex2f(40,15);
    glEnd();
    glFlush();


    }


void display();
void reshape (int w, int h);
void timer(int);
void init()
{
    glClearColor(0.60,0.93,1.00,0.1);
}

int main(int argc, char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition (200 , 0);
    glutInitWindowSize (1200 , 800);

    glutCreateWindow("rawan ibrahim 20100779 , merna zaher 20109457");

    glutDisplayFunc (display) ;

    glutReshapeFunc (reshape);
    glutTimerFunc(0,timer,0);
    init();

    glutMainLoop();
}

float step=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    display1();
    glLoadIdentity();
    glTranslated(step,0,0);
    glLineWidth(5.0);//to make the line width thicker or thiner
    glTranslated(-250,200,0);//to begin from the top
    glBegin(GL_POLYGON);
    float radius =16.0;
    float angle =0.0;
    int i;
    glColor3f(1.00,1.00,0.00);//to change the circle color
    for(i=0;i<360;i++)
    {
        angle=i*3.14/180;
        glVertex2f(0.70*radius*cos(angle),radius*sin(angle));
    }
    glEnd();
    //=========================================================================//
//lines of the sun//
    glBegin(GL_LINES);
    glColor3f(1.00,1.00,0.00);
/////////////////////////////

    glVertex2f(0,20);
    glVertex2f(0,29);

    glVertex2f(0,-20);
    glVertex2f(0,-29);

//////////////////////////////////////////
    glVertex2f(15,0);
    glVertex2f(23,0);

    glVertex2f(-15,0);
    glVertex2f(-23,0);
///////////////////////////////////////////
    glVertex2f(10,12);
    glVertex2f(23,20);

    glVertex2f(-10,12);
    glVertex2f(-23,20);

////////////////////////////////
    glVertex2f(10,-12);
    glVertex2f(23,-20);

    glVertex2f(-10,-12);
    glVertex2f(-23,-20);
    glEnd();

/////////////////////////////////////////the boat
    glBegin(GL_POLYGON);
    glColor3f(0.7,0,0);

    glVertex2f(58,-390);
    glVertex2f(-58,-390);
    glVertex2f(-40,-440);
    glVertex2f(40,-440);
    glEnd();
/////////////////////////////////////the sail
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.3,0);
    glVertex2f(58,-390);
    glVertex2f(-20,-390);
    glVertex2f(-20,-280);
    glEnd();
    glFlush();


}
void reshape (int w, int h)
{
    glViewport(0,0,(GLsizei) w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();
    gluOrtho2D(-250,250,-250,250);
    glMatrixMode(GL_MODELVIEW);

}

void timer(int)
{
    glutPostRedisplay();

    glutTimerFunc(10000/60,timer,0);

	if(3+step<1000){//may be the speed
        step+=2.776;//0.15
	}

}

#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>

#include "queue.h"

Queue::Queue()
{
	force=0;
	angle=0;
	position[0]=0;
	position[1]=0;
	quadric=gluNewQuadric();
	gluQuadricDrawStyle(quadric, GLU_FILL);
}

void Queue::affichage(float force)
{
	static GLfloat marron[3]={0.7, 0.4, 0}, noir[3]={0,0,0}, blanc[3]={1,1,1};
	glPushMatrix();
	glRotatef(45, 0, 1, 0);
	glTranslatef(0, 0, force);
	glTranslatef(0, -1, -2);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, blanc);
	gluCylinder(quadric, 0.1, 0.09, 0.3, 32, 1);
	glTranslatef(0, 0, -5);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, marron);
	gluCylinder(quadric, 0.2, 0.1, 5, 32, 1);
	glTranslatef(0, 0, -5);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, noir);
	gluCylinder(quadric, 0.3, 0.2, 5, 32, 1);
	glPopMatrix();
}

void Queue::setForce(float f)
{
	force=f;
}

float Queue::getForce()
{
	return(force);
}
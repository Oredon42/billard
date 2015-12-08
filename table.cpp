#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#include <cmath>
#include <iostream>
#include "table.h"
#include "tapis.h"
#include "tapis2.h"
#include "bois.h"
#include "metal.h"
#include "trous.h"

using namespace std;
Table::Table()
{
	freinage=0.2;
}

void Table::setFreinage(float f)
{
	freinage=f;
}

float Table::getFreinage()
{
	return(freinage);
}

void Table::affichage()
{
	static GLfloat mat_specular[]={1.0, 1.0, 1.0, 1.0}, mat_shininess[]={80.0}, vert[3]={0, 0.4, 0}, marron[3]={0.2,0,0}, gris[3]={0.4,0.4,0.4}, noir[3]={0,0,0}, vert2[3]={0, 0.3, 0};
	glMaterialfv(GL_FRONT, GL_DIFFUSE, noir);
	creer_trous();
	glMaterialfv(GL_FRONT, GL_DIFFUSE, vert);
	creer_tapis();
	glMaterialfv(GL_FRONT, GL_DIFFUSE, vert2);
	creer_tapis2();
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, marron);
	creer_bois();
    glMaterialfv(GL_FRONT, GL_DIFFUSE, gris);
    creer_metal();
}
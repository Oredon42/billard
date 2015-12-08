#include <iostream>
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#include <cmath>
#include "boule.h"
#include "queue.h"
#include "table.h"

using namespace std;

#define DECALAGE 50
#define LARGEUR_FENETRE 1200
#define HAUTEUR_FENETRE 800


float MatSpec[4] = {1.0f, 1.0f, 1.0f, 1.0f};
float MatDif[4] = {1.0f, 1.0f, 1.0f, 1.0f};
float Light1Dif[4] = {1.0f, 1.0f, 1.0f, 1.0f};
float Light1Spec[4] = {2.0f, 1.0f, 1.0f, 1.0f};
float Light1Amb[4] = {0.5f, 0.5f, 0.5f, 1.0f};

Boule Boules[NB_BOULES];
Queue Queue1;
Table Table1;
float angleX=0., angleY=0., incrementAngleX=0., incrementAngleY=0;
bool tirer=false;
int vue=false;

void Reshape(int width, int height)
{    
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45, float(width)/float(height), 0.1, 100);
}

void myinit()
{
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, Light1Dif);
    glLightfv(GL_LIGHT0, GL_SPECULAR, Light1Spec);
    glLightfv(GL_LIGHT0, GL_AMBIENT, Light1Amb);
    glLighti(GL_LIGHT0, GL_SPOT_CUTOFF, 30);

    Boules[0].setPosition(0.,-15.);
    Boules[1].setPosition(0.,0.);
    Boules[2].setPosition(-1.4,1.4);
    Boules[3].setPosition(1.4,1.4);
    Boules[4].setPosition(0.,2.8);
    Boules[5].setPosition(2.9,2.8);
    Boules[6].setPosition(-2.9,2.8);
    Boules[7].setPosition(-1.4,4.2);
    Boules[8].setPosition(1.4,4.2);
    Boules[9].setPosition(-4.4,4.2);
    Boules[10].setPosition(4.4,4.2);
    Boules[11].setPosition(0.,5.6);
    Boules[12].setPosition(-2.9,5.6);
    Boules[13].setPosition(2.9,5.6);
    Boules[14].setPosition(-5.9,5.6);
    Boules[15].setPosition(5.9,5.6);

    Boules[0].setCouleur(1,1,1);
    Boules[1].setCouleur(1,0,0);
    Boules[2].setCouleur(0,1,0);
    Boules[3].setCouleur(0,0,1);
    Boules[4].setCouleur(0,0,0);
    Boules[5].setCouleur(1,0,1);
    Boules[6].setCouleur(1,1,0);
    Boules[7].setCouleur(0,1,1);
    Boules[8].setCouleur(0.5,0,0);
    Boules[9].setCouleur(0,0.5,0);
    Boules[10].setCouleur(0,0,0.5);
    Boules[11].setCouleur(0.5,0.5,0);
    Boules[12].setCouleur(0.5,0,0.5);
    Boules[13].setCouleur(0,0.5,0.5);
    Boules[14].setCouleur(0.75, 0, 0);
    Boules[15].setCouleur(0, 0.75, 0);
}

void display()
{
    //  Condition de fin
    if(Boule::nb_absentes == 15)
        exit(EXIT_SUCCESS);
    
    static bool bouge=false;
    static GLfloat mat_specular[]={1.0, 1.0, 1.0, 1.0};
    static GLfloat mat_shininess[]={80.0};
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    if(bouge || tirer)
    {
        gluLookAt(0,60,0,0,0,0,1,0,0);
        if(bouge)
        {
            bouge=false;
            for(int i=0; i<NB_BOULES; ++i)
            {
                if(Boules[i].getPresente() && Boules[i].getVitesse()>0.2)
                {
                    Boules[i].bouger(Boules, i, Table1.getFreinage());
                    bouge=true;
                }
            }
        }
        else
        {
            Boules[0].setVitesse(Queue1.getForce());
            Boules[0].setDirection(cos(angleX/360.*2*M_PI+M_PI/2), sin(angleX/360.*2*M_PI+M_PI/2));
            Boules[0].bouger(Boules, 0, Table1.getFreinage());
            tirer=false;
            bouge=true;
            Queue1.setForce(angleY*30);
        }
        incrementAngleY=0;
        angleY=0;
    }
    else
    {
        if(!vue)
            gluLookAt(Boules[0].getPosX()-10,5,Boules[0].getPosZ()-10,Boules[0].getPosX(),0,Boules[0].getPosZ(),0,1,0);
        else
            gluLookAt(0,60,0,0,0,0,1,0,0);
        glTranslatef(Boules[0].getPosX(), 0, Boules[0].getPosZ());

        /*                  */
        /*  Dessin queue    */
        /*                  */
        Queue1.affichage(angleY);
        glRotatef(angleX+45, 0, 1, 0);
        glTranslatef(-Boules[0].getPosX(), 0, -Boules[0].getPosZ());
    }
    float Light1Pos[4] = {0.0f, 90.0f, 0.0f, 1.0f};
    float Light1Dir[3] = {0.0f, -1.0f, 0.0f}; 
    glLightfv(GL_LIGHT0,GL_POSITION,Light1Pos);
    glLightfv(GL_LIGHT0, GL_SPOT_DIRECTION, Light1Dir);

    /*                  */
    /*  Dessin table    */
    /*                  */
    Table1.affichage();

    /*                  */
    /*  Dessin Boules   */
    /*                  */
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
    for (int i=0; i<NB_BOULES; ++i)
    	Boules[i].affichage(Light1Dir);
    glutSwapBuffers();
    glutPostRedisplay();
}

void key(int key,int x,int y)
{
        switch(key)
        {
            case 'v':
            vue=true;
            break;
            case 32:
            tirer=true;
            break;
            case GLUT_KEY_RIGHT:
            incrementAngleX+=0.1;
            angleX+=incrementAngleX;
            break;
            case GLUT_KEY_LEFT:
            incrementAngleX+=0.1;
            angleX-=incrementAngleX;
            break;
            case GLUT_KEY_UP:
            if(angleY<0)
            {
                incrementAngleY+=0.05;
                angleY+=incrementAngleY;
                Queue1.setForce(angleY*30);
            }
            break;
            case GLUT_KEY_DOWN:
            if(angleY>-3)
            {
                incrementAngleY+=0.05;
                angleY-=incrementAngleY;
             Queue1.setForce(-angleY*30);
            }
            break;
            case 27:
            exit(EXIT_SUCCESS);
            break;
            default:
            break;
        }
    glutPostRedisplay();
}

void keyUp(int key, int x, int y)
{
    if(key==GLUT_KEY_LEFT || key==GLUT_KEY_RIGHT)
        incrementAngleX=0;
    else
    {
        if(key==GLUT_KEY_DOWN || key==GLUT_KEY_UP)
            incrementAngleY=0;
        else
        {
            if(key=='v')
                vue=false;
        }
    }
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(LARGEUR_FENETRE, HAUTEUR_FENETRE);
    glutInitWindowPosition(50, 50);
	glutCreateWindow("Billard");
	myinit();
    glutSpecialFunc(key);
    glutSpecialUpFunc(keyUp);
    glutReshapeFunc(Reshape);
	glutDisplayFunc(display);
	glutMainLoop();
	return(0);
}
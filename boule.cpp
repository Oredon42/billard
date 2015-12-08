#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#include <cmath>
#include <iostream>
#include "boule.h"

using namespace std;

int Boule::nb_absentes=0;

Boule::Boule()
{
	m_presente=true;
	m_poids=1.;
	m_taille=1;
	m_vitesse=0.;
	m_position[0]=0.;
	m_position[1]=0.;
	m_direction[0]=0.;
	m_direction[1]=0.;
	m_couleur[0]=0.;
	m_couleur[1]=0.;
	m_couleur[2]=0.;
    m_quadric=gluNewQuadric();
}
bool Boule::collision(Boule (&Boules)[NB_BOULES], int indice, float freinage)
{
	int indices[NB_BOULES];
    int indice_actuel=0;
	float angles[NB_BOULES];
	int vec[NB_BOULES][2];
	float vec2[2];
    float norme=sqrt(getDirX()*getDirX()+getDirZ()*getDirZ());
	for (int i=0; i<NB_BOULES; ++i)
	{
        float distance_boules=sqrt((getPosX()-Boules[i].getPosX())*(getPosX()-Boules[i].getPosX())+(getPosZ()-Boules[i].getPosZ())*(getPosZ()-Boules[i].getPosZ()));
        float taille_boules=(Boules[i].getTaille()+getTaille());
		if(i!=indice && Boules[i].getPresente() && distance_boules<taille_boules)
		{
			vec2[0]=Boules[i].getPosX()-getPosX();
			vec2[1]=Boules[i].getPosZ()-getPosZ();
			float angle=acos((getDirX()*vec2[0]+getDirZ()*vec2[1])*(1/(norme*sqrt(vec2[0]*vec2[0]+vec2[1]*vec2[1]))));
			if(angle<(M_PI*0.5f))
			{
                indices[indice_actuel++]=i;
				angles[i]=angle;
				vec[i][0]=vec2[0];
				vec[i][1]=vec2[1];
                float inertie=(getPoids()*(1/Boules[i].getPoids())*getVitesse()-angles[i]*(1/M_PI)*getVitesse())*(1/indice_actuel);
                Boules[i].setVitesse(inertie);
                float x=(getDirX()+vec[i][0]), z=(getDirZ()+vec[i][1]), longueur=sqrt(x*x+z*z);
                Boules[i].setDirection((!(int)(longueur))?0.f:x*(1/longueur), (!(int)(longueur))?0.f:z*(1/longueur));
                x=(getDirX()-vec[i][0]), z=(getDirZ()-vec[i][1]), longueur=sqrt(x*x+z*z);
                float coef=-(taille_boules-distance_boules)*(1/((getTaille()+Boules[i].getTaille())*0.5));
                setPosition(getDirX()*coef+getPosX(), getDirZ()*coef+getPosZ());
                setDirection((!(int)(longueur))?0.f:x*(1/longueur), (!(int)(longueur))?0.f:z*(1/longueur));
                setVitesse(getVitesse()-Boules[i].getVitesse());
                Boules[i].bouger(Boules, i, freinage);
			}
		}
	}
	/*for (int i=0; i<indice_actuel; ++i)
	{
		int ind=indices[i];
		float inertie=(getPoids()/Boules[ind].getPoids()*getVitesse()-angles[ind]/M_PI*getVitesse())/indice_actuel;
		Boules[ind].setVitesse(inertie);
		float x=(getDirX()+vec[ind][0]), z=(getDirZ()+vec[ind][1]), longueur=sqrt(x*x+z*z);
		Boules[ind].setDirection((!(int)(longueur))?0.f:x*(1/longueur), (!(int)(longueur))?0.f:z*(1/longueur));
		x=(getDirX()-vec[ind][0]), z=(getDirZ()-vec[ind][1]), longueur=sqrt(x*x+z*z);
		setDirection((!(int)(longueur))?0.f:x*(1/longueur), (!(int)(longueur))?0.f:z*(1/longueur));
		setVitesse(getVitesse()-Boules[ind].getVitesse());
		Boules[ind].bouger(Boules, ind, freinage);
	}*/
	return(false);
}

void Boule::bouger(Boule (&Boules)[NB_BOULES], int indice, float freinage)
{
	if(getPosX()>20 || getPosX()<-22)
	{
		if(getPosZ()<2 && getPosZ()>-2)
		{
			if(indice==0)
			{
				setVitesse(0);
				setPosition(0.,-15.);
			}
			else
			{
				setPresente(false);
				++nb_absentes;
			}
			return;
		}
		if(getPosZ()>36 || getPosZ()<-36)
		{
			if(indice==0)
			{
				setVitesse(0);
				setPosition(0.,-15.);
			}
			else
			{
				setPresente(false);
				++nb_absentes;
			}
			return;
		}
		setDirection(-getDirX(), getDirZ());
	}
	else
	{
		if(getPosZ()>40 || getPosZ()<-40)
		{
			if(getPosX()>16 || getPosX()<-16)
			{
				if(indice==0)
				{
					setVitesse(0);
					setPosition(0.,-15.);
				}
				else
				{
					setPresente(false);
					++nb_absentes;
				}
				return;
			}
			setDirection(getDirX(), -getDirZ());
		}
	}
	collision(Boules, indice, freinage);
    setPosition(getPosX()+getDirX()*0.01*getVitesse(), getPosZ()+getDirZ()*0.01*getVitesse());
	if(getVitesse()>=freinage)
		decrementeVitesse(freinage);
	else
		setVitesse(0);
}

bool Boule::getPresente()
{
	return(m_presente);
}

void Boule::setPresente(bool presente)
{
	m_presente=presente;
}

float Boule::getPoids()
{
	return m_poids;
}

void Boule::setPoids(float poids)
{
	m_poids=poids;
}

float Boule::getTaille()
{
	return m_taille;
}

void Boule::setTaille(float taille)
{
	m_taille=taille;
}

float Boule::getVitesse()
{
	return m_vitesse;
}

void Boule::setVitesse(float vitesse)
{
	m_vitesse=vitesse;
}

void Boule::decrementeVitesse(float freinage)
{
	if(getVitesse()>freinage)
	m_vitesse-=freinage;
}

void Boule::setPosition(float x, float z)
{
	m_position[0]=x;
	m_position[1]=z;
}

float Boule::getPosX()
{
	return m_position[0];
}

float Boule::getPosZ()
{
	return m_position[1];
}

void Boule::setDirection(float x, float z)
{
	m_direction[0]=x;
	m_direction[1]=z;
}

float Boule::getDirX()
{
	return(m_direction[0]);
}

float Boule::getDirZ()
{
	return(m_direction[1]);
}

void Boule::setCouleur(float r, float g, float b)
{
	m_couleur[0]=r;
	m_couleur[1]=g;
	m_couleur[2]=b;
}

float* Boule::getCouleur()
{
	return(m_couleur);
}

GLUquadric* Boule::getQuadric()
{
    return m_quadric;
}

void Boule::affichage(float posLum[3])
{
	if(getPresente())
	{
		static float t=(-1.9/(posLum[1]-1));
		glPushMatrix();
		glMaterialfv(GL_FRONT, GL_DIFFUSE, getCouleur());
		glTranslatef(getPosX(), -1, getPosZ());
		glutSolidSphere(getTaille(), 128, 64);
		glTranslatef((getPosX()+t*(-posLum[0]-getPosX()))*0.4, -0.9, (getPosZ()+t*(-posLum[2]-getPosZ()))*0.4);
		glRotatef(90,1,0,0);
		gluDisk(getQuadric(), 0, getTaille(), 20, 1);
		glPopMatrix();
	}
}
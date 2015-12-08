#ifndef DEF_BOULE
#define DEF_BOULE

#define NB_BOULES 16
class Boule
{
	private:
		bool m_presente;
		float m_poids;
		float m_taille;
		float m_vitesse;
		float m_position[2];
		float m_direction[2];
		float m_couleur[3];
        GLUquadric* m_quadric;

	public:
		static int nb_absentes;
		Boule();
		bool collision(Boule (&Boules)[NB_BOULES], int indice, float freinage);
		void bouger(Boule (&Boules)[NB_BOULES], int indice, float freinage);
		bool getPresente();
		void setPresente(bool presente);
		float getPoids();
		void setPoids(float poids);
		float getTaille();
		void setTaille(float taille);
		float getVitesse();
		void setVitesse(float vitesse);
		void decrementeVitesse(float freinage);
		void setPosition(float x, float z);
		float getPosX();
		float getPosZ();
		void setDirection(float x, float z);
		float getDirX();
		float getDirZ();
		void setCouleur(float r, float g, float b);
		float* getCouleur();
        GLUquadric* getQuadric();
		void affichage(float posLum[3]);
};

#endif
#ifndef DEF_QUEUE
#define DEF_QUEUE

class Queue
{
	private:
		float force;
		float angle;
		float position[2];
		GLUquadric* quadric;

	public:
		Queue();
		float tirer();
		void affichage(float force);
		void setForce(float f);
		float getForce();
};
#endif
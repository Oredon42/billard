#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>

void creer_tapis2()
{
	glBegin(GL_QUADS);

	glTexCoord2i(0,0);glVertex3f(21.000000, -0.000007, -1.999998);
	glTexCoord2i(1,0);glVertex3f(21.000004, -0.000007, -38.000000);
	glTexCoord2i(1,1);glVertex3f(21.000002, -2.000007, -38.000000);
	glTexCoord2i(0,1);glVertex3f(21.000000, -2.000007, -1.998524);

	glTexCoord2i(0,0);glVertex3f(-19.999996, 0.000007, -41.000000);
	glTexCoord2i(1,0);glVertex3f(-19.999998, -1.999993, -41.000000);
	glTexCoord2i(1,1);glVertex3f(18.000002, -2.000005, -41.000000);
	glTexCoord2i(0,1);glVertex3f(18.000004, -0.000005, -41.000000);

	glTexCoord2i(0,0);glVertex3f(-23.000000, -1.999992, -2.000002);
	glTexCoord2i(1,0);glVertex3f(-22.999998, -1.999992, -38.000000);
	glTexCoord2i(1,1);glVertex3f(-22.999996, 0.000008, -38.000000);
	glTexCoord2i(0,1);glVertex3f(-23.000000, 0.000008, -2.000002);

	glTexCoord2i(0,0);glVertex3f(-23.000000, -1.999992, 2.001424);
	glTexCoord2i(1,0);glVertex3f(-23.000000, 0.000008, 2.001424);
	glTexCoord2i(1,1);glVertex3f(-23.000004, 0.000008, 37.967842);
	glTexCoord2i(0,1);glVertex3f(-23.000004, -1.999992, 37.967842);

	glTexCoord2i(0,0);glVertex3f(17.999996, -2.000005, 41.000000);
	glTexCoord2i(1,0);glVertex3f(-20.000004, -1.999993, 41.000000);
	glTexCoord2i(1,1);glVertex3f(-20.000004, 0.000007, 41.000000);
	glTexCoord2i(0,1);glVertex3f(17.999996, -0.000005, 41.000000);

	glTexCoord2i(0,0);glVertex3f(20.999996, -0.000007, 37.999695);
	glTexCoord2i(1,0);glVertex3f(21.000000, -0.000007, 2.000002);
	glTexCoord2i(1,1);glVertex3f(21.000000, -2.000007, 1.999396);
	glTexCoord2i(0,1);glVertex3f(20.999996, -2.000007, 37.999695);

	glTexCoord2i(0,0);glVertex3f(-24.603624, 0.000008, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-23.000000, 0.000008, 2.001424);
	glTexCoord2i(1,1);glVertex3f(-23.000000, -1.999992, 2.001424);
	glTexCoord2i(0,1);glVertex3f(-24.603624, -1.999992, 2.000680);

	glTexCoord2i(0,0);glVertex3f(-24.603624, 0.000008, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-24.603624, -1.999992, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-23.000000, -1.999992, -2.000002);
	glTexCoord2i(0,1);glVertex3f(-23.000000, 0.000008, -2.000002);

	glTexCoord2i(0,0);glVertex3f(-19.999996, 0.000007, -41.000000);
	glTexCoord2i(1,0);glVertex3f(-21.652908, 0.000008, -42.848640);
	glTexCoord2i(1,1);glVertex3f(-21.652908, -1.999992, -42.848640);
	glTexCoord2i(0,1);glVertex3f(-19.999998, -1.999993, -41.000000);

	glTexCoord2i(0,0);glVertex3f(-24.603621, 0.000008, -39.377453);
	glTexCoord2i(1,0);glVertex3f(-22.999996, 0.000008, -38.000000);
	glTexCoord2i(1,1);glVertex3f(-22.999998, -1.999992, -38.000000);
	glTexCoord2i(0,1);glVertex3f(-24.603622, -1.999992, -39.377453);

	glTexCoord2i(0,0);glVertex3f(-24.603628, 0.000008, 39.346527);
	glTexCoord2i(1,0);glVertex3f(-24.603628, -1.999992, 39.346527);
	glTexCoord2i(1,1);glVertex3f(-23.000004, -1.999992, 37.967842);
	glTexCoord2i(0,1);glVertex3f(-23.000004, 0.000008, 37.967842);

	glTexCoord2i(0,0);glVertex3f(-21.652916, 0.000008, 42.849869);
	glTexCoord2i(1,0);glVertex3f(-20.000004, 0.000007, 41.000000);
	glTexCoord2i(1,1);glVertex3f(-20.000004, -1.999993, 41.000000);
	glTexCoord2i(0,1);glVertex3f(-21.652916, -1.999992, 42.849869);

	glTexCoord2i(0,0);glVertex3f(19.652908, -0.000007, 42.849869);
	glTexCoord2i(1,0);glVertex3f(19.652908, -2.000007, 42.849869);
	glTexCoord2i(1,1);glVertex3f(17.999996, -2.000005, 41.000000);
	glTexCoord2i(0,1);glVertex3f(17.999996, -0.000005, 41.000000);

	glTexCoord2i(0,0);glVertex3f(22.603621, -0.000008, 39.378380);
	glTexCoord2i(1,0);glVertex3f(20.999996, -0.000007, 37.999695);
	glTexCoord2i(1,1);glVertex3f(20.999996, -2.000007, 37.999695);
	glTexCoord2i(0,1);glVertex3f(22.603621, -2.000008, 39.378380);

	glTexCoord2i(0,0);glVertex3f(22.603624, -0.000008, -2.000494);
	glTexCoord2i(1,0);glVertex3f(21.000000, -0.000007, -1.999998);
	glTexCoord2i(1,1);glVertex3f(21.000000, -2.000007, -1.998524);
	glTexCoord2i(0,1);glVertex3f(22.603624, -2.000008, -2.000494);

	glTexCoord2i(0,0);glVertex3f(22.603624, -0.000008, 1.999180);
	glTexCoord2i(1,0);glVertex3f(22.603624, -2.000008, 1.999180);
	glTexCoord2i(1,1);glVertex3f(21.000000, -2.000007, 1.999396);
	glTexCoord2i(0,1);glVertex3f(21.000000, -0.000007, 2.000002);

	glTexCoord2i(0,0);glVertex3f(21.000004, -0.000007, -38.000000);
	glTexCoord2i(1,0);glVertex3f(22.603628, -0.000008, -39.377453);
	glTexCoord2i(1,1);glVertex3f(22.603626, -2.000008, -39.377453);
	glTexCoord2i(0,1);glVertex3f(21.000002, -2.000007, -38.000000);

	glTexCoord2i(0,0);glVertex3f(18.000002, -2.000005, -41.000000);
	glTexCoord2i(1,0);glVertex3f(19.652916, -2.000007, -42.848640);
	glTexCoord2i(1,1);glVertex3f(19.652916, -0.000007, -42.848640);
	glTexCoord2i(0,1);glVertex3f(18.000004, -0.000005, -41.000000);

	glEnd();

}
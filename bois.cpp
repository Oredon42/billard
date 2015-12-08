#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>

void creer_bois()
{
	glBegin(GL_QUADS);

	glTexCoord2i(0,0);glVertex3f(25.603624, 0.121676, -2.000494);
	glTexCoord2i(1,0);glVertex3f(26.603624, 0.121676, -2.000494);
	glTexCoord2i(1,1);glVertex3f(26.603628, 0.121676, -39.377449);
	glTexCoord2i(0,1);glVertex3f(25.603628, 0.121676, -39.377449);

	glTexCoord2i(0,0);glVertex3f(25.603624, 0.121676, 1.999180);
	glTexCoord2i(1,0);glVertex3f(25.603621, 0.121676, 39.378384);
	glTexCoord2i(1,1);glVertex3f(26.603621, 0.121676, 39.378384);
	glTexCoord2i(0,1);glVertex3f(26.603624, 0.121676, 1.999180);

	glTexCoord2i(0,0);glVertex3f(19.652908, 0.121677, 45.849869);
	glTexCoord2i(1,0);glVertex3f(-21.652916, 0.121684, 45.849869);
	glTexCoord2i(1,1);glVertex3f(-21.652916, 0.121684, 46.849869);
	glTexCoord2i(0,1);glVertex3f(19.652908, 0.121677, 46.849869);

	glTexCoord2i(0,0);glVertex3f(-27.603624, 0.121684, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-28.603624, 0.121685, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-28.603628, 0.121685, 39.346523);
	glTexCoord2i(0,1);glVertex3f(-27.603628, 0.121684, 39.346523);

	glTexCoord2i(0,0);glVertex3f(-27.603624, 0.121684, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-27.603621, 0.121684, -39.377457);
	glTexCoord2i(1,1);glVertex3f(-28.603621, 0.121685, -39.377457);
	glTexCoord2i(0,1);glVertex3f(-28.603624, 0.121685, -2.001814);

	glTexCoord2i(0,0);glVertex3f(-21.652908, 0.121684, -45.848640);
	glTexCoord2i(1,0);glVertex3f(19.652916, 0.121677, -45.848640);
	glTexCoord2i(1,1);glVertex3f(19.652916, 0.121677, -46.848640);
	glTexCoord2i(0,1);glVertex3f(-21.652908, 0.121684, -46.848640);

	glTexCoord2i(0,0);glVertex3f(19.652908, 0.121677, 42.849869);
	glTexCoord2i(1,0);glVertex3f(-21.652916, 0.121684, 42.849869);
	glTexCoord2i(1,1);glVertex3f(-21.652916, 0.121684, 43.849869);
	glTexCoord2i(0,1);glVertex3f(19.652908, 0.121677, 43.849869);

	glTexCoord2i(0,0);glVertex3f(19.652908, 0.121677, 43.849869);
	glTexCoord2i(1,0);glVertex3f(-21.652916, 0.121684, 43.849869);
	glTexCoord2i(1,1);glVertex3f(-21.652916, 0.121684, 44.849869);
	glTexCoord2i(0,1);glVertex3f(19.652908, 0.121677, 44.849869);

	glTexCoord2i(0,0);glVertex3f(19.652908, 0.121677, 44.849869);
	glTexCoord2i(1,0);glVertex3f(-21.652916, 0.121684, 44.849869);
	glTexCoord2i(1,1);glVertex3f(-21.652916, 0.121684, 45.849869);
	glTexCoord2i(0,1);glVertex3f(19.652908, 0.121677, 45.849869);

	glTexCoord2i(0,0);glVertex3f(-24.603624, 0.121684, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-25.603624, 0.121684, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-25.603628, 0.121684, 39.346523);
	glTexCoord2i(0,1);glVertex3f(-24.603628, 0.121684, 39.346527);

	glTexCoord2i(0,0);glVertex3f(-25.603624, 0.121684, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-26.603624, 0.121684, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-26.603628, 0.121684, 39.346523);
	glTexCoord2i(0,1);glVertex3f(-25.603628, 0.121684, 39.346523);

	glTexCoord2i(0,0);glVertex3f(-26.603624, 0.121684, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-27.603624, 0.121684, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-27.603628, 0.121684, 39.346523);
	glTexCoord2i(0,1);glVertex3f(-26.603628, 0.121684, 39.346523);

	glTexCoord2i(0,0);glVertex3f(-24.603624, 0.121684, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-24.603621, 0.121684, -39.377453);
	glTexCoord2i(1,1);glVertex3f(-25.603621, 0.121684, -39.377457);
	glTexCoord2i(0,1);glVertex3f(-25.603624, 0.121684, -2.001814);

	glTexCoord2i(0,0);glVertex3f(-25.603624, 0.121684, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-25.603621, 0.121684, -39.377457);
	glTexCoord2i(1,1);glVertex3f(-26.603621, 0.121684, -39.377457);
	glTexCoord2i(0,1);glVertex3f(-26.603624, 0.121684, -2.001814);

	glTexCoord2i(0,0);glVertex3f(-26.603624, 0.121684, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-26.603621, 0.121684, -39.377457);
	glTexCoord2i(1,1);glVertex3f(-27.603621, 0.121684, -39.377457);
	glTexCoord2i(0,1);glVertex3f(-27.603624, 0.121684, -2.001814);

	glTexCoord2i(0,0);glVertex3f(-21.652908, 0.121684, -42.848640);
	glTexCoord2i(1,0);glVertex3f(19.652916, 0.121677, -42.848640);
	glTexCoord2i(1,1);glVertex3f(19.652916, 0.121677, -43.848640);
	glTexCoord2i(0,1);glVertex3f(-21.652908, 0.121684, -43.848640);

	glTexCoord2i(0,0);glVertex3f(-21.652908, 0.121684, -43.848640);
	glTexCoord2i(1,0);glVertex3f(19.652916, 0.121677, -43.848640);
	glTexCoord2i(1,1);glVertex3f(19.652916, 0.121677, -44.848640);
	glTexCoord2i(0,1);glVertex3f(-21.652908, 0.121684, -44.848640);

	glTexCoord2i(0,0);glVertex3f(-21.652908, 0.121684, -44.848640);
	glTexCoord2i(1,0);glVertex3f(19.652916, 0.121677, -44.848640);
	glTexCoord2i(1,1);glVertex3f(19.652916, 0.121677, -45.848640);
	glTexCoord2i(0,1);glVertex3f(-21.652908, 0.121684, -45.848640);

	glTexCoord2i(0,0);glVertex3f(22.603624, 0.121676, -2.000494);
	glTexCoord2i(1,0);glVertex3f(23.603624, 0.121676, -2.000494);
	glTexCoord2i(1,1);glVertex3f(23.603628, 0.121676, -39.377453);
	glTexCoord2i(0,1);glVertex3f(22.603628, 0.121676, -39.377453);

	glTexCoord2i(0,0);glVertex3f(23.603624, 0.121676, -2.000494);
	glTexCoord2i(1,0);glVertex3f(24.603624, 0.121676, -2.000494);
	glTexCoord2i(1,1);glVertex3f(24.603628, 0.121676, -39.377453);
	glTexCoord2i(0,1);glVertex3f(23.603628, 0.121676, -39.377453);

	glTexCoord2i(0,0);glVertex3f(24.603624, 0.121676, -2.000494);
	glTexCoord2i(1,0);glVertex3f(25.603624, 0.121676, -2.000494);
	glTexCoord2i(1,1);glVertex3f(25.603628, 0.121676, -39.377449);
	glTexCoord2i(0,1);glVertex3f(24.603628, 0.121676, -39.377453);

	glTexCoord2i(0,0);glVertex3f(22.603624, 0.121676, 1.999180);
	glTexCoord2i(1,0);glVertex3f(22.603621, 0.121676, 39.378380);
	glTexCoord2i(1,1);glVertex3f(23.603621, 0.121676, 39.378380);
	glTexCoord2i(0,1);glVertex3f(23.603624, 0.121676, 1.999180);

	glTexCoord2i(0,0);glVertex3f(23.603624, 0.121676, 1.999180);
	glTexCoord2i(1,0);glVertex3f(23.603621, 0.121676, 39.378380);
	glTexCoord2i(1,1);glVertex3f(24.603621, 0.121676, 39.378380);
	glTexCoord2i(0,1);glVertex3f(24.603624, 0.121676, 1.999180);

	glTexCoord2i(0,0);glVertex3f(24.603624, 0.121676, 1.999180);
	glTexCoord2i(1,0);glVertex3f(24.603621, 0.121676, 39.378380);
	glTexCoord2i(1,1);glVertex3f(25.603621, 0.121676, 39.378384);
	glTexCoord2i(0,1);glVertex3f(25.603624, 0.121676, 1.999180);

	glTexCoord2i(0,0);glVertex3f(-28.603628, 0.121685, 39.346523);
	glTexCoord2i(1,0);glVertex3f(-28.603624, 0.121685, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-28.603624, -1.878315, 2.000680);
	glTexCoord2i(0,1);glVertex3f(-28.603628, -1.878315, 39.346523);

	glTexCoord2i(0,0);glVertex3f(26.603628, 0.121676, -39.377449);
	glTexCoord2i(1,0);glVertex3f(26.603624, 0.121676, -2.000494);
	glTexCoord2i(1,1);glVertex3f(26.603624, -1.878324, -2.000494);
	glTexCoord2i(0,1);glVertex3f(26.603626, -1.878324, -39.377449);

	glTexCoord2i(0,0);glVertex3f(19.652908, 0.121677, 46.849869);
	glTexCoord2i(1,0);glVertex3f(-21.652916, 0.121684, 46.849869);
	glTexCoord2i(1,1);glVertex3f(-21.652916, -1.878316, 46.849869);
	glTexCoord2i(0,1);glVertex3f(19.652908, -1.878323, 46.849869);

	glTexCoord2i(0,0);glVertex3f(-28.603624, 0.121685, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-28.603621, 0.121685, -39.377457);
	glTexCoord2i(1,1);glVertex3f(-28.603622, -1.878315, -39.377457);
	glTexCoord2i(0,1);glVertex3f(-28.603624, -1.878315, -2.001814);

	glTexCoord2i(0,0);glVertex3f(-21.652908, 0.121684, -46.848640);
	glTexCoord2i(1,0);glVertex3f(19.652916, 0.121677, -46.848640);
	glTexCoord2i(1,1);glVertex3f(19.652916, -1.878323, -46.848640);
	glTexCoord2i(0,1);glVertex3f(-21.652908, -1.878316, -46.848640);

	glTexCoord2i(0,0);glVertex3f(26.603624, 0.121676, 1.999180);
	glTexCoord2i(1,0);glVertex3f(26.603621, 0.121676, 39.378384);
	glTexCoord2i(1,1);glVertex3f(26.603621, -1.878324, 39.378384);
	glTexCoord2i(0,1);glVertex3f(26.603624, -1.878324, 1.999180);

	glTexCoord2i(0,0);glVertex3f(19.652916, 0.121677, -42.848640);
	glTexCoord2i(1,0);glVertex3f(-21.652908, 0.121684, -42.848640);
	glTexCoord2i(1,1);glVertex3f(-21.652908, -0.051546, -42.848640);
	glTexCoord2i(0,1);glVertex3f(19.652916, -0.051553, -42.848640);

	glTexCoord2i(0,0);glVertex3f(22.603624, 0.121676, -2.000494);
	glTexCoord2i(1,0);glVertex3f(22.603628, 0.121676, -39.377453);
	glTexCoord2i(1,1);glVertex3f(22.603628, -0.051554, -39.377453);
	glTexCoord2i(0,1);glVertex3f(22.603624, -0.051554, -2.000494);

	glTexCoord2i(0,0);glVertex3f(-24.603621, 0.121684, -39.377453);
	glTexCoord2i(1,0);glVertex3f(-24.603624, 0.121684, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-24.603624, -0.051546, -2.001814);
	glTexCoord2i(0,1);glVertex3f(-24.603621, -0.051546, -39.377453);

	glTexCoord2i(0,0);glVertex3f(-24.603624, 0.121684, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-24.603628, 0.121684, 39.346527);
	glTexCoord2i(1,1);glVertex3f(-24.603628, -0.051546, 39.346527);
	glTexCoord2i(0,1);glVertex3f(-24.603624, -0.051546, 2.000680);

	glTexCoord2i(0,0);glVertex3f(-21.652916, 0.121684, 42.849869);
	glTexCoord2i(1,0);glVertex3f(19.652908, 0.121677, 42.849869);
	glTexCoord2i(1,1);glVertex3f(19.652908, -0.051553, 42.849869);
	glTexCoord2i(0,1);glVertex3f(-21.652916, -0.051546, 42.849869);

	glTexCoord2i(0,0);glVertex3f(22.603621, 0.121676, 39.378380);
	glTexCoord2i(1,0);glVertex3f(22.603624, 0.121676, 1.999180);
	glTexCoord2i(1,1);glVertex3f(22.603624, -0.051554, 1.999180);
	glTexCoord2i(0,1);glVertex3f(22.603621, -0.051554, 39.378380);

	glTexCoord2i(0,0);glVertex3f(19.652908, -1.878323, 46.849869);
	glTexCoord2i(1,0);glVertex3f(-21.652916, -1.878316, 46.849869);
	glTexCoord2i(1,1);glVertex3f(-21.652916, -3.789282, 46.849869);
	glTexCoord2i(0,1);glVertex3f(19.652908, -3.789289, 46.849869);

	glTexCoord2i(0,0);glVertex3f(-21.652908, -1.878316, -46.848640);
	glTexCoord2i(1,0);glVertex3f(-21.652908, -3.789282, -46.848640);
	glTexCoord2i(1,1);glVertex3f(-28.603621, -3.708565, -46.852642);
	glTexCoord2i(0,1);glVertex3f(-28.603621, -1.797601, -46.852642);

	glTexCoord2i(0,0);glVertex3f(-28.603624, -1.878315, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-28.603622, -1.878315, -39.377457);
	glTexCoord2i(1,1);glVertex3f(-28.603622, -3.789281, -39.377457);
	glTexCoord2i(0,1);glVertex3f(-28.603624, -3.789281, -2.001814);

	glTexCoord2i(0,0);glVertex3f(-21.652908, -1.878316, -46.848640);
	glTexCoord2i(1,0);glVertex3f(19.652916, -1.878323, -46.848640);
	glTexCoord2i(1,1);glVertex3f(19.652916, -3.789289, -46.848640);
	glTexCoord2i(0,1);glVertex3f(-21.652908, -3.789282, -46.848640);

	glTexCoord2i(0,0);glVertex3f(-28.603628, -1.878315, 39.346523);
	glTexCoord2i(1,0);glVertex3f(-28.603628, -3.789281, 39.346523);
	glTexCoord2i(1,1);glVertex3f(-28.598095, -3.708565, 46.849865);
	glTexCoord2i(0,1);glVertex3f(-28.598095, -1.797601, 46.849865);

	glTexCoord2i(0,0);glVertex3f(19.652908, -1.878323, 46.849869);
	glTexCoord2i(1,0);glVertex3f(19.652908, -3.789289, 46.849869);
	glTexCoord2i(1,1);glVertex3f(26.599634, -3.708574, 46.849873);
	glTexCoord2i(0,1);glVertex3f(26.599634, -1.797610, 46.849873);

	glTexCoord2i(0,0);glVertex3f(26.603624, -1.878324, 1.999180);
	glTexCoord2i(1,0);glVertex3f(26.603624, -3.789290, 1.999180);
	glTexCoord2i(1,1);glVertex3f(26.603624, -3.789290, -2.000494);
	glTexCoord2i(0,1);glVertex3f(26.603624, -1.878324, -2.000494);

	glTexCoord2i(0,0);glVertex3f(26.603624, -1.878324, 1.999180);
	glTexCoord2i(1,0);glVertex3f(26.603621, -1.878324, 39.378384);
	glTexCoord2i(1,1);glVertex3f(26.603621, -3.789290, 39.378384);
	glTexCoord2i(0,1);glVertex3f(26.603624, -3.789290, 1.999180);

	glTexCoord2i(0,0);glVertex3f(26.603626, -1.878324, -39.377449);
	glTexCoord2i(1,0);glVertex3f(26.603626, -3.789290, -39.377449);
	glTexCoord2i(1,1);glVertex3f(26.600105, -3.708574, -46.848637);
	glTexCoord2i(0,1);glVertex3f(26.600105, -1.797610, -46.848637);

	glTexCoord2i(0,0);glVertex3f(-28.603628, -1.878315, 39.346523);
	glTexCoord2i(1,0);glVertex3f(-28.603624, -1.878315, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-28.603624, -3.789281, 2.000680);
	glTexCoord2i(0,1);glVertex3f(-28.603628, -3.789281, 39.346523);

	glTexCoord2i(0,0);glVertex3f(-28.603622, -1.878315, -39.377457);
	glTexCoord2i(1,0);glVertex3f(-28.603621, -1.797601, -46.852642);
	glTexCoord2i(1,1);glVertex3f(-28.603621, -3.708565, -46.852642);
	glTexCoord2i(0,1);glVertex3f(-28.603622, -3.789281, -39.377457);

	glTexCoord2i(0,0);glVertex3f(26.603626, -1.878324, -39.377449);
	glTexCoord2i(1,0);glVertex3f(26.603624, -1.878324, -2.000494);
	glTexCoord2i(1,1);glVertex3f(26.603624, -3.789290, -2.000494);
	glTexCoord2i(0,1);glVertex3f(26.603626, -3.789290, -39.377449);

	glTexCoord2i(0,0);glVertex3f(-21.652916, -1.878316, 46.849869);
	glTexCoord2i(1,0);glVertex3f(-28.598095, -1.797601, 46.849865);
	glTexCoord2i(1,1);glVertex3f(-28.598095, -3.708565, 46.849865);
	glTexCoord2i(0,1);glVertex3f(-21.652916, -3.789282, 46.849869);

	glTexCoord2i(0,0);glVertex3f(26.603621, -1.878324, 39.378384);
	glTexCoord2i(1,0);glVertex3f(26.599634, -1.797610, 46.849873);
	glTexCoord2i(1,1);glVertex3f(26.599634, -3.708574, 46.849873);
	glTexCoord2i(0,1);glVertex3f(26.603621, -3.789290, 39.378384);

	glTexCoord2i(0,0);glVertex3f(-28.603624, -1.878315, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-28.603624, -1.878315, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-28.603624, -3.789281, -2.001814);
	glTexCoord2i(0,1);glVertex3f(-28.603624, -3.789281, 2.000680);

	glTexCoord2i(0,0);glVertex3f(19.652916, -1.878323, -46.848640);
	glTexCoord2i(1,0);glVertex3f(26.600105, -1.797610, -46.848637);
	glTexCoord2i(1,1);glVertex3f(26.600105, -3.708574, -46.848637);
	glTexCoord2i(0,1);glVertex3f(19.652916, -3.789289, -46.848640);

	glTexCoord2i(0,0);glVertex3f(-28.603624, -3.789281, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-28.603622, -3.789281, -39.377457);
	glTexCoord2i(1,1);glVertex3f(-26.790726, -3.787956, -36.791420);
	glTexCoord2i(0,1);glVertex3f(-26.790728, -3.787956, -1.870470);

	glTexCoord2i(0,0);glVertex3f(26.603621, -3.789290, 39.378384);
	glTexCoord2i(1,0);glVertex3f(26.599634, -3.708574, 46.849873);
	glTexCoord2i(1,1);glVertex3f(24.786983, -3.712550, 43.772812);
	glTexCoord2i(0,1);glVertex3f(24.790709, -3.787964, 36.792023);

	glTexCoord2i(0,0);glVertex3f(-21.652908, -3.789282, -46.848640);
	glTexCoord2i(1,0);glVertex3f(19.652916, -3.789289, -46.848640);
	glTexCoord2i(1,1);glVertex3f(18.296499, -3.787963, -43.771923);
	glTexCoord2i(0,1);glVertex3f(-20.296511, -3.787957, -43.771923);

	glTexCoord2i(0,0);glVertex3f(-28.603624, -3.789281, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-28.603624, -3.789281, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-26.790728, -3.787956, -1.870470);
	glTexCoord2i(0,1);glVertex3f(-26.790728, -3.787956, 1.869154);

	glTexCoord2i(0,0);glVertex3f(19.652916, -3.789289, -46.848640);
	glTexCoord2i(1,0);glVertex3f(26.600105, -3.708574, -46.848637);
	glTexCoord2i(1,1);glVertex3f(24.787422, -3.712550, -43.771923);
	glTexCoord2i(0,1);glVertex3f(18.296499, -3.787963, -43.771923);

	glTexCoord2i(0,0);glVertex3f(-28.603621, -3.708565, -46.852642);
	glTexCoord2i(1,0);glVertex3f(-21.652908, -3.789282, -46.848640);
	glTexCoord2i(1,1);glVertex3f(-20.296511, -3.787957, -43.771923);
	glTexCoord2i(0,1);glVertex3f(-26.790726, -3.712542, -43.775661);

	glTexCoord2i(0,0);glVertex3f(26.603624, -3.789290, 1.999180);
	glTexCoord2i(1,0);glVertex3f(26.603621, -3.789290, 39.378384);
	glTexCoord2i(1,1);glVertex3f(24.790709, -3.787964, 36.792023);
	glTexCoord2i(0,1);glVertex3f(24.790712, -3.787964, 1.867752);

	glTexCoord2i(0,0);glVertex3f(-28.603628, -3.789281, 39.346523);
	glTexCoord2i(1,0);glVertex3f(-28.603624, -3.789281, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-26.790728, -3.787956, 1.869154);
	glTexCoord2i(0,1);glVertex3f(-26.790731, -3.787956, 36.762257);

	glTexCoord2i(0,0);glVertex3f(-28.598095, -3.708565, 46.849865);
	glTexCoord2i(1,0);glVertex3f(-28.603628, -3.789281, 39.346523);
	glTexCoord2i(1,1);glVertex3f(-26.790731, -3.787956, 36.762257);
	glTexCoord2i(0,1);glVertex3f(-26.785563, -3.712542, 43.772808);

	glTexCoord2i(0,0);glVertex3f(26.603626, -3.789290, -39.377449);
	glTexCoord2i(1,0);glVertex3f(26.603624, -3.789290, -2.000494);
	glTexCoord2i(1,1);glVertex3f(24.790712, -3.787964, -1.869238);
	glTexCoord2i(0,1);glVertex3f(24.790714, -3.787964, -36.791416);

	glTexCoord2i(0,0);glVertex3f(26.599634, -3.708574, 46.849873);
	glTexCoord2i(1,0);glVertex3f(19.652908, -3.789289, 46.849869);
	glTexCoord2i(1,1);glVertex3f(18.296494, -3.787963, 43.772812);
	glTexCoord2i(0,1);glVertex3f(24.786983, -3.712550, 43.772812);

	glTexCoord2i(0,0);glVertex3f(26.603624, -3.789290, -2.000494);
	glTexCoord2i(1,0);glVertex3f(26.603624, -3.789290, 1.999180);
	glTexCoord2i(1,1);glVertex3f(24.790712, -3.787964, 1.867752);
	glTexCoord2i(0,1);glVertex3f(24.790712, -3.787964, -1.869238);

	glTexCoord2i(0,0);glVertex3f(26.600105, -3.708574, -46.848637);
	glTexCoord2i(1,0);glVertex3f(26.603626, -3.789290, -39.377449);
	glTexCoord2i(1,1);glVertex3f(24.790714, -3.787964, -36.791416);
	glTexCoord2i(0,1);glVertex3f(24.787422, -3.712550, -43.771923);

	glTexCoord2i(0,0);glVertex3f(-28.603622, -3.789281, -39.377457);
	glTexCoord2i(1,0);glVertex3f(-28.603621, -3.708565, -46.852642);
	glTexCoord2i(1,1);glVertex3f(-26.790726, -3.712542, -43.775661);
	glTexCoord2i(0,1);glVertex3f(-26.790726, -3.787956, -36.791420);

	glTexCoord2i(0,0);glVertex3f(19.652908, -3.789289, 46.849869);
	glTexCoord2i(1,0);glVertex3f(-21.652916, -3.789282, 46.849869);
	glTexCoord2i(1,1);glVertex3f(-20.296516, -3.787957, 43.772812);
	glTexCoord2i(0,1);glVertex3f(18.296494, -3.787963, 43.772812);

	glTexCoord2i(0,0);glVertex3f(-21.652916, -3.789282, 46.849869);
	glTexCoord2i(1,0);glVertex3f(-28.598095, -3.708565, 46.849865);
	glTexCoord2i(1,1);glVertex3f(-26.785563, -3.712542, 43.772808);
	glTexCoord2i(0,1);glVertex3f(-20.296516, -3.787957, 43.772812);

	glTexCoord2i(0,0);glVertex3f(-26.790731, -3.787956, 36.762257);
	glTexCoord2i(1,0);glVertex3f(-26.790728, -3.787956, 1.869154);
	glTexCoord2i(1,1);glVertex3f(-26.790730, -8.017935, 1.869154);
	glTexCoord2i(0,1);glVertex3f(-26.790731, -8.017935, 36.762257);

	glTexCoord2i(0,0);glVertex3f(-26.785563, -3.712542, 43.772808);
	glTexCoord2i(1,0);glVertex3f(-26.790731, -3.787956, 36.762257);
	glTexCoord2i(1,1);glVertex3f(-26.790731, -8.017935, 36.762257);
	glTexCoord2i(0,1);glVertex3f(-26.785563, -7.942522, 43.772808);

	glTexCoord2i(0,0);glVertex3f(24.790714, -3.787964, -36.791416);
	glTexCoord2i(1,0);glVertex3f(24.790712, -3.787964, -1.869238);
	glTexCoord2i(1,1);glVertex3f(24.790710, -8.017943, -1.869238);
	glTexCoord2i(0,1);glVertex3f(24.790714, -8.017943, -36.791416);

	glTexCoord2i(0,0);glVertex3f(24.786983, -3.712550, 43.772812);
	glTexCoord2i(1,0);glVertex3f(18.296494, -3.787963, 43.772812);
	glTexCoord2i(1,1);glVertex3f(18.296494, -8.017942, 43.772812);
	glTexCoord2i(0,1);glVertex3f(24.786983, -7.942530, 43.772812);

	glTexCoord2i(0,0);glVertex3f(24.790712, -3.787964, -1.869238);
	glTexCoord2i(1,0);glVertex3f(24.790712, -3.787964, 1.867752);
	glTexCoord2i(1,1);glVertex3f(24.790710, -8.017943, 1.867752);
	glTexCoord2i(0,1);glVertex3f(24.790710, -8.017943, -1.869238);

	glTexCoord2i(0,0);glVertex3f(24.787422, -3.712550, -43.771923);
	glTexCoord2i(1,0);glVertex3f(24.790714, -3.787964, -36.791416);
	glTexCoord2i(1,1);glVertex3f(24.790714, -8.017943, -36.791416);
	glTexCoord2i(0,1);glVertex3f(24.787422, -7.942530, -43.771923);

	glTexCoord2i(0,0);glVertex3f(-26.790726, -3.787956, -36.791420);
	glTexCoord2i(1,0);glVertex3f(-26.790726, -3.712542, -43.775661);
	glTexCoord2i(1,1);glVertex3f(-26.790726, -7.942522, -43.775661);
	glTexCoord2i(0,1);glVertex3f(-26.790726, -8.017935, -36.791420);

	glTexCoord2i(0,0);glVertex3f(18.296494, -3.787963, 43.772812);
	glTexCoord2i(1,0);glVertex3f(-20.296516, -3.787957, 43.772812);
	glTexCoord2i(1,1);glVertex3f(-20.296516, -8.017937, 43.772812);
	glTexCoord2i(0,1);glVertex3f(18.296494, -8.017942, 43.772812);

	glTexCoord2i(0,0);glVertex3f(-20.296516, -3.787957, 43.772812);
	glTexCoord2i(1,0);glVertex3f(-26.785563, -3.712542, 43.772808);
	glTexCoord2i(1,1);glVertex3f(-26.785563, -7.942522, 43.772808);
	glTexCoord2i(0,1);glVertex3f(-20.296516, -8.017937, 43.772812);

	glTexCoord2i(0,0);glVertex3f(-26.790728, -3.787956, -1.870470);
	glTexCoord2i(1,0);glVertex3f(-26.790726, -3.787956, -36.791420);
	glTexCoord2i(1,1);glVertex3f(-26.790726, -8.017935, -36.791420);
	glTexCoord2i(0,1);glVertex3f(-26.790730, -8.017935, -1.870470);

	glTexCoord2i(0,0);glVertex3f(24.790709, -3.787964, 36.792023);
	glTexCoord2i(1,0);glVertex3f(24.786983, -3.712550, 43.772812);
	glTexCoord2i(1,1);glVertex3f(24.786983, -7.942530, 43.772812);
	glTexCoord2i(0,1);glVertex3f(24.790709, -8.017943, 36.792023);

	glTexCoord2i(0,0);glVertex3f(-20.296511, -3.787957, -43.771923);
	glTexCoord2i(1,0);glVertex3f(18.296499, -3.787963, -43.771923);
	glTexCoord2i(1,1);glVertex3f(18.296499, -8.017942, -43.771923);
	glTexCoord2i(0,1);glVertex3f(-20.296511, -8.017937, -43.771923);

	glTexCoord2i(0,0);glVertex3f(-26.790728, -3.787956, 1.869154);
	glTexCoord2i(1,0);glVertex3f(-26.790728, -3.787956, -1.870470);
	glTexCoord2i(1,1);glVertex3f(-26.790730, -8.017935, -1.870470);
	glTexCoord2i(0,1);glVertex3f(-26.790730, -8.017935, 1.869154);

	glTexCoord2i(0,0);glVertex3f(18.296499, -3.787963, -43.771923);
	glTexCoord2i(1,0);glVertex3f(24.787422, -3.712550, -43.771923);
	glTexCoord2i(1,1);glVertex3f(24.787422, -7.942530, -43.771923);
	glTexCoord2i(0,1);glVertex3f(18.296499, -8.017942, -43.771923);

	glTexCoord2i(0,0);glVertex3f(-26.790726, -3.712542, -43.775661);
	glTexCoord2i(1,0);glVertex3f(-20.296511, -3.787957, -43.771923);
	glTexCoord2i(1,1);glVertex3f(-20.296511, -8.017937, -43.771923);
	glTexCoord2i(0,1);glVertex3f(-26.790726, -7.942522, -43.775661);

	glTexCoord2i(0,0);glVertex3f(24.790712, -3.787964, 1.867752);
	glTexCoord2i(1,0);glVertex3f(24.790709, -3.787964, 36.792023);
	glTexCoord2i(1,1);glVertex3f(24.790709, -8.017943, 36.792023);
	glTexCoord2i(0,1);glVertex3f(24.790710, -8.017943, 1.867752);

	glTexCoord2i(0,0);glVertex3f(-20.296516, -8.017937, 43.772812);
	glTexCoord2i(1,0);glVertex3f(-26.785563, -7.942522, 43.772808);
	glTexCoord2i(1,1);glVertex3f(-26.785566, -28.536467, 43.772808);
	glTexCoord2i(0,1);glVertex3f(-20.296520, -28.611879, 43.772812);

	glTexCoord2i(0,0);glVertex3f(-26.785563, -7.942522, 43.772808);
	glTexCoord2i(1,0);glVertex3f(-26.790731, -8.017935, 36.762257);
	glTexCoord2i(1,1);glVertex3f(-26.790735, -28.611879, 36.762257);
	glTexCoord2i(0,1);glVertex3f(-26.785566, -28.536467, 43.772808);

	glTexCoord2i(0,0);glVertex3f(24.790709, -8.017943, 36.792023);
	glTexCoord2i(1,0);glVertex3f(24.786983, -7.942530, 43.772812);
	glTexCoord2i(1,1);glVertex3f(24.786980, -28.536474, 43.772812);
	glTexCoord2i(0,1);glVertex3f(24.790705, -28.611887, 36.792023);

	glTexCoord2i(0,0);glVertex3f(24.786983, -7.942530, 43.772812);
	glTexCoord2i(1,0);glVertex3f(18.296494, -8.017942, 43.772812);
	glTexCoord2i(1,1);glVertex3f(18.296490, -28.611887, 43.772812);
	glTexCoord2i(0,1);glVertex3f(24.786980, -28.536474, 43.772812);

	glTexCoord2i(0,0);glVertex3f(-26.790730, -8.017935, 1.869154);
	glTexCoord2i(1,0);glVertex3f(-26.790730, -8.017935, -1.870470);
	glTexCoord2i(1,1);glVertex3f(-26.790731, -28.611879, -1.870470);
	glTexCoord2i(0,1);glVertex3f(-26.790733, -28.611879, 1.869154);

	glTexCoord2i(0,0);glVertex3f(24.790710, -8.017943, -1.869238);
	glTexCoord2i(1,0);glVertex3f(24.790710, -8.017943, 1.867752);
	glTexCoord2i(1,1);glVertex3f(24.790707, -28.611887, 1.867752);
	glTexCoord2i(0,1);glVertex3f(24.790709, -28.611887, -1.869238);

	glTexCoord2i(0,0);glVertex3f(18.296499, -8.017942, -43.771923);
	glTexCoord2i(1,0);glVertex3f(24.787422, -7.942530, -43.771923);
	glTexCoord2i(1,1);glVertex3f(24.787418, -28.536474, -43.771923);
	glTexCoord2i(0,1);glVertex3f(18.296495, -28.611887, -43.771923);

	glTexCoord2i(0,0);glVertex3f(24.787422, -7.942530, -43.771923);
	glTexCoord2i(1,0);glVertex3f(24.790714, -8.017943, -36.791416);
	glTexCoord2i(1,1);glVertex3f(24.790710, -28.611887, -36.791416);
	glTexCoord2i(0,1);glVertex3f(24.787418, -28.536474, -43.771923);

	glTexCoord2i(0,0);glVertex3f(-26.790726, -7.942522, -43.775661);
	glTexCoord2i(1,0);glVertex3f(-20.296511, -8.017937, -43.771923);
	glTexCoord2i(1,1);glVertex3f(-20.296515, -28.611879, -43.771923);
	glTexCoord2i(0,1);glVertex3f(-26.790730, -28.536467, -43.775661);

	glTexCoord2i(0,0);glVertex3f(-26.790726, -8.017935, -36.791420);
	glTexCoord2i(1,0);glVertex3f(-26.790726, -7.942522, -43.775661);
	glTexCoord2i(1,1);glVertex3f(-26.790730, -28.536467, -43.775661);
	glTexCoord2i(0,1);glVertex3f(-26.790730, -28.611879, -36.791420);

	glEnd();

}
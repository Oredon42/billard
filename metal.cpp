#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>

void creer_metal()
{
	glBegin(GL_QUADS);

	glTexCoord2i(0,0);glVertex3f(23.163765, 0.202404, 40.526657);
	glTexCoord2i(1,0);glVertex3f(23.316006, 0.202404, 41.292023);
	glTexCoord2i(1,1);glVertex3f(24.603621, 0.202386, 39.378380);
	glTexCoord2i(0,1);glVertex3f(23.603621, 0.202386, 39.378380);

	glTexCoord2i(0,0);glVertex3f(23.316006, 0.202404, 41.292023);
	glTexCoord2i(1,0);glVertex3f(23.163765, 0.202404, 42.057392);
	glTexCoord2i(1,1);glVertex3f(25.603621, 0.202386, 39.378384);
	glTexCoord2i(0,1);glVertex3f(24.603621, 0.202386, 39.378380);

	glTexCoord2i(0,0);glVertex3f(22.730221, 0.202404, 42.706234);
	glTexCoord2i(1,0);glVertex3f(26.603621, 0.202386, 39.378384);
	glTexCoord2i(1,1);glVertex3f(25.603621, 0.202386, 39.378384);
	glTexCoord2i(0,1);glVertex3f(23.163765, 0.202404, 42.057392);

	glTexCoord2i(0,0);glVertex3f(20.550640, 0.202405, 43.139782);
	glTexCoord2i(1,0);glVertex3f(19.652908, 0.202387, 43.849869);
	glTexCoord2i(1,1);glVertex3f(19.652908, 0.202387, 44.849869);
	glTexCoord2i(0,1);glVertex3f(21.316006, 0.202405, 43.292023);

	glTexCoord2i(0,0);glVertex3f(21.316006, 0.202405, 43.292023);
	glTexCoord2i(1,0);glVertex3f(19.652908, 0.202387, 44.849869);
	glTexCoord2i(1,1);glVertex3f(19.652908, 0.202387, 45.849869);
	glTexCoord2i(0,1);glVertex3f(22.081375, 0.202404, 43.139782);

	glTexCoord2i(0,0);glVertex3f(22.730221, 0.202404, 42.706234);
	glTexCoord2i(1,0);glVertex3f(22.081375, 0.202404, 43.139782);
	glTexCoord2i(1,1);glVertex3f(19.652908, 0.202387, 45.849869);
	glTexCoord2i(0,1);glVertex3f(19.652908, 0.202387, 46.849869);

	glTexCoord2i(0,0);glVertex3f(-22.665459, 0.202420, 43.247604);
	glTexCoord2i(1,0);glVertex3f(-23.430828, 0.202420, 43.399845);
	glTexCoord2i(1,1);glVertex3f(-21.652916, 0.202402, 44.849869);
	glTexCoord2i(0,1);glVertex3f(-21.652916, 0.202402, 43.849869);

	glTexCoord2i(0,0);glVertex3f(-23.430828, 0.202420, 43.399845);
	glTexCoord2i(1,0);glVertex3f(-24.196194, 0.202420, 43.247604);
	glTexCoord2i(1,1);glVertex3f(-21.652916, 0.202402, 45.849869);
	glTexCoord2i(0,1);glVertex3f(-21.652916, 0.202402, 44.849869);

	glTexCoord2i(0,0);glVertex3f(-24.845039, 0.202420, 42.814056);
	glTexCoord2i(1,0);glVertex3f(-21.652916, 0.202402, 46.849869);
	glTexCoord2i(1,1);glVertex3f(-21.652916, 0.202402, 45.849869);
	glTexCoord2i(0,1);glVertex3f(-24.196194, 0.202420, 43.247604);

	glTexCoord2i(0,0);glVertex3f(-24.845039, 0.202420, 42.814056);
	glTexCoord2i(1,0);glVertex3f(-25.278587, 0.202420, 42.165211);
	glTexCoord2i(1,1);glVertex3f(-27.603628, 0.202403, 39.346523);
	glTexCoord2i(0,1);glVertex3f(-28.603628, 0.202403, 39.346523);

	glTexCoord2i(0,0);glVertex3f(-25.430828, 0.202420, 41.399841);
	glTexCoord2i(1,0);glVertex3f(-26.603628, 0.202402, 39.346523);
	glTexCoord2i(1,1);glVertex3f(-27.603628, 0.202403, 39.346523);
	glTexCoord2i(0,1);glVertex3f(-25.278587, 0.202420, 42.165211);

	glTexCoord2i(0,0);glVertex3f(-25.278587, 0.202420, 40.634476);
	glTexCoord2i(1,0);glVertex3f(-25.603628, 0.202402, 39.346523);
	glTexCoord2i(1,1);glVertex3f(-26.603628, 0.202402, 39.346523);
	glTexCoord2i(0,1);glVertex3f(-25.430828, 0.202420, 41.399841);

	glTexCoord2i(0,0);glVertex3f(-25.135685, 0.202418, -40.427856);
	glTexCoord2i(1,0);glVertex3f(-25.287926, 0.202418, -41.193230);
	glTexCoord2i(1,1);glVertex3f(-26.603621, 0.202402, -39.377457);
	glTexCoord2i(0,1);glVertex3f(-25.603621, 0.202402, -39.377457);

	glTexCoord2i(0,0);glVertex3f(-25.287926, 0.202418, -41.193230);
	glTexCoord2i(1,0);glVertex3f(-25.135685, 0.202418, -41.958591);
	glTexCoord2i(1,1);glVertex3f(-27.603621, 0.202403, -39.377457);
	glTexCoord2i(0,1);glVertex3f(-26.603621, 0.202402, -39.377457);

	glTexCoord2i(0,0);glVertex3f(-24.702137, 0.202418, -42.607437);
	glTexCoord2i(1,0);glVertex3f(-28.603621, 0.202403, -39.377457);
	glTexCoord2i(1,1);glVertex3f(-27.603621, 0.202403, -39.377457);
	glTexCoord2i(0,1);glVertex3f(-25.135685, 0.202418, -41.958591);

	glTexCoord2i(0,0);glVertex3f(-22.522556, 0.202418, -43.040985);
	glTexCoord2i(1,0);glVertex3f(-21.652908, 0.202402, -43.848640);
	glTexCoord2i(1,1);glVertex3f(-21.652908, 0.202402, -44.848640);
	glTexCoord2i(0,1);glVertex3f(-23.287926, 0.202418, -43.193226);

	glTexCoord2i(0,0);glVertex3f(-23.287926, 0.202418, -43.193226);
	glTexCoord2i(1,0);glVertex3f(-21.652908, 0.202402, -44.848640);
	glTexCoord2i(1,1);glVertex3f(-21.652908, 0.202402, -45.848640);
	glTexCoord2i(0,1);glVertex3f(-24.053291, 0.202418, -43.040985);

	glTexCoord2i(0,0);glVertex3f(-24.702137, 0.202418, -42.607437);
	glTexCoord2i(1,0);glVertex3f(-24.053291, 0.202418, -43.040985);
	glTexCoord2i(1,1);glVertex3f(-21.652908, 0.202402, -45.848640);
	glTexCoord2i(0,1);glVertex3f(-21.652908, 0.202402, -46.848640);

	glTexCoord2i(0,0);glVertex3f(23.285839, 0.202402, -40.570751);
	glTexCoord2i(1,0);glVertex3f(23.603628, 0.202386, -39.377453);
	glTexCoord2i(1,1);glVertex3f(24.603628, 0.202386, -39.377453);
	glTexCoord2i(0,1);glVertex3f(23.438080, 0.202402, -41.336121);

	glTexCoord2i(0,0);glVertex3f(23.438080, 0.202402, -41.336121);
	glTexCoord2i(1,0);glVertex3f(24.603628, 0.202386, -39.377453);
	glTexCoord2i(1,1);glVertex3f(25.603628, 0.202386, -39.377449);
	glTexCoord2i(0,1);glVertex3f(23.285839, 0.202402, -42.101486);

	glTexCoord2i(0,0);glVertex3f(22.852295, 0.202402, -42.750332);
	glTexCoord2i(1,0);glVertex3f(23.285839, 0.202402, -42.101486);
	glTexCoord2i(1,1);glVertex3f(25.603628, 0.202386, -39.377449);
	glTexCoord2i(0,1);glVertex3f(26.603628, 0.202386, -39.377449);

	glTexCoord2i(0,0);glVertex3f(20.672714, 0.202403, -43.183880);
	glTexCoord2i(1,0);glVertex3f(21.438080, 0.202403, -43.336121);
	glTexCoord2i(1,1);glVertex3f(19.652916, 0.202387, -44.848640);
	glTexCoord2i(0,1);glVertex3f(19.652916, 0.202387, -43.848640);

	glTexCoord2i(0,0);glVertex3f(21.438080, 0.202403, -43.336121);
	glTexCoord2i(1,0);glVertex3f(22.203449, 0.202402, -43.183880);
	glTexCoord2i(1,1);glVertex3f(19.652916, 0.202387, -45.848640);
	glTexCoord2i(0,1);glVertex3f(19.652916, 0.202387, -44.848640);

	glTexCoord2i(0,0);glVertex3f(22.852295, 0.202402, -42.750332);
	glTexCoord2i(1,0);glVertex3f(19.652916, 0.202387, -46.848640);
	glTexCoord2i(1,1);glVertex3f(19.652916, 0.202387, -45.848640);
	glTexCoord2i(0,1);glVertex3f(22.203449, 0.202402, -43.183880);

	glTexCoord2i(0,0);glVertex3f(23.380650, 0.202404, -1.878912);
	glTexCoord2i(1,0);glVertex3f(24.029495, 0.202404, -1.445366);
	glTexCoord2i(1,1);glVertex3f(24.603624, 0.202386, -2.000494);
	glTexCoord2i(0,1);glVertex3f(23.603624, 0.202386, -2.000494);

	glTexCoord2i(0,0);glVertex3f(24.029495, 0.202404, -1.445366);
	glTexCoord2i(1,0);glVertex3f(24.463039, 0.202404, -0.796520);
	glTexCoord2i(1,1);glVertex3f(25.603624, 0.202386, -2.000494);
	glTexCoord2i(0,1);glVertex3f(24.603624, 0.202386, -2.000494);

	glTexCoord2i(0,0);glVertex3f(24.615280, 0.202404, -0.031152);
	glTexCoord2i(1,0);glVertex3f(26.603624, 0.202386, -2.000494);
	glTexCoord2i(1,1);glVertex3f(25.603624, 0.202386, -2.000494);
	glTexCoord2i(0,1);glVertex3f(24.463039, 0.202404, -0.796520);

	glTexCoord2i(0,0);glVertex3f(23.380650, 0.202404, 1.816606);
	glTexCoord2i(1,0);glVertex3f(23.603624, 0.202386, 1.999180);
	glTexCoord2i(1,1);glVertex3f(24.603624, 0.202386, 1.999180);
	glTexCoord2i(0,1);glVertex3f(24.029495, 0.202404, 1.383062);

	glTexCoord2i(0,0);glVertex3f(24.029495, 0.202404, 1.383062);
	glTexCoord2i(1,0);glVertex3f(24.603624, 0.202386, 1.999180);
	glTexCoord2i(1,1);glVertex3f(25.603624, 0.202386, 1.999180);
	glTexCoord2i(0,1);glVertex3f(24.463039, 0.202404, 0.734214);

	glTexCoord2i(0,0);glVertex3f(24.615280, 0.202404, -0.031152);
	glTexCoord2i(1,0);glVertex3f(24.463039, 0.202404, 0.734214);
	glTexCoord2i(1,1);glVertex3f(25.603624, 0.202386, 1.999180);
	glTexCoord2i(0,1);glVertex3f(26.603624, 0.202386, 1.999180);

	glTexCoord2i(0,0);glVertex3f(-25.355083, 0.202420, 1.816602);
	glTexCoord2i(1,0);glVertex3f(-26.003929, 0.202420, 1.383058);
	glTexCoord2i(1,1);glVertex3f(-26.603624, 0.202402, 2.000680);
	glTexCoord2i(0,1);glVertex3f(-25.603624, 0.202402, 2.000680);

	glTexCoord2i(0,0);glVertex3f(-26.003929, 0.202420, 1.383058);
	glTexCoord2i(1,0);glVertex3f(-26.437475, 0.202420, 0.734210);
	glTexCoord2i(1,1);glVertex3f(-27.603624, 0.202403, 2.000680);
	glTexCoord2i(0,1);glVertex3f(-26.603624, 0.202402, 2.000680);

	glTexCoord2i(0,0);glVertex3f(-25.355083, 0.202420, -1.878916);
	glTexCoord2i(1,0);glVertex3f(-25.603624, 0.202402, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-26.603624, 0.202402, -2.001814);
	glTexCoord2i(0,1);glVertex3f(-26.003929, 0.202420, -1.445370);

	glTexCoord2i(0,0);glVertex3f(-26.003929, 0.202420, -1.445370);
	glTexCoord2i(1,0);glVertex3f(-26.603624, 0.202402, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-27.603624, 0.202403, -2.001814);
	glTexCoord2i(0,1);glVertex3f(-26.437475, 0.202420, -0.796522);

	glTexCoord2i(0,0);glVertex3f(-26.589716, 0.202420, -0.031156);
	glTexCoord2i(1,0);glVertex3f(-26.437475, 0.202420, -0.796522);
	glTexCoord2i(1,1);glVertex3f(-27.603624, 0.202403, -2.001814);
	glTexCoord2i(0,1);glVertex3f(-28.603624, 0.202403, -2.001814);

	glTexCoord2i(0,0);glVertex3f(-26.589716, 0.202420, -0.031156);
	glTexCoord2i(1,0);glVertex3f(-28.603624, 0.202403, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-27.603624, 0.202403, 2.000680);
	glTexCoord2i(0,1);glVertex3f(-26.437475, 0.202420, 0.734210);

	glTexCoord2i(0,0);glVertex3f(-21.652916, 0.202402, 46.849869);
	glTexCoord2i(1,0);glVertex3f(-28.598095, 0.202403, 46.849865);
	glTexCoord2i(1,1);glVertex3f(-28.598095, -1.797597, 46.849865);
	glTexCoord2i(0,1);glVertex3f(-21.652916, -1.903176, 46.849869);

	glTexCoord2i(0,0);glVertex3f(19.652916, 0.202387, -46.848640);
	glTexCoord2i(1,0);glVertex3f(26.600105, 0.202386, -46.848637);
	glTexCoord2i(1,1);glVertex3f(26.600105, -1.797614, -46.848637);
	glTexCoord2i(0,1);glVertex3f(19.652916, -2.023935, -46.848640);

	glTexCoord2i(0,0);glVertex3f(-28.603621, 0.202403, -39.377457);
	glTexCoord2i(1,0);glVertex3f(-28.603621, 0.202403, -46.852642);
	glTexCoord2i(1,1);glVertex3f(-28.603621, -1.797597, -46.852642);
	glTexCoord2i(0,1);glVertex3f(-28.603622, -1.918323, -39.377457);

	glTexCoord2i(0,0);glVertex3f(-28.603624, 0.202403, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-28.603624, 0.202403, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-28.603624, -1.918323, -2.001814);
	glTexCoord2i(0,1);glVertex3f(-28.603624, -1.918323, 2.000680);

	glTexCoord2i(0,0);glVertex3f(26.599634, 0.202386, 46.849873);
	glTexCoord2i(1,0);glVertex3f(19.652908, 0.202387, 46.849869);
	glTexCoord2i(1,1);glVertex3f(19.652908, -1.797613, 46.849869);
	glTexCoord2i(0,1);glVertex3f(26.599634, -1.797614, 46.849873);

	glTexCoord2i(0,0);glVertex3f(-28.598095, 0.202403, 46.849865);
	glTexCoord2i(1,0);glVertex3f(-28.603628, 0.202403, 39.346523);
	glTexCoord2i(1,1);glVertex3f(-28.603628, -1.918323, 39.346523);
	glTexCoord2i(0,1);glVertex3f(-28.598095, -1.797597, 46.849865);

	glTexCoord2i(0,0);glVertex3f(26.600105, 0.202386, -46.848637);
	glTexCoord2i(1,0);glVertex3f(26.603628, 0.202386, -39.377449);
	glTexCoord2i(1,1);glVertex3f(26.603626, -1.905964, -39.384220);
	glTexCoord2i(0,1);glVertex3f(26.600105, -1.797614, -46.848637);

	glTexCoord2i(0,0);glVertex3f(-28.603621, 0.202403, -46.852642);
	glTexCoord2i(1,0);glVertex3f(-21.652908, 0.202402, -46.848640);
	glTexCoord2i(1,1);glVertex3f(-21.652908, -1.918340, -46.848640);
	glTexCoord2i(0,1);glVertex3f(-28.603621, -1.797597, -46.852642);

	glTexCoord2i(0,0);glVertex3f(26.603624, 0.202386, -2.000494);
	glTexCoord2i(1,0);glVertex3f(26.603624, 0.202386, 1.999180);
	glTexCoord2i(1,1);glVertex3f(26.603624, -1.905964, 1.992408);
	glTexCoord2i(0,1);glVertex3f(26.603624, -1.905964, -2.007266);

	glTexCoord2i(0,0);glVertex3f(26.603621, 0.202386, 39.378384);
	glTexCoord2i(1,0);glVertex3f(26.599634, 0.202386, 46.849873);
	glTexCoord2i(1,1);glVertex3f(26.599634, -1.797614, 46.849873);
	glTexCoord2i(0,1);glVertex3f(26.603621, -1.905964, 39.371613);

	glTexCoord2i(0,0);glVertex3f(24.603621, 0.202386, 39.378380);
	glTexCoord2i(1,0);glVertex3f(25.603621, 0.202386, 39.378384);
	glTexCoord2i(1,1);glVertex3f(25.603621, 0.202386, 39.378384);
	glTexCoord2i(0,1);glVertex3f(24.603621, 0.202386, 39.378380);

	glTexCoord2i(0,0);glVertex3f(19.652916, 0.202387, -45.848640);
	glTexCoord2i(1,0);glVertex3f(19.652916, 0.202387, -46.848640);
	glTexCoord2i(1,1);glVertex3f(19.652916, 0.202387, -46.848640);
	glTexCoord2i(0,1);glVertex3f(19.652916, 0.202387, -45.848640);

	glTexCoord2i(0,0);glVertex3f(-25.603624, 0.202402, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-24.603624, 0.202402, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-24.603624, 0.202402, -2.001814);
	glTexCoord2i(0,1);glVertex3f(-25.603624, 0.202402, -2.001814);

	glTexCoord2i(0,0);glVertex3f(-21.652908, 0.202402, -44.848640);
	glTexCoord2i(1,0);glVertex3f(-21.652908, 0.202402, -43.848640);
	glTexCoord2i(1,1);glVertex3f(-21.652908, 0.202402, -43.848640);
	glTexCoord2i(0,1);glVertex3f(-21.652908, 0.202402, -44.848640);

	glTexCoord2i(0,0);glVertex3f(19.652908, 0.202387, 45.849869);
	glTexCoord2i(1,0);glVertex3f(19.652908, 0.202387, 44.849869);
	glTexCoord2i(1,1);glVertex3f(19.652908, 0.202387, 44.849869);
	glTexCoord2i(0,1);glVertex3f(19.652908, 0.202387, 45.849869);

	glTexCoord2i(0,0);glVertex3f(26.603628, 0.202386, -39.377449);
	glTexCoord2i(1,0);glVertex3f(25.603628, 0.202386, -39.377449);
	glTexCoord2i(1,1);glVertex3f(25.603628, 0.202386, -39.377449);
	glTexCoord2i(0,1);glVertex3f(26.603628, 0.202386, -39.377449);

	glTexCoord2i(0,0);glVertex3f(24.603624, 0.202386, -2.000494);
	glTexCoord2i(1,0);glVertex3f(25.603624, 0.202386, -2.000494);
	glTexCoord2i(1,1);glVertex3f(25.603624, 0.202386, -2.000494);
	glTexCoord2i(0,1);glVertex3f(24.603624, 0.202386, -2.000494);

	glTexCoord2i(0,0);glVertex3f(-27.603624, 0.202403, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-28.603624, 0.202403, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-28.603624, 0.202403, 2.000680);
	glTexCoord2i(0,1);glVertex3f(-27.603624, 0.202403, 2.000680);

	glTexCoord2i(0,0);glVertex3f(-24.603621, 0.202402, -39.377453);
	glTexCoord2i(1,0);glVertex3f(-25.603621, 0.202402, -39.377457);
	glTexCoord2i(1,1);glVertex3f(-25.603621, 0.202402, -39.377457);
	glTexCoord2i(0,1);glVertex3f(-24.603621, 0.202402, -39.377453);

	glTexCoord2i(0,0);glVertex3f(-21.652916, 0.202402, 44.849869);
	glTexCoord2i(1,0);glVertex3f(-21.652916, 0.202402, 45.849869);
	glTexCoord2i(1,1);glVertex3f(-21.652916, 0.202402, 45.849869);
	glTexCoord2i(0,1);glVertex3f(-21.652916, 0.202402, 44.849869);

	glTexCoord2i(0,0);glVertex3f(19.652916, 0.202387, -43.848640);
	glTexCoord2i(1,0);glVertex3f(19.652916, 0.202387, -44.848640);
	glTexCoord2i(1,1);glVertex3f(19.652916, 0.202387, -44.848640);
	glTexCoord2i(0,1);glVertex3f(19.652916, 0.202387, -43.848640);

	glTexCoord2i(0,0);glVertex3f(25.603628, 0.202386, -39.377449);
	glTexCoord2i(1,0);glVertex3f(24.603628, 0.202386, -39.377453);
	glTexCoord2i(1,1);glVertex3f(24.603628, 0.202386, -39.377453);
	glTexCoord2i(0,1);glVertex3f(25.603628, 0.202386, -39.377449);

	glTexCoord2i(0,0);glVertex3f(-21.652916, 0.202402, 45.849869);
	glTexCoord2i(1,0);glVertex3f(-21.652916, 0.202402, 46.849869);
	glTexCoord2i(1,1);glVertex3f(-21.652916, 0.202402, 46.849869);
	glTexCoord2i(0,1);glVertex3f(-21.652916, 0.202402, 45.849869);

	glTexCoord2i(0,0);glVertex3f(-24.603624, 0.202402, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-25.603624, 0.202402, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-25.603624, 0.202402, 2.000680);
	glTexCoord2i(0,1);glVertex3f(-24.603624, 0.202402, 2.000680);

	glTexCoord2i(0,0);glVertex3f(23.603624, 0.202386, 1.999180);
	glTexCoord2i(1,0);glVertex3f(22.603624, 0.202386, 1.999180);
	glTexCoord2i(1,1);glVertex3f(22.603624, 0.202386, 1.999180);
	glTexCoord2i(0,1);glVertex3f(23.603624, 0.202386, 1.999180);

	glTexCoord2i(0,0);glVertex3f(-26.603624, 0.202402, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-25.603624, 0.202402, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-25.603624, 0.202402, -2.001814);
	glTexCoord2i(0,1);glVertex3f(-26.603624, 0.202402, -2.001814);

	glTexCoord2i(0,0);glVertex3f(26.603624, 0.202386, 1.999180);
	glTexCoord2i(1,0);glVertex3f(26.603624, 0.202386, -2.000494);
	glTexCoord2i(1,1);glVertex3f(26.603624, 0.202386, -2.000494);
	glTexCoord2i(0,1);glVertex3f(26.603624, 0.202386, 1.999180);

	glTexCoord2i(0,0);glVertex3f(-21.652908, 0.202402, -46.848640);
	glTexCoord2i(1,0);glVertex3f(-21.652908, 0.202402, -45.848640);
	glTexCoord2i(1,1);glVertex3f(-21.652908, 0.202402, -45.848640);
	glTexCoord2i(0,1);glVertex3f(-21.652908, 0.202402, -46.848640);

	glTexCoord2i(0,0);glVertex3f(-21.652908, 0.202402, -45.848640);
	glTexCoord2i(1,0);glVertex3f(-21.652908, 0.202402, -44.848640);
	glTexCoord2i(1,1);glVertex3f(-21.652908, 0.202402, -44.848640);
	glTexCoord2i(0,1);glVertex3f(-21.652908, 0.202402, -45.848640);

	glTexCoord2i(0,0);glVertex3f(25.603624, 0.202386, -2.000494);
	glTexCoord2i(1,0);glVertex3f(26.603624, 0.202386, -2.000494);
	glTexCoord2i(1,1);glVertex3f(26.603624, 0.202386, -2.000494);
	glTexCoord2i(0,1);glVertex3f(25.603624, 0.202386, -2.000494);

	glTexCoord2i(0,0);glVertex3f(-25.603628, 0.202402, 39.346523);
	glTexCoord2i(1,0);glVertex3f(-24.603628, 0.202402, 39.346527);
	glTexCoord2i(1,1);glVertex3f(-24.603628, 0.202402, 39.346527);
	glTexCoord2i(0,1);glVertex3f(-25.603628, 0.202402, 39.346523);

	glTexCoord2i(0,0);glVertex3f(22.603621, 0.202386, 39.378380);
	glTexCoord2i(1,0);glVertex3f(23.603621, 0.202386, 39.378380);
	glTexCoord2i(1,1);glVertex3f(23.603621, 0.202386, 39.378380);
	glTexCoord2i(0,1);glVertex3f(22.603621, 0.202386, 39.378380);

	glTexCoord2i(0,0);glVertex3f(-27.603621, 0.202403, -39.377457);
	glTexCoord2i(1,0);glVertex3f(-28.603621, 0.202403, -39.377457);
	glTexCoord2i(1,1);glVertex3f(-28.603621, 0.202403, -39.377457);
	glTexCoord2i(0,1);glVertex3f(-27.603621, 0.202403, -39.377457);

	glTexCoord2i(0,0);glVertex3f(-25.603621, 0.202402, -39.377457);
	glTexCoord2i(1,0);glVertex3f(-26.603621, 0.202402, -39.377457);
	glTexCoord2i(1,1);glVertex3f(-26.603621, 0.202402, -39.377457);
	glTexCoord2i(0,1);glVertex3f(-25.603621, 0.202402, -39.377457);

	glTexCoord2i(0,0);glVertex3f(19.652916, 0.202387, -44.848640);
	glTexCoord2i(1,0);glVertex3f(19.652916, 0.202387, -45.848640);
	glTexCoord2i(1,1);glVertex3f(19.652916, 0.202387, -45.848640);
	glTexCoord2i(0,1);glVertex3f(19.652916, 0.202387, -44.848640);

	glTexCoord2i(0,0);glVertex3f(19.652908, 0.202387, 43.849869);
	glTexCoord2i(1,0);glVertex3f(19.652908, 0.202387, 42.849869);
	glTexCoord2i(1,1);glVertex3f(19.652908, 0.202387, 42.849869);
	glTexCoord2i(0,1);glVertex3f(19.652908, 0.202387, 43.849869);

	glTexCoord2i(0,0);glVertex3f(22.603624, 0.202386, -2.000494);
	glTexCoord2i(1,0);glVertex3f(23.603624, 0.202386, -2.000494);
	glTexCoord2i(1,1);glVertex3f(23.603624, 0.202386, -2.000494);
	glTexCoord2i(0,1);glVertex3f(22.603624, 0.202386, -2.000494);

	glTexCoord2i(0,0);glVertex3f(19.652908, 0.202387, 46.849869);
	glTexCoord2i(1,0);glVertex3f(19.652908, 0.202387, 45.849869);
	glTexCoord2i(1,1);glVertex3f(19.652908, 0.202387, 45.849869);
	glTexCoord2i(0,1);glVertex3f(19.652908, 0.202387, 46.849869);

	glTexCoord2i(0,0);glVertex3f(-25.603624, 0.202402, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-26.603624, 0.202402, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-26.603624, 0.202402, 2.000680);
	glTexCoord2i(0,1);glVertex3f(-25.603624, 0.202402, 2.000680);

	glTexCoord2i(0,0);glVertex3f(24.603624, 0.202386, 1.999180);
	glTexCoord2i(1,0);glVertex3f(23.603624, 0.202386, 1.999180);
	glTexCoord2i(1,1);glVertex3f(23.603624, 0.202386, 1.999180);
	glTexCoord2i(0,1);glVertex3f(24.603624, 0.202386, 1.999180);

	glTexCoord2i(0,0);glVertex3f(-28.603624, 0.202403, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-28.603624, 0.202403, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-28.603624, 0.202403, 2.000680);
	glTexCoord2i(0,1);glVertex3f(-28.603624, 0.202403, -2.001814);

	glTexCoord2i(0,0);glVertex3f(-21.652916, 0.202402, 42.849869);
	glTexCoord2i(1,0);glVertex3f(-21.652916, 0.202402, 43.849869);
	glTexCoord2i(1,1);glVertex3f(-21.652916, 0.202402, 43.849869);
	glTexCoord2i(0,1);glVertex3f(-21.652916, 0.202402, 42.849869);

	glTexCoord2i(0,0);glVertex3f(-27.603624, 0.202403, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-26.603624, 0.202402, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-26.603624, 0.202402, -2.001814);
	glTexCoord2i(0,1);glVertex3f(-27.603624, 0.202403, -2.001814);

	glTexCoord2i(0,0);glVertex3f(23.603628, 0.202386, -39.377453);
	glTexCoord2i(1,0);glVertex3f(22.603628, 0.202386, -39.377453);
	glTexCoord2i(1,1);glVertex3f(22.603628, 0.202386, -39.377453);
	glTexCoord2i(0,1);glVertex3f(23.603628, 0.202386, -39.377453);

	glTexCoord2i(0,0);glVertex3f(-26.603628, 0.202402, 39.346523);
	glTexCoord2i(1,0);glVertex3f(-25.603628, 0.202402, 39.346523);
	glTexCoord2i(1,1);glVertex3f(-25.603628, 0.202402, 39.346523);
	glTexCoord2i(0,1);glVertex3f(-26.603628, 0.202402, 39.346523);

	glTexCoord2i(0,0);glVertex3f(25.603621, 0.202386, 39.378384);
	glTexCoord2i(1,0);glVertex3f(26.603621, 0.202386, 39.378384);
	glTexCoord2i(1,1);glVertex3f(26.603621, 0.202386, 39.378384);
	glTexCoord2i(0,1);glVertex3f(25.603621, 0.202386, 39.378384);

	glTexCoord2i(0,0);glVertex3f(23.603621, 0.202386, 39.378380);
	glTexCoord2i(1,0);glVertex3f(24.603621, 0.202386, 39.378380);
	glTexCoord2i(1,1);glVertex3f(24.603621, 0.202386, 39.378380);
	glTexCoord2i(0,1);glVertex3f(23.603621, 0.202386, 39.378380);

	glTexCoord2i(0,0);glVertex3f(-26.603621, 0.202402, -39.377457);
	glTexCoord2i(1,0);glVertex3f(-27.603621, 0.202403, -39.377457);
	glTexCoord2i(1,1);glVertex3f(-27.603621, 0.202403, -39.377457);
	glTexCoord2i(0,1);glVertex3f(-26.603621, 0.202402, -39.377457);

	glTexCoord2i(0,0);glVertex3f(-28.603624, 0.202403, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-27.603624, 0.202403, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-27.603624, 0.202403, -2.001814);
	glTexCoord2i(0,1);glVertex3f(-28.603624, 0.202403, -2.001814);

	glTexCoord2i(0,0);glVertex3f(-21.652908, 0.202402, -43.848640);
	glTexCoord2i(1,0);glVertex3f(-21.652908, 0.202402, -42.848640);
	glTexCoord2i(1,1);glVertex3f(-21.652908, 0.202402, -42.848640);
	glTexCoord2i(0,1);glVertex3f(-21.652908, 0.202402, -43.848640);

	glTexCoord2i(0,0);glVertex3f(19.652908, 0.202387, 44.849869);
	glTexCoord2i(1,0);glVertex3f(19.652908, 0.202387, 43.849869);
	glTexCoord2i(1,1);glVertex3f(19.652908, 0.202387, 43.849869);
	glTexCoord2i(0,1);glVertex3f(19.652908, 0.202387, 44.849869);

	glTexCoord2i(0,0);glVertex3f(23.603624, 0.202386, -2.000494);
	glTexCoord2i(1,0);glVertex3f(24.603624, 0.202386, -2.000494);
	glTexCoord2i(1,1);glVertex3f(24.603624, 0.202386, -2.000494);
	glTexCoord2i(0,1);glVertex3f(23.603624, 0.202386, -2.000494);

	glTexCoord2i(0,0);glVertex3f(-28.603628, 0.202403, 39.346523);
	glTexCoord2i(1,0);glVertex3f(-27.603628, 0.202403, 39.346523);
	glTexCoord2i(1,1);glVertex3f(-27.603628, 0.202403, 39.346523);
	glTexCoord2i(0,1);glVertex3f(-28.603628, 0.202403, 39.346523);

	glTexCoord2i(0,0);glVertex3f(-26.603624, 0.202402, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-27.603624, 0.202403, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-27.603624, 0.202403, 2.000680);
	glTexCoord2i(0,1);glVertex3f(-26.603624, 0.202402, 2.000680);

	glTexCoord2i(0,0);glVertex3f(25.603624, 0.202386, 1.999180);
	glTexCoord2i(1,0);glVertex3f(24.603624, 0.202386, 1.999180);
	glTexCoord2i(1,1);glVertex3f(24.603624, 0.202386, 1.999180);
	glTexCoord2i(0,1);glVertex3f(25.603624, 0.202386, 1.999180);

	glTexCoord2i(0,0);glVertex3f(19.652916, 0.202387, -42.848640);
	glTexCoord2i(1,0);glVertex3f(19.652916, 0.202387, -43.848640);
	glTexCoord2i(1,1);glVertex3f(19.652916, 0.202387, -43.848640);
	glTexCoord2i(0,1);glVertex3f(19.652916, 0.202387, -42.848640);

	glTexCoord2i(0,0);glVertex3f(-21.652916, 0.202402, 43.849869);
	glTexCoord2i(1,0);glVertex3f(-21.652916, 0.202402, 44.849869);
	glTexCoord2i(1,1);glVertex3f(-21.652916, 0.202402, 44.849869);
	glTexCoord2i(0,1);glVertex3f(-21.652916, 0.202402, 43.849869);

	glTexCoord2i(0,0);glVertex3f(24.603628, 0.202386, -39.377453);
	glTexCoord2i(1,0);glVertex3f(23.603628, 0.202386, -39.377453);
	glTexCoord2i(1,1);glVertex3f(23.603628, 0.202386, -39.377453);
	glTexCoord2i(0,1);glVertex3f(24.603628, 0.202386, -39.377453);

	glTexCoord2i(0,0);glVertex3f(26.603624, 0.202386, 1.999180);
	glTexCoord2i(1,0);glVertex3f(25.603624, 0.202386, 1.999180);
	glTexCoord2i(1,1);glVertex3f(25.603624, 0.202386, 1.999180);
	glTexCoord2i(0,1);glVertex3f(26.603624, 0.202386, 1.999180);

	glTexCoord2i(0,0);glVertex3f(-27.603628, 0.202403, 39.346523);
	glTexCoord2i(1,0);glVertex3f(-26.603628, 0.202402, 39.346523);
	glTexCoord2i(1,1);glVertex3f(-26.603628, 0.202402, 39.346523);
	glTexCoord2i(0,1);glVertex3f(-27.603628, 0.202403, 39.346523);

	glTexCoord2i(0,0);glVertex3f(-21.652908, 0.202402, -45.848640);
	glTexCoord2i(1,0);glVertex3f(-21.652908, 0.202402, -44.848640);
	glTexCoord2i(1,1);glVertex3f(-21.652908, 0.202402, -44.848640);
	glTexCoord2i(0,1);glVertex3f(-21.652908, 0.202402, -45.848640);

	glTexCoord2i(0,0);glVertex3f(25.603624, 0.202386, -2.000494);
	glTexCoord2i(1,0);glVertex3f(26.603624, 0.202386, -2.000494);
	glTexCoord2i(1,1);glVertex3f(26.603624, 0.202386, -2.000494);
	glTexCoord2i(0,1);glVertex3f(25.603624, 0.202386, -2.000494);

	glTexCoord2i(0,0);glVertex3f(-25.603628, 0.202402, 39.346523);
	glTexCoord2i(1,0);glVertex3f(-24.603628, 0.202402, 39.346527);
	glTexCoord2i(1,1);glVertex3f(-24.603628, 0.202402, 39.346527);
	glTexCoord2i(0,1);glVertex3f(-25.603628, 0.202402, 39.346523);

	glTexCoord2i(0,0);glVertex3f(22.603621, 0.202386, 39.378380);
	glTexCoord2i(1,0);glVertex3f(23.603621, 0.202386, 39.378380);
	glTexCoord2i(1,1);glVertex3f(23.603621, 0.202386, 39.378380);
	glTexCoord2i(0,1);glVertex3f(22.603621, 0.202386, 39.378380);

	glTexCoord2i(0,0);glVertex3f(-27.603621, 0.202403, -39.377457);
	glTexCoord2i(1,0);glVertex3f(-28.603621, 0.202403, -39.377457);
	glTexCoord2i(1,1);glVertex3f(-28.603621, 0.202403, -39.377457);
	glTexCoord2i(0,1);glVertex3f(-27.603621, 0.202403, -39.377457);

	glTexCoord2i(0,0);glVertex3f(-25.603621, 0.202402, -39.377457);
	glTexCoord2i(1,0);glVertex3f(-26.603621, 0.202402, -39.377457);
	glTexCoord2i(1,1);glVertex3f(-26.603621, 0.202402, -39.377457);
	glTexCoord2i(0,1);glVertex3f(-25.603621, 0.202402, -39.377457);

	glTexCoord2i(0,0);glVertex3f(19.652916, 0.202387, -44.848640);
	glTexCoord2i(1,0);glVertex3f(19.652916, 0.202387, -45.848640);
	glTexCoord2i(1,1);glVertex3f(19.652916, 0.202387, -45.848640);
	glTexCoord2i(0,1);glVertex3f(19.652916, 0.202387, -44.848640);

	glTexCoord2i(0,0);glVertex3f(26.603624, 0.202386, 1.999180);
	glTexCoord2i(1,0);glVertex3f(26.603624, 0.202386, -2.000494);
	glTexCoord2i(1,1);glVertex3f(26.603624, 0.202386, -2.000494);
	glTexCoord2i(0,1);glVertex3f(26.603624, 0.202386, 1.999180);

	glTexCoord2i(0,0);glVertex3f(19.652908, 0.202387, 43.849869);
	glTexCoord2i(1,0);glVertex3f(19.652908, 0.202387, 42.849869);
	glTexCoord2i(1,1);glVertex3f(19.652908, 0.202387, 42.849869);
	glTexCoord2i(0,1);glVertex3f(19.652908, 0.202387, 43.849869);

	glTexCoord2i(0,0);glVertex3f(22.603624, 0.202386, -2.000494);
	glTexCoord2i(1,0);glVertex3f(23.603624, 0.202386, -2.000494);
	glTexCoord2i(1,1);glVertex3f(23.603624, 0.202386, -2.000494);
	glTexCoord2i(0,1);glVertex3f(22.603624, 0.202386, -2.000494);

	glTexCoord2i(0,0);glVertex3f(19.652908, 0.202387, 46.849869);
	glTexCoord2i(1,0);glVertex3f(19.652908, 0.202387, 45.849869);
	glTexCoord2i(1,1);glVertex3f(19.652908, 0.202387, 45.849869);
	glTexCoord2i(0,1);glVertex3f(19.652908, 0.202387, 46.849869);

	glTexCoord2i(0,0);glVertex3f(-25.603624, 0.202402, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-26.603624, 0.202402, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-26.603624, 0.202402, 2.000680);
	glTexCoord2i(0,1);glVertex3f(-25.603624, 0.202402, 2.000680);

	glTexCoord2i(0,0);glVertex3f(24.603624, 0.202386, 1.999180);
	glTexCoord2i(1,0);glVertex3f(23.603624, 0.202386, 1.999180);
	glTexCoord2i(1,1);glVertex3f(23.603624, 0.202386, 1.999180);
	glTexCoord2i(0,1);glVertex3f(24.603624, 0.202386, 1.999180);

	glTexCoord2i(0,0);glVertex3f(-21.652916, 0.202402, 42.849869);
	glTexCoord2i(1,0);glVertex3f(-21.652916, 0.202402, 43.849869);
	glTexCoord2i(1,1);glVertex3f(-21.652916, 0.202402, 43.849869);
	glTexCoord2i(0,1);glVertex3f(-21.652916, 0.202402, 42.849869);

	glTexCoord2i(0,0);glVertex3f(-27.603624, 0.202403, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-26.603624, 0.202402, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-26.603624, 0.202402, -2.001814);
	glTexCoord2i(0,1);glVertex3f(-27.603624, 0.202403, -2.001814);

	glTexCoord2i(0,0);glVertex3f(23.603628, 0.202386, -39.377453);
	glTexCoord2i(1,0);glVertex3f(22.603628, 0.202386, -39.377453);
	glTexCoord2i(1,1);glVertex3f(22.603628, 0.202386, -39.377453);
	glTexCoord2i(0,1);glVertex3f(23.603628, 0.202386, -39.377453);

	glTexCoord2i(0,0);glVertex3f(-26.603628, 0.202402, 39.346523);
	glTexCoord2i(1,0);glVertex3f(-25.603628, 0.202402, 39.346523);
	glTexCoord2i(1,1);glVertex3f(-25.603628, 0.202402, 39.346523);
	glTexCoord2i(0,1);glVertex3f(-26.603628, 0.202402, 39.346523);

	glTexCoord2i(0,0);glVertex3f(25.603621, 0.202386, 39.378384);
	glTexCoord2i(1,0);glVertex3f(26.603621, 0.202386, 39.378384);
	glTexCoord2i(1,1);glVertex3f(26.603621, 0.202386, 39.378384);
	glTexCoord2i(0,1);glVertex3f(25.603621, 0.202386, 39.378384);

	glTexCoord2i(0,0);glVertex3f(23.603621, 0.202386, 39.378380);
	glTexCoord2i(1,0);glVertex3f(24.603621, 0.202386, 39.378380);
	glTexCoord2i(1,1);glVertex3f(24.603621, 0.202386, 39.378380);
	glTexCoord2i(0,1);glVertex3f(23.603621, 0.202386, 39.378380);

	glTexCoord2i(0,0);glVertex3f(-28.603624, 0.202403, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-27.603624, 0.202403, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-27.603624, 0.202403, -2.001814);
	glTexCoord2i(0,1);glVertex3f(-28.603624, 0.202403, -2.001814);

	glTexCoord2i(0,0);glVertex3f(-26.603621, 0.202402, -39.377457);
	glTexCoord2i(1,0);glVertex3f(-27.603621, 0.202403, -39.377457);
	glTexCoord2i(1,1);glVertex3f(-27.603621, 0.202403, -39.377457);
	glTexCoord2i(0,1);glVertex3f(-26.603621, 0.202402, -39.377457);

	glTexCoord2i(0,0);glVertex3f(-21.652908, 0.202402, -43.848640);
	glTexCoord2i(1,0);glVertex3f(-21.652908, 0.202402, -42.848640);
	glTexCoord2i(1,1);glVertex3f(-21.652908, 0.202402, -42.848640);
	glTexCoord2i(0,1);glVertex3f(-21.652908, 0.202402, -43.848640);

	glTexCoord2i(0,0);glVertex3f(-28.603624, 0.202403, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-28.603624, 0.202403, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-28.603624, 0.202403, 2.000680);
	glTexCoord2i(0,1);glVertex3f(-28.603624, 0.202403, -2.001814);

	glTexCoord2i(0,0);glVertex3f(19.652908, 0.202387, 44.849869);
	glTexCoord2i(1,0);glVertex3f(19.652908, 0.202387, 43.849869);
	glTexCoord2i(1,1);glVertex3f(19.652908, 0.202387, 43.849869);
	glTexCoord2i(0,1);glVertex3f(19.652908, 0.202387, 44.849869);

	glTexCoord2i(0,0);glVertex3f(23.603624, 0.202386, -2.000494);
	glTexCoord2i(1,0);glVertex3f(24.603624, 0.202386, -2.000494);
	glTexCoord2i(1,1);glVertex3f(24.603624, 0.202386, -2.000494);
	glTexCoord2i(0,1);glVertex3f(23.603624, 0.202386, -2.000494);

	glTexCoord2i(0,0);glVertex3f(-26.603624, 0.202402, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-27.603624, 0.202403, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-27.603624, 0.202403, 2.000680);
	glTexCoord2i(0,1);glVertex3f(-26.603624, 0.202402, 2.000680);

	glTexCoord2i(0,0);glVertex3f(-28.603628, 0.202403, 39.346523);
	glTexCoord2i(1,0);glVertex3f(-27.603628, 0.202403, 39.346523);
	glTexCoord2i(1,1);glVertex3f(-27.603628, 0.202403, 39.346523);
	glTexCoord2i(0,1);glVertex3f(-28.603628, 0.202403, 39.346523);

	glTexCoord2i(0,0);glVertex3f(25.603624, 0.202386, 1.999180);
	glTexCoord2i(1,0);glVertex3f(24.603624, 0.202386, 1.999180);
	glTexCoord2i(1,1);glVertex3f(24.603624, 0.202386, 1.999180);
	glTexCoord2i(0,1);glVertex3f(25.603624, 0.202386, 1.999180);

	glTexCoord2i(0,0);glVertex3f(19.652916, 0.202387, -42.848640);
	glTexCoord2i(1,0);glVertex3f(19.652916, 0.202387, -43.848640);
	glTexCoord2i(1,1);glVertex3f(19.652916, 0.202387, -43.848640);
	glTexCoord2i(0,1);glVertex3f(19.652916, 0.202387, -42.848640);

	glTexCoord2i(0,0);glVertex3f(-21.652916, 0.202402, 43.849869);
	glTexCoord2i(1,0);glVertex3f(-21.652916, 0.202402, 44.849869);
	glTexCoord2i(1,1);glVertex3f(-21.652916, 0.202402, 44.849869);
	glTexCoord2i(0,1);glVertex3f(-21.652916, 0.202402, 43.849869);

	glTexCoord2i(0,0);glVertex3f(24.603628, 0.202386, -39.377453);
	glTexCoord2i(1,0);glVertex3f(23.603628, 0.202386, -39.377453);
	glTexCoord2i(1,1);glVertex3f(23.603628, 0.202386, -39.377453);
	glTexCoord2i(0,1);glVertex3f(24.603628, 0.202386, -39.377453);

	glTexCoord2i(0,0);glVertex3f(26.603624, 0.202386, 1.999180);
	glTexCoord2i(1,0);glVertex3f(25.603624, 0.202386, 1.999180);
	glTexCoord2i(1,1);glVertex3f(25.603624, 0.202386, 1.999180);
	glTexCoord2i(0,1);glVertex3f(26.603624, 0.202386, 1.999180);

	glTexCoord2i(0,0);glVertex3f(-27.603628, 0.202403, 39.346523);
	glTexCoord2i(1,0);glVertex3f(-26.603628, 0.202402, 39.346523);
	glTexCoord2i(1,1);glVertex3f(-26.603628, 0.202402, 39.346523);
	glTexCoord2i(0,1);glVertex3f(-27.603628, 0.202403, 39.346523);

	glTexCoord2i(0,0);glVertex3f(24.603621, 0.202386, 39.378380);
	glTexCoord2i(1,0);glVertex3f(25.603621, 0.202386, 39.378384);
	glTexCoord2i(1,1);glVertex3f(25.603621, 0.202386, 39.378384);
	glTexCoord2i(0,1);glVertex3f(24.603621, 0.202386, 39.378380);

	glTexCoord2i(0,0);glVertex3f(19.652916, 0.202387, -45.848640);
	glTexCoord2i(1,0);glVertex3f(19.652916, 0.202387, -46.848640);
	glTexCoord2i(1,1);glVertex3f(19.652916, 0.202387, -46.848640);
	glTexCoord2i(0,1);glVertex3f(19.652916, 0.202387, -45.848640);

	glTexCoord2i(0,0);glVertex3f(-25.603624, 0.202402, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-24.603624, 0.202402, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-24.603624, 0.202402, -2.001814);
	glTexCoord2i(0,1);glVertex3f(-25.603624, 0.202402, -2.001814);

	glTexCoord2i(0,0);glVertex3f(-21.652908, 0.202402, -44.848640);
	glTexCoord2i(1,0);glVertex3f(-21.652908, 0.202402, -43.848640);
	glTexCoord2i(1,1);glVertex3f(-21.652908, 0.202402, -43.848640);
	glTexCoord2i(0,1);glVertex3f(-21.652908, 0.202402, -44.848640);

	glTexCoord2i(0,0);glVertex3f(26.603628, 0.202386, -39.377449);
	glTexCoord2i(1,0);glVertex3f(25.603628, 0.202386, -39.377449);
	glTexCoord2i(1,1);glVertex3f(25.603628, 0.202386, -39.377449);
	glTexCoord2i(0,1);glVertex3f(26.603628, 0.202386, -39.377449);

	glTexCoord2i(0,0);glVertex3f(19.652908, 0.202387, 45.849869);
	glTexCoord2i(1,0);glVertex3f(19.652908, 0.202387, 44.849869);
	glTexCoord2i(1,1);glVertex3f(19.652908, 0.202387, 44.849869);
	glTexCoord2i(0,1);glVertex3f(19.652908, 0.202387, 45.849869);

	glTexCoord2i(0,0);glVertex3f(24.603624, 0.202386, -2.000494);
	glTexCoord2i(1,0);glVertex3f(25.603624, 0.202386, -2.000494);
	glTexCoord2i(1,1);glVertex3f(25.603624, 0.202386, -2.000494);
	glTexCoord2i(0,1);glVertex3f(24.603624, 0.202386, -2.000494);

	glTexCoord2i(0,0);glVertex3f(-27.603624, 0.202403, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-28.603624, 0.202403, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-28.603624, 0.202403, 2.000680);
	glTexCoord2i(0,1);glVertex3f(-27.603624, 0.202403, 2.000680);

	glTexCoord2i(0,0);glVertex3f(-24.603621, 0.202402, -39.377453);
	glTexCoord2i(1,0);glVertex3f(-25.603621, 0.202402, -39.377457);
	glTexCoord2i(1,1);glVertex3f(-25.603621, 0.202402, -39.377457);
	glTexCoord2i(0,1);glVertex3f(-24.603621, 0.202402, -39.377453);

	glTexCoord2i(0,0);glVertex3f(-21.652916, 0.202402, 44.849869);
	glTexCoord2i(1,0);glVertex3f(-21.652916, 0.202402, 45.849869);
	glTexCoord2i(1,1);glVertex3f(-21.652916, 0.202402, 45.849869);
	glTexCoord2i(0,1);glVertex3f(-21.652916, 0.202402, 44.849869);

	glTexCoord2i(0,0);glVertex3f(19.652916, 0.202387, -43.848640);
	glTexCoord2i(1,0);glVertex3f(19.652916, 0.202387, -44.848640);
	glTexCoord2i(1,1);glVertex3f(19.652916, 0.202387, -44.848640);
	glTexCoord2i(0,1);glVertex3f(19.652916, 0.202387, -43.848640);

	glTexCoord2i(0,0);glVertex3f(25.603628, 0.202386, -39.377449);
	glTexCoord2i(1,0);glVertex3f(24.603628, 0.202386, -39.377453);
	glTexCoord2i(1,1);glVertex3f(24.603628, 0.202386, -39.377453);
	glTexCoord2i(0,1);glVertex3f(25.603628, 0.202386, -39.377449);

	glTexCoord2i(0,0);glVertex3f(-24.603624, 0.202402, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-25.603624, 0.202402, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-25.603624, 0.202402, 2.000680);
	glTexCoord2i(0,1);glVertex3f(-24.603624, 0.202402, 2.000680);

	glTexCoord2i(0,0);glVertex3f(-21.652916, 0.202402, 45.849869);
	glTexCoord2i(1,0);glVertex3f(-21.652916, 0.202402, 46.849869);
	glTexCoord2i(1,1);glVertex3f(-21.652916, 0.202402, 46.849869);
	glTexCoord2i(0,1);glVertex3f(-21.652916, 0.202402, 45.849869);

	glTexCoord2i(0,0);glVertex3f(23.603624, 0.202386, 1.999180);
	glTexCoord2i(1,0);glVertex3f(22.603624, 0.202386, 1.999180);
	glTexCoord2i(1,1);glVertex3f(22.603624, 0.202386, 1.999180);
	glTexCoord2i(0,1);glVertex3f(23.603624, 0.202386, 1.999180);

	glTexCoord2i(0,0);glVertex3f(-21.652908, 0.202402, -46.848640);
	glTexCoord2i(1,0);glVertex3f(-21.652908, 0.202402, -45.848640);
	glTexCoord2i(1,1);glVertex3f(-21.652908, 0.202402, -45.848640);
	glTexCoord2i(0,1);glVertex3f(-21.652908, 0.202402, -46.848640);

	glTexCoord2i(0,0);glVertex3f(-26.603624, 0.202402, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-25.603624, 0.202402, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-25.603624, 0.202402, -2.001814);
	glTexCoord2i(0,1);glVertex3f(-26.603624, 0.202402, -2.001814);

	glTexCoord2i(0,0);glVertex3f(24.603621, 0.202386, 39.378380);
	glTexCoord2i(1,0);glVertex3f(25.603621, 0.202386, 39.378384);
	glTexCoord2i(1,1);glVertex3f(25.603621, 0.073704, 39.378384);
	glTexCoord2i(0,1);glVertex3f(24.603621, 0.073704, 39.378380);

	glTexCoord2i(0,0);glVertex3f(19.652916, 0.202387, -45.848640);
	glTexCoord2i(1,0);glVertex3f(19.652916, 0.202387, -46.848640);
	glTexCoord2i(1,1);glVertex3f(19.652916, 0.073705, -46.848640);
	glTexCoord2i(0,1);glVertex3f(19.652916, 0.073705, -45.848640);

	glTexCoord2i(0,0);glVertex3f(-25.603624, 0.202402, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-24.603624, 0.202402, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-24.603624, 0.073720, -2.001814);
	glTexCoord2i(0,1);glVertex3f(-25.603624, 0.073720, -2.001814);

	glTexCoord2i(0,0);glVertex3f(-21.652908, 0.202402, -44.848640);
	glTexCoord2i(1,0);glVertex3f(-21.652908, 0.202402, -43.848640);
	glTexCoord2i(1,1);glVertex3f(-21.652908, 0.073720, -43.848640);
	glTexCoord2i(0,1);glVertex3f(-21.652908, 0.073720, -44.848640);

	glTexCoord2i(0,0);glVertex3f(26.603628, 0.202386, -39.377449);
	glTexCoord2i(1,0);glVertex3f(25.603628, 0.202386, -39.377449);
	glTexCoord2i(1,1);glVertex3f(25.603628, 0.073704, -39.377449);
	glTexCoord2i(0,1);glVertex3f(26.603628, 0.073704, -39.377449);

	glTexCoord2i(0,0);glVertex3f(19.652908, 0.202387, 45.849869);
	glTexCoord2i(1,0);glVertex3f(19.652908, 0.202387, 44.849869);
	glTexCoord2i(1,1);glVertex3f(19.652908, 0.073705, 44.849869);
	glTexCoord2i(0,1);glVertex3f(19.652908, 0.073705, 45.849869);

	glTexCoord2i(0,0);glVertex3f(24.603624, 0.202386, -2.000494);
	glTexCoord2i(1,0);glVertex3f(25.603624, 0.202386, -2.000494);
	glTexCoord2i(1,1);glVertex3f(25.603624, 0.073704, -2.000494);
	glTexCoord2i(0,1);glVertex3f(24.603624, 0.073704, -2.000494);

	glTexCoord2i(0,0);glVertex3f(-27.603624, 0.202403, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-28.603624, 0.202403, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-28.603624, 0.073721, 2.000680);
	glTexCoord2i(0,1);glVertex3f(-27.603624, 0.073720, 2.000680);

	glTexCoord2i(0,0);glVertex3f(-24.603621, 0.202402, -39.377453);
	glTexCoord2i(1,0);glVertex3f(-25.603621, 0.202402, -39.377457);
	glTexCoord2i(1,1);glVertex3f(-25.603621, 0.073720, -39.377457);
	glTexCoord2i(0,1);glVertex3f(-24.603621, 0.073720, -39.377453);

	glTexCoord2i(0,0);glVertex3f(-21.652916, 0.202402, 44.849869);
	glTexCoord2i(1,0);glVertex3f(-21.652916, 0.202402, 45.849869);
	glTexCoord2i(1,1);glVertex3f(-21.652916, 0.073720, 45.849869);
	glTexCoord2i(0,1);glVertex3f(-21.652916, 0.073720, 44.849869);

	glTexCoord2i(0,0);glVertex3f(19.652916, 0.202387, -43.848640);
	glTexCoord2i(1,0);glVertex3f(19.652916, 0.202387, -44.848640);
	glTexCoord2i(1,1);glVertex3f(19.652916, 0.073705, -44.848640);
	glTexCoord2i(0,1);glVertex3f(19.652916, 0.073705, -43.848640);

	glTexCoord2i(0,0);glVertex3f(25.603628, 0.202386, -39.377449);
	glTexCoord2i(1,0);glVertex3f(24.603628, 0.202386, -39.377453);
	glTexCoord2i(1,1);glVertex3f(24.603628, 0.073704, -39.377453);
	glTexCoord2i(0,1);glVertex3f(25.603628, 0.073704, -39.377449);

	glTexCoord2i(0,0);glVertex3f(-24.603624, 0.202402, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-25.603624, 0.202402, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-25.603624, 0.073720, 2.000680);
	glTexCoord2i(0,1);glVertex3f(-24.603624, 0.073720, 2.000680);

	glTexCoord2i(0,0);glVertex3f(-21.652916, 0.202402, 45.849869);
	glTexCoord2i(1,0);glVertex3f(-21.652916, 0.202402, 46.849869);
	glTexCoord2i(1,1);glVertex3f(-21.652916, 0.073720, 46.849869);
	glTexCoord2i(0,1);glVertex3f(-21.652916, 0.073720, 45.849869);

	glTexCoord2i(0,0);glVertex3f(23.603624, 0.202386, 1.999180);
	glTexCoord2i(1,0);glVertex3f(22.603624, 0.202386, 1.999180);
	glTexCoord2i(1,1);glVertex3f(22.603624, 0.073704, 1.999180);
	glTexCoord2i(0,1);glVertex3f(23.603624, 0.073704, 1.999180);

	glTexCoord2i(0,0);glVertex3f(-21.652908, 0.202402, -46.848640);
	glTexCoord2i(1,0);glVertex3f(-21.652908, 0.202402, -45.848640);
	glTexCoord2i(1,1);glVertex3f(-21.652908, 0.073720, -45.848640);
	glTexCoord2i(0,1);glVertex3f(-21.652908, 0.073720, -46.848640);

	glTexCoord2i(0,0);glVertex3f(-26.603624, 0.202402, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-25.603624, 0.202402, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-25.603624, 0.073720, -2.001814);
	glTexCoord2i(0,1);glVertex3f(-26.603624, 0.073720, -2.001814);

	glTexCoord2i(0,0);glVertex3f(-21.652908, 0.202402, -45.848640);
	glTexCoord2i(1,0);glVertex3f(-21.652908, 0.202402, -44.848640);
	glTexCoord2i(1,1);glVertex3f(-21.652908, 0.073720, -44.848640);
	glTexCoord2i(0,1);glVertex3f(-21.652908, 0.073720, -45.848640);

	glTexCoord2i(0,0);glVertex3f(25.603624, 0.202386, -2.000494);
	glTexCoord2i(1,0);glVertex3f(26.603624, 0.202386, -2.000494);
	glTexCoord2i(1,1);glVertex3f(26.603624, 0.073704, -2.000494);
	glTexCoord2i(0,1);glVertex3f(25.603624, 0.073704, -2.000494);

	glTexCoord2i(0,0);glVertex3f(-25.603628, 0.202402, 39.346523);
	glTexCoord2i(1,0);glVertex3f(-24.603628, 0.202402, 39.346527);
	glTexCoord2i(1,1);glVertex3f(-24.603628, 0.073720, 39.346527);
	glTexCoord2i(0,1);glVertex3f(-25.603628, 0.073720, 39.346523);

	glTexCoord2i(0,0);glVertex3f(22.603621, 0.202386, 39.378380);
	glTexCoord2i(1,0);glVertex3f(23.603621, 0.202386, 39.378380);
	glTexCoord2i(1,1);glVertex3f(23.603621, 0.073704, 39.378380);
	glTexCoord2i(0,1);glVertex3f(22.603621, 0.073704, 39.378380);

	glTexCoord2i(0,0);glVertex3f(-27.603621, 0.202403, -39.377457);
	glTexCoord2i(1,0);glVertex3f(-28.603621, 0.202403, -39.377457);
	glTexCoord2i(1,1);glVertex3f(-28.603621, 0.073721, -39.377457);
	glTexCoord2i(0,1);glVertex3f(-27.603621, 0.073720, -39.377457);

	glTexCoord2i(0,0);glVertex3f(-25.603621, 0.202402, -39.377457);
	glTexCoord2i(1,0);glVertex3f(-26.603621, 0.202402, -39.377457);
	glTexCoord2i(1,1);glVertex3f(-26.603621, 0.073720, -39.377457);
	glTexCoord2i(0,1);glVertex3f(-25.603621, 0.073720, -39.377457);

	glTexCoord2i(0,0);glVertex3f(19.652916, 0.202387, -44.848640);
	glTexCoord2i(1,0);glVertex3f(19.652916, 0.202387, -45.848640);
	glTexCoord2i(1,1);glVertex3f(19.652916, 0.073705, -45.848640);
	glTexCoord2i(0,1);glVertex3f(19.652916, 0.073705, -44.848640);

	glTexCoord2i(0,0);glVertex3f(19.652908, 0.202387, 43.849869);
	glTexCoord2i(1,0);glVertex3f(19.652908, 0.202387, 42.849869);
	glTexCoord2i(1,1);glVertex3f(19.652908, 0.073705, 42.849869);
	glTexCoord2i(0,1);glVertex3f(19.652908, 0.073705, 43.849869);

	glTexCoord2i(0,0);glVertex3f(22.603624, 0.202386, -2.000494);
	glTexCoord2i(1,0);glVertex3f(23.603624, 0.202386, -2.000494);
	glTexCoord2i(1,1);glVertex3f(23.603624, 0.073704, -2.000494);
	glTexCoord2i(0,1);glVertex3f(22.603624, 0.073704, -2.000494);

	glTexCoord2i(0,0);glVertex3f(19.652908, 0.202387, 46.849869);
	glTexCoord2i(1,0);glVertex3f(19.652908, 0.202387, 45.849869);
	glTexCoord2i(1,1);glVertex3f(19.652908, 0.073705, 45.849869);
	glTexCoord2i(0,1);glVertex3f(19.652908, 0.073705, 46.849869);

	glTexCoord2i(0,0);glVertex3f(-25.603624, 0.202402, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-26.603624, 0.202402, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-26.603624, 0.073720, 2.000680);
	glTexCoord2i(0,1);glVertex3f(-25.603624, 0.073720, 2.000680);

	glTexCoord2i(0,0);glVertex3f(24.603624, 0.202386, 1.999180);
	glTexCoord2i(1,0);glVertex3f(23.603624, 0.202386, 1.999180);
	glTexCoord2i(1,1);glVertex3f(23.603624, 0.073704, 1.999180);
	glTexCoord2i(0,1);glVertex3f(24.603624, 0.073704, 1.999180);

	glTexCoord2i(0,0);glVertex3f(-21.652916, 0.202402, 42.849869);
	glTexCoord2i(1,0);glVertex3f(-21.652916, 0.202402, 43.849869);
	glTexCoord2i(1,1);glVertex3f(-21.652916, 0.073720, 43.849869);
	glTexCoord2i(0,1);glVertex3f(-21.652916, 0.073720, 42.849869);

	glTexCoord2i(0,0);glVertex3f(-27.603624, 0.202403, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-26.603624, 0.202402, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-26.603624, 0.073720, -2.001814);
	glTexCoord2i(0,1);glVertex3f(-27.603624, 0.073720, -2.001814);

	glTexCoord2i(0,0);glVertex3f(23.603628, 0.202386, -39.377453);
	glTexCoord2i(1,0);glVertex3f(22.603628, 0.202386, -39.377453);
	glTexCoord2i(1,1);glVertex3f(22.603628, 0.073704, -39.377453);
	glTexCoord2i(0,1);glVertex3f(23.603628, 0.073704, -39.377453);

	glTexCoord2i(0,0);glVertex3f(-26.603628, 0.202402, 39.346523);
	glTexCoord2i(1,0);glVertex3f(-25.603628, 0.202402, 39.346523);
	glTexCoord2i(1,1);glVertex3f(-25.603628, 0.073720, 39.346523);
	glTexCoord2i(0,1);glVertex3f(-26.603628, 0.073720, 39.346523);

	glTexCoord2i(0,0);glVertex3f(25.603621, 0.202386, 39.378384);
	glTexCoord2i(1,0);glVertex3f(26.603621, 0.202386, 39.378384);
	glTexCoord2i(1,1);glVertex3f(26.603621, 0.073704, 39.378384);
	glTexCoord2i(0,1);glVertex3f(25.603621, 0.073704, 39.378384);

	glTexCoord2i(0,0);glVertex3f(23.603621, 0.202386, 39.378380);
	glTexCoord2i(1,0);glVertex3f(24.603621, 0.202386, 39.378380);
	glTexCoord2i(1,1);glVertex3f(24.603621, 0.073704, 39.378380);
	glTexCoord2i(0,1);glVertex3f(23.603621, 0.073704, 39.378380);

	glTexCoord2i(0,0);glVertex3f(-28.603624, 0.202403, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-27.603624, 0.202403, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-27.603624, 0.073720, -2.001814);
	glTexCoord2i(0,1);glVertex3f(-28.603624, 0.073721, -2.001814);

	glTexCoord2i(0,0);glVertex3f(-26.603621, 0.202402, -39.377457);
	glTexCoord2i(1,0);glVertex3f(-27.603621, 0.202403, -39.377457);
	glTexCoord2i(1,1);glVertex3f(-27.603621, 0.073720, -39.377457);
	glTexCoord2i(0,1);glVertex3f(-26.603621, 0.073720, -39.377457);

	glTexCoord2i(0,0);glVertex3f(19.652908, 0.202387, 44.849869);
	glTexCoord2i(1,0);glVertex3f(19.652908, 0.202387, 43.849869);
	glTexCoord2i(1,1);glVertex3f(19.652908, 0.073705, 43.849869);
	glTexCoord2i(0,1);glVertex3f(19.652908, 0.073705, 44.849869);

	glTexCoord2i(0,0);glVertex3f(-21.652908, 0.202402, -43.848640);
	glTexCoord2i(1,0);glVertex3f(-21.652908, 0.202402, -42.848640);
	glTexCoord2i(1,1);glVertex3f(-21.652908, 0.073720, -42.848640);
	glTexCoord2i(0,1);glVertex3f(-21.652908, 0.073720, -43.848640);

	glTexCoord2i(0,0);glVertex3f(23.603624, 0.202386, -2.000494);
	glTexCoord2i(1,0);glVertex3f(24.603624, 0.202386, -2.000494);
	glTexCoord2i(1,1);glVertex3f(24.603624, 0.073704, -2.000494);
	glTexCoord2i(0,1);glVertex3f(23.603624, 0.073704, -2.000494);

	glTexCoord2i(0,0);glVertex3f(-26.603624, 0.202402, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-27.603624, 0.202403, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-27.603624, 0.073720, 2.000680);
	glTexCoord2i(0,1);glVertex3f(-26.603624, 0.073720, 2.000680);

	glTexCoord2i(0,0);glVertex3f(-28.603628, 0.202403, 39.346523);
	glTexCoord2i(1,0);glVertex3f(-27.603628, 0.202403, 39.346523);
	glTexCoord2i(1,1);glVertex3f(-27.603628, 0.073720, 39.346523);
	glTexCoord2i(0,1);glVertex3f(-28.603628, 0.073721, 39.346523);

	glTexCoord2i(0,0);glVertex3f(25.603624, 0.202386, 1.999180);
	glTexCoord2i(1,0);glVertex3f(24.603624, 0.202386, 1.999180);
	glTexCoord2i(1,1);glVertex3f(24.603624, 0.073704, 1.999180);
	glTexCoord2i(0,1);glVertex3f(25.603624, 0.073704, 1.999180);

	glTexCoord2i(0,0);glVertex3f(19.652916, 0.202387, -42.848640);
	glTexCoord2i(1,0);glVertex3f(19.652916, 0.202387, -43.848640);
	glTexCoord2i(1,1);glVertex3f(19.652916, 0.073705, -43.848640);
	glTexCoord2i(0,1);glVertex3f(19.652916, 0.073705, -42.848640);

	glTexCoord2i(0,0);glVertex3f(-21.652916, 0.202402, 43.849869);
	glTexCoord2i(1,0);glVertex3f(-21.652916, 0.202402, 44.849869);
	glTexCoord2i(1,1);glVertex3f(-21.652916, 0.073720, 44.849869);
	glTexCoord2i(0,1);glVertex3f(-21.652916, 0.073720, 43.849869);

	glTexCoord2i(0,0);glVertex3f(24.603628, 0.202386, -39.377453);
	glTexCoord2i(1,0);glVertex3f(23.603628, 0.202386, -39.377453);
	glTexCoord2i(1,1);glVertex3f(23.603628, 0.073704, -39.377453);
	glTexCoord2i(0,1);glVertex3f(24.603628, 0.073704, -39.377453);

	glTexCoord2i(0,0);glVertex3f(26.603624, 0.202386, 1.999180);
	glTexCoord2i(1,0);glVertex3f(25.603624, 0.202386, 1.999180);
	glTexCoord2i(1,1);glVertex3f(25.603624, 0.073704, 1.999180);
	glTexCoord2i(0,1);glVertex3f(26.603624, 0.073704, 1.999180);

	glTexCoord2i(0,0);glVertex3f(-27.603628, 0.202403, 39.346523);
	glTexCoord2i(1,0);glVertex3f(-26.603628, 0.202402, 39.346523);
	glTexCoord2i(1,1);glVertex3f(-26.603628, 0.073720, 39.346523);
	glTexCoord2i(0,1);glVertex3f(-27.603628, 0.073720, 39.346523);

	glEnd();

	glBegin(GL_TRIANGLES);

	glTexCoord2i(0,0);glVertex3f(22.603621, 0.202386, 39.378380);
	glTexCoord2i(1,1);glVertex3f(23.163765, 0.202404, 40.526657);
	glTexCoord2i(0,1);glVertex3f(23.603621, 0.202386, 39.378380);

	glTexCoord2i(0,0);glVertex3f(19.652908, 0.202387, 42.849869);
	glTexCoord2i(1,1);glVertex3f(19.652908, 0.202387, 43.849869);
	glTexCoord2i(0,1);glVertex3f(20.550640, 0.202405, 43.139782);

	glTexCoord2i(0,0);glVertex3f(19.652908, 0.202387, 46.849869);
	glTexCoord2i(1,1);glVertex3f(26.599634, 0.202386, 46.849873);
	glTexCoord2i(0,1);glVertex3f(22.730221, 0.202404, 42.706234);

	glTexCoord2i(0,0);glVertex3f(26.603621, 0.202386, 39.378384);
	glTexCoord2i(1,1);glVertex3f(22.730221, 0.202404, 42.706234);
	glTexCoord2i(0,1);glVertex3f(26.599634, 0.202386, 46.849873);

	glTexCoord2i(0,0);glVertex3f(-21.652916, 0.202402, 42.849869);
	glTexCoord2i(1,1);glVertex3f(-22.665459, 0.202420, 43.247604);
	glTexCoord2i(0,1);glVertex3f(-21.652916, 0.202402, 43.849869);

	glTexCoord2i(0,0);glVertex3f(-21.652916, 0.202402, 46.849869);
	glTexCoord2i(1,1);glVertex3f(-24.845039, 0.202420, 42.814056);
	glTexCoord2i(0,1);glVertex3f(-28.598095, 0.202403, 46.849865);

	glTexCoord2i(0,0);glVertex3f(-24.603628, 0.202402, 39.346527);
	glTexCoord2i(1,1);glVertex3f(-25.603628, 0.202402, 39.346523);
	glTexCoord2i(0,1);glVertex3f(-25.278587, 0.202420, 40.634476);

	glTexCoord2i(0,0);glVertex3f(-28.603628, 0.202403, 39.346523);
	glTexCoord2i(1,1);glVertex3f(-28.598095, 0.202403, 46.849865);
	glTexCoord2i(0,1);glVertex3f(-24.845039, 0.202420, 42.814056);

	glTexCoord2i(0,0);glVertex3f(-21.652908, 0.202402, -42.848640);
	glTexCoord2i(1,1);glVertex3f(-21.652908, 0.202402, -43.848640);
	glTexCoord2i(0,1);glVertex3f(-22.522556, 0.202418, -43.040985);

	glTexCoord2i(0,0);glVertex3f(-24.603621, 0.202402, -39.377453);
	glTexCoord2i(1,1);glVertex3f(-25.135685, 0.202418, -40.427856);
	glTexCoord2i(0,1);glVertex3f(-25.603621, 0.202402, -39.377457);

	glTexCoord2i(0,0);glVertex3f(-21.652908, 0.202402, -46.848640);
	glTexCoord2i(1,1);glVertex3f(-28.603621, 0.202403, -46.852642);
	glTexCoord2i(0,1);glVertex3f(-24.702137, 0.202418, -42.607437);

	glTexCoord2i(0,0);glVertex3f(-28.603621, 0.202403, -39.377457);
	glTexCoord2i(1,1);glVertex3f(-24.702137, 0.202418, -42.607437);
	glTexCoord2i(0,1);glVertex3f(-28.603621, 0.202403, -46.852642);

	glTexCoord2i(0,0);glVertex3f(19.652916, 0.202387, -42.848640);
	glTexCoord2i(1,1);glVertex3f(20.672714, 0.202403, -43.183880);
	glTexCoord2i(0,1);glVertex3f(19.652916, 0.202387, -43.848640);

	glTexCoord2i(0,0);glVertex3f(22.603628, 0.202386, -39.377453);
	glTexCoord2i(1,1);glVertex3f(23.603628, 0.202386, -39.377453);
	glTexCoord2i(0,1);glVertex3f(23.285839, 0.202402, -40.570751);

	glTexCoord2i(0,0);glVertex3f(19.652916, 0.202387, -46.848640);
	glTexCoord2i(1,1);glVertex3f(22.852295, 0.202402, -42.750332);
	glTexCoord2i(0,1);glVertex3f(26.600105, 0.202386, -46.848637);

	glTexCoord2i(0,0);glVertex3f(26.603628, 0.202386, -39.377449);
	glTexCoord2i(1,1);glVertex3f(26.600105, 0.202386, -46.848637);
	glTexCoord2i(0,1);glVertex3f(22.852295, 0.202402, -42.750332);

	glTexCoord2i(0,0);glVertex3f(22.603624, 0.202386, -2.000494);
	glTexCoord2i(1,1);glVertex3f(23.380650, 0.202404, -1.878912);
	glTexCoord2i(0,1);glVertex3f(23.603624, 0.202386, -2.000494);

	glTexCoord2i(0,0);glVertex3f(22.603624, 0.202386, 1.999180);
	glTexCoord2i(1,1);glVertex3f(23.603624, 0.202386, 1.999180);
	glTexCoord2i(0,1);glVertex3f(23.380650, 0.202404, 1.816606);

	glTexCoord2i(0,0);glVertex3f(26.603624, 0.202386, -2.000494);
	glTexCoord2i(1,1);glVertex3f(24.615280, 0.202404, -0.031152);
	glTexCoord2i(0,1);glVertex3f(26.603624, 0.202386, 1.999180);

	glTexCoord2i(0,0);glVertex3f(-24.603624, 0.202402, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-25.355083, 0.202420, 1.816602);
	glTexCoord2i(0,1);glVertex3f(-25.603624, 0.202402, 2.000680);

	glTexCoord2i(0,0);glVertex3f(-24.603624, 0.202402, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-25.603624, 0.202402, -2.001814);
	glTexCoord2i(0,1);glVertex3f(-25.355083, 0.202420, -1.878916);

	glTexCoord2i(0,0);glVertex3f(-28.603624, 0.202403, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-28.603624, 0.202403, 2.000680);
	glTexCoord2i(0,1);glVertex3f(-26.589716, 0.202420, -0.031156);

	glEnd();
}
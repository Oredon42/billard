#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>

void creer_trous()
{
	glBegin(GL_QUADS);

	glTexCoord2i(0,0);glVertex3f(23.285839, 0.202398, -42.101486);
	glTexCoord2i(1,0);glVertex3f(23.285837, -2.434818, -42.101486);
	glTexCoord2i(1,1);glVertex3f(23.438078, -2.434818, -41.336121);
	glTexCoord2i(0,1);glVertex3f(23.438080, 0.202398, -41.336121);

	glTexCoord2i(0,0);glVertex3f(22.603628, 0.202382, -39.377453);
	glTexCoord2i(1,0);glVertex3f(22.603628, 0.202382, -39.377453);
	glTexCoord2i(1,1);glVertex3f(22.603626, -2.434834, -39.377453);
	glTexCoord2i(0,1);glVertex3f(22.603626, -2.434834, -39.377453);

	glTexCoord2i(0,0);glVertex3f(22.603624, 0.202382, -2.000494);
	glTexCoord2i(1,0);glVertex3f(22.603624, 0.202382, -2.000494);
	glTexCoord2i(1,1);glVertex3f(22.603624, -2.434834, -2.000494);
	glTexCoord2i(0,1);glVertex3f(22.603624, -2.434834, -2.000494);

	glTexCoord2i(0,0);glVertex3f(24.463039, 0.202400, 0.734214);
	glTexCoord2i(1,0);glVertex3f(24.615280, 0.202400, -0.031152);
	glTexCoord2i(1,1);glVertex3f(24.615280, -2.434816, -0.031152);
	glTexCoord2i(0,1);glVertex3f(24.463039, -2.434816, 0.734214);

	glTexCoord2i(0,0);glVertex3f(19.652908, 0.202383, 42.849869);
	glTexCoord2i(1,0);glVertex3f(19.652908, 0.202383, 42.849869);
	glTexCoord2i(1,1);glVertex3f(19.652908, -2.434831, 42.849869);
	glTexCoord2i(0,1);glVertex3f(19.652908, -2.434831, 42.849869);

	glTexCoord2i(0,0);glVertex3f(22.203449, 0.202398, -43.183880);
	glTexCoord2i(1,0);glVertex3f(21.438080, 0.202399, -43.336121);
	glTexCoord2i(1,1);glVertex3f(21.438080, -2.434818, -43.336121);
	glTexCoord2i(0,1);glVertex3f(22.203449, -2.434818, -43.183880);

	glTexCoord2i(0,0);glVertex3f(-21.652908, 0.073724, -42.848640);
	glTexCoord2i(1,0);glVertex3f(-21.652908, 0.202406, -42.848640);
	glTexCoord2i(1,1);glVertex3f(-21.652910, -2.434810, -42.848640);
	glTexCoord2i(0,1);glVertex3f(-21.652910, -2.563493, -42.848640);

	glTexCoord2i(0,0);glVertex3f(20.550640, 0.202401, 43.139782);
	glTexCoord2i(1,0);glVertex3f(20.550640, -2.434815, 43.139782);
	glTexCoord2i(1,1);glVertex3f(19.652908, -2.434831, 42.849869);
	glTexCoord2i(0,1);glVertex3f(19.652908, 0.202383, 42.849869);

	glTexCoord2i(0,0);glVertex3f(-25.355083, 0.202424, 1.816602);
	glTexCoord2i(1,0);glVertex3f(-24.603624, 0.202406, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-24.603624, -2.434810, 2.000680);
	glTexCoord2i(0,1);glVertex3f(-25.355083, -2.434792, 1.816602);

	glTexCoord2i(0,0);glVertex3f(23.438080, 0.202398, -41.336121);
	glTexCoord2i(1,0);glVertex3f(23.438078, -2.434818, -41.336121);
	glTexCoord2i(1,1);glVertex3f(23.285837, -2.434818, -40.570751);
	glTexCoord2i(0,1);glVertex3f(23.285839, 0.202398, -40.570751);

	glTexCoord2i(0,0);glVertex3f(24.615280, 0.202400, -0.031152);
	glTexCoord2i(1,0);glVertex3f(24.463039, 0.202400, -0.796520);
	glTexCoord2i(1,1);glVertex3f(24.463039, -2.434816, -0.796520);
	glTexCoord2i(0,1);glVertex3f(24.615280, -2.434816, -0.031152);

	glTexCoord2i(0,0);glVertex3f(22.603624, 0.073700, 1.999180);
	glTexCoord2i(1,0);glVertex3f(22.603624, 0.202382, 1.999180);
	glTexCoord2i(1,1);glVertex3f(22.603624, -2.434834, 1.999180);
	glTexCoord2i(0,1);glVertex3f(22.603624, -2.563516, 1.999180);

	glTexCoord2i(0,0);glVertex3f(23.285837, -2.434818, -42.101486);
	glTexCoord2i(1,0);glVertex3f(23.285839, 0.202398, -42.101486);
	glTexCoord2i(1,1);glVertex3f(22.852295, 0.202398, -42.750332);
	glTexCoord2i(0,1);glVertex3f(22.852293, -2.434818, -42.750332);

	glTexCoord2i(0,0);glVertex3f(-24.603628, 0.202406, 39.346527);
	glTexCoord2i(1,0);glVertex3f(-24.603628, 0.202406, 39.346527);
	glTexCoord2i(1,1);glVertex3f(-24.603628, -2.434810, 39.346527);
	glTexCoord2i(0,1);glVertex3f(-24.603628, -2.434810, 39.346527);

	glTexCoord2i(0,0);glVertex3f(23.316006, 0.202400, 41.292023);
	glTexCoord2i(1,0);glVertex3f(23.163765, 0.202400, 40.526657);
	glTexCoord2i(1,1);glVertex3f(23.163765, -2.434816, 40.526657);
	glTexCoord2i(0,1);glVertex3f(23.316006, -2.434816, 41.292023);

	glTexCoord2i(0,0);glVertex3f(-24.603621, 0.202406, -39.377453);
	glTexCoord2i(1,0);glVertex3f(-24.603621, 0.202406, -39.377453);
	glTexCoord2i(1,1);glVertex3f(-24.603622, -2.434810, -39.377453);
	glTexCoord2i(0,1);glVertex3f(-24.603622, -2.434810, -39.377453);

	glTexCoord2i(0,0);glVertex3f(-24.603628, 0.202406, 39.346527);
	glTexCoord2i(1,0);glVertex3f(-25.278587, 0.202424, 40.634476);
	glTexCoord2i(1,1);glVertex3f(-25.278587, -2.434792, 40.634476);
	glTexCoord2i(0,1);glVertex3f(-24.603628, -2.434810, 39.346527);

	glTexCoord2i(0,0);glVertex3f(23.163765, 0.202400, 42.057392);
	glTexCoord2i(1,0);glVertex3f(23.316006, 0.202400, 41.292023);
	glTexCoord2i(1,1);glVertex3f(23.316006, -2.434816, 41.292023);
	glTexCoord2i(0,1);glVertex3f(23.163765, -2.434816, 42.057392);

	glTexCoord2i(0,0);glVertex3f(-25.287926, 0.202422, -41.193230);
	glTexCoord2i(1,0);glVertex3f(-25.135685, 0.202422, -40.427856);
	glTexCoord2i(1,1);glVertex3f(-25.135687, -2.434794, -40.427856);
	glTexCoord2i(0,1);glVertex3f(-25.287928, -2.434794, -41.193230);

	glTexCoord2i(0,0);glVertex3f(19.652908, 0.202383, 42.849869);
	glTexCoord2i(1,0);glVertex3f(19.652908, 0.202383, 42.849869);
	glTexCoord2i(1,1);glVertex3f(19.652908, -2.434831, 42.849869);
	glTexCoord2i(0,1);glVertex3f(19.652908, -2.434831, 42.849869);

	glTexCoord2i(0,0);glVertex3f(21.438080, 0.202399, -43.336121);
	glTexCoord2i(1,0);glVertex3f(20.672714, 0.202399, -43.183880);
	glTexCoord2i(1,1);glVertex3f(20.672714, -2.434817, -43.183880);
	glTexCoord2i(0,1);glVertex3f(21.438080, -2.434818, -43.336121);

	glTexCoord2i(0,0);glVertex3f(-25.135685, 0.202422, -40.427856);
	glTexCoord2i(1,0);glVertex3f(-24.603621, 0.202406, -39.377453);
	glTexCoord2i(1,1);glVertex3f(-24.603622, -2.434810, -39.377453);
	glTexCoord2i(0,1);glVertex3f(-25.135687, -2.434794, -40.427856);

	glTexCoord2i(0,0);glVertex3f(22.603624, 0.073700, -2.000494);
	glTexCoord2i(1,0);glVertex3f(22.603624, 0.202382, -2.000494);
	glTexCoord2i(1,1);glVertex3f(22.603624, -2.434834, -2.000494);
	glTexCoord2i(0,1);glVertex3f(22.603624, -2.563516, -2.000494);

	glTexCoord2i(0,0);glVertex3f(-26.437475, 0.202424, -0.796522);
	glTexCoord2i(1,0);glVertex3f(-26.437475, -2.434792, -0.796522);
	glTexCoord2i(1,1);glVertex3f(-26.003929, -2.434792, -1.445370);
	glTexCoord2i(0,1);glVertex3f(-26.003929, 0.202424, -1.445370);

	glTexCoord2i(0,0);glVertex3f(22.730221, 0.202400, 42.706234);
	glTexCoord2i(1,0);glVertex3f(23.163765, 0.202400, 42.057392);
	glTexCoord2i(1,1);glVertex3f(23.163765, -2.434816, 42.057392);
	glTexCoord2i(0,1);glVertex3f(22.730221, -2.434816, 42.706234);

	glTexCoord2i(0,0);glVertex3f(23.285839, 0.202398, -40.570751);
	glTexCoord2i(1,0);glVertex3f(23.285837, -2.434818, -40.570751);
	glTexCoord2i(1,1);glVertex3f(22.603626, -2.434834, -39.377453);
	glTexCoord2i(0,1);glVertex3f(22.603628, 0.202382, -39.377453);

	glTexCoord2i(0,0);glVertex3f(19.652916, 0.202383, -42.848640);
	glTexCoord2i(1,0);glVertex3f(19.652916, 0.202383, -42.848640);
	glTexCoord2i(1,1);glVertex3f(19.652914, -2.434831, -42.848640);
	glTexCoord2i(0,1);glVertex3f(19.652914, -2.434831, -42.848640);

	glTexCoord2i(0,0);glVertex3f(-21.652916, 0.202406, 42.849869);
	glTexCoord2i(1,0);glVertex3f(-21.652916, 0.202406, 42.849869);
	glTexCoord2i(1,1);glVertex3f(-21.652916, -2.434810, 42.849869);
	glTexCoord2i(0,1);glVertex3f(-21.652916, -2.434810, 42.849869);

	glTexCoord2i(0,0);glVertex3f(-26.589716, 0.202424, -0.031156);
	glTexCoord2i(1,0);glVertex3f(-26.589716, -2.434792, -0.031156);
	glTexCoord2i(1,1);glVertex3f(-26.437475, -2.434792, -0.796522);
	glTexCoord2i(0,1);glVertex3f(-26.437475, 0.202424, -0.796522);

	glTexCoord2i(0,0);glVertex3f(19.652916, 0.202383, -42.848640);
	glTexCoord2i(1,0);glVertex3f(19.652916, 0.202383, -42.848640);
	glTexCoord2i(1,1);glVertex3f(19.652914, -2.434831, -42.848640);
	glTexCoord2i(0,1);glVertex3f(19.652914, -2.434831, -42.848640);

	glTexCoord2i(0,0);glVertex3f(-24.603621, 0.073724, -39.377453);
	glTexCoord2i(1,0);glVertex3f(-24.603621, 0.202406, -39.377453);
	glTexCoord2i(1,1);glVertex3f(-24.603622, -2.434810, -39.377453);
	glTexCoord2i(0,1);glVertex3f(-24.603622, -2.563492, -39.377453);

	glTexCoord2i(0,0);glVertex3f(22.603624, 0.202382, 1.999180);
	glTexCoord2i(1,0);glVertex3f(22.603624, 0.202382, 1.999180);
	glTexCoord2i(1,1);glVertex3f(22.603624, -1.968482, 1.999180);
	glTexCoord2i(0,1);glVertex3f(22.603624, -2.434834, 1.999180);

	glTexCoord2i(0,0);glVertex3f(-26.589716, 0.202424, -0.031156);
	glTexCoord2i(1,0);glVertex3f(-26.437475, 0.202424, 0.734210);
	glTexCoord2i(1,1);glVertex3f(-26.437475, -2.434792, 0.734210);
	glTexCoord2i(0,1);glVertex3f(-26.589716, -2.434792, -0.031156);

	glTexCoord2i(0,0);glVertex3f(19.652916, 0.073701, -42.848640);
	glTexCoord2i(1,0);glVertex3f(19.652916, 0.202383, -42.848640);
	glTexCoord2i(1,1);glVertex3f(19.652914, -2.434831, -42.848640);
	glTexCoord2i(0,1);glVertex3f(19.652914, -2.563515, -42.848640);

	glTexCoord2i(0,0);glVertex3f(-24.603624, 0.073724, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-24.603624, 0.202406, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-24.603624, -2.434810, -2.001814);
	glTexCoord2i(0,1);glVertex3f(-24.603624, -2.563492, -2.001814);

	glTexCoord2i(0,0);glVertex3f(-24.603624, 0.202406, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-24.603624, 0.202406, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-24.603624, -2.434810, -2.001814);
	glTexCoord2i(0,1);glVertex3f(-24.603624, -2.434810, -2.001814);

	glTexCoord2i(0,0);glVertex3f(-24.603624, 0.202406, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-24.603624, 0.202406, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-24.603624, -2.434810, -2.001814);
	glTexCoord2i(0,1);glVertex3f(-24.603624, -2.434810, -2.001814);

	glTexCoord2i(0,0);glVertex3f(-24.603624, 0.202406, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-25.355083, 0.202424, -1.878916);
	glTexCoord2i(1,1);glVertex3f(-25.355083, -2.434792, -1.878916);
	glTexCoord2i(0,1);glVertex3f(-24.603624, -2.434810, -2.001814);

	glTexCoord2i(0,0);glVertex3f(-24.603628, 0.073724, 39.346527);
	glTexCoord2i(1,0);glVertex3f(-24.603628, 0.202406, 39.346527);
	glTexCoord2i(1,1);glVertex3f(-24.603628, -2.434810, 39.346527);
	glTexCoord2i(0,1);glVertex3f(-24.603628, -2.563492, 39.346527);

	glTexCoord2i(0,0);glVertex3f(-22.665459, 0.202424, 43.247604);
	glTexCoord2i(1,0);glVertex3f(-21.652916, 0.202406, 42.849869);
	glTexCoord2i(1,1);glVertex3f(-21.652916, -2.434810, 42.849869);
	glTexCoord2i(0,1);glVertex3f(-22.665459, -2.434793, 43.247604);

	glTexCoord2i(0,0);glVertex3f(22.603621, 0.202382, 39.378380);
	glTexCoord2i(1,0);glVertex3f(22.603621, 0.202382, 39.378380);
	glTexCoord2i(1,1);glVertex3f(22.603621, -2.434834, 39.378380);
	glTexCoord2i(0,1);glVertex3f(22.603621, -2.434834, 39.378380);

	glTexCoord2i(0,0);glVertex3f(-23.430828, 0.202424, 43.399845);
	glTexCoord2i(1,0);glVertex3f(-22.665459, 0.202424, 43.247604);
	glTexCoord2i(1,1);glVertex3f(-22.665459, -2.434793, 43.247604);
	glTexCoord2i(0,1);glVertex3f(-23.430828, -2.434792, 43.399845);

	glTexCoord2i(0,0);glVertex3f(-21.652908, 0.202406, -42.848640);
	glTexCoord2i(1,0);glVertex3f(-21.652908, 0.202406, -42.848640);
	glTexCoord2i(1,1);glVertex3f(-21.652908, -1.991876, -42.848640);
	glTexCoord2i(0,1);glVertex3f(-21.652910, -2.434810, -42.848640);

	glTexCoord2i(0,0);glVertex3f(22.081375, 0.202400, 43.139782);
	glTexCoord2i(1,0);glVertex3f(22.081375, -2.434816, 43.139782);
	glTexCoord2i(1,1);glVertex3f(21.316006, -2.434816, 43.292023);
	glTexCoord2i(0,1);glVertex3f(21.316006, 0.202401, 43.292023);

	glTexCoord2i(0,0);glVertex3f(22.603621, 0.202382, 39.378380);
	glTexCoord2i(1,0);glVertex3f(22.603621, 0.202382, 39.378380);
	glTexCoord2i(1,1);glVertex3f(22.603621, -2.434834, 39.378380);
	glTexCoord2i(0,1);glVertex3f(22.603621, -2.434834, 39.378380);

	glTexCoord2i(0,0);glVertex3f(23.380650, 0.202400, 1.816606);
	glTexCoord2i(1,0);glVertex3f(23.380650, -2.434816, 1.816606);
	glTexCoord2i(1,1);glVertex3f(22.603624, -2.434834, 1.999180);
	glTexCoord2i(0,1);glVertex3f(22.603624, 0.202382, 1.999180);

	glTexCoord2i(0,0);glVertex3f(23.163765, 0.202400, 40.526657);
	glTexCoord2i(1,0);glVertex3f(22.603621, 0.202382, 39.378380);
	glTexCoord2i(1,1);glVertex3f(22.603621, -2.434834, 39.378380);
	glTexCoord2i(0,1);glVertex3f(23.163765, -2.434816, 40.526657);

	glTexCoord2i(0,0);glVertex3f(-25.430828, 0.202424, 41.399841);
	glTexCoord2i(1,0);glVertex3f(-25.278587, 0.202424, 42.165211);
	glTexCoord2i(1,1);glVertex3f(-25.278587, -2.434792, 42.165211);
	glTexCoord2i(0,1);glVertex3f(-25.430828, -2.434792, 41.399841);

	glTexCoord2i(0,0);glVertex3f(22.081375, 0.202400, 43.139782);
	glTexCoord2i(1,0);glVertex3f(22.730221, 0.202400, 42.706234);
	glTexCoord2i(1,1);glVertex3f(22.730221, -2.434816, 42.706234);
	glTexCoord2i(0,1);glVertex3f(22.081375, -2.434816, 43.139782);

	glTexCoord2i(0,0);glVertex3f(24.463039, 0.202400, -0.796520);
	glTexCoord2i(1,0);glVertex3f(24.029495, 0.202400, -1.445366);
	glTexCoord2i(1,1);glVertex3f(24.029495, -2.434816, -1.445366);
	glTexCoord2i(0,1);glVertex3f(24.463039, -2.434816, -0.796520);

	glTexCoord2i(0,0);glVertex3f(-21.652916, 0.202406, 42.849869);
	glTexCoord2i(1,0);glVertex3f(-21.652916, 0.202406, 42.849869);
	glTexCoord2i(1,1);glVertex3f(-21.652916, -2.434810, 42.849869);
	glTexCoord2i(0,1);glVertex3f(-21.652916, -2.434810, 42.849869);

	glTexCoord2i(0,0);glVertex3f(-24.603624, 0.073724, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-24.603624, 0.202406, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-24.603624, -2.434810, 2.000680);
	glTexCoord2i(0,1);glVertex3f(-24.603624, -2.563492, 2.000680);

	glTexCoord2i(0,0);glVertex3f(-24.603621, 0.202406, -39.377453);
	glTexCoord2i(1,0);glVertex3f(-24.603621, 0.202406, -39.377453);
	glTexCoord2i(1,1);glVertex3f(-24.603622, -2.434810, -39.377453);
	glTexCoord2i(0,1);glVertex3f(-24.603622, -2.434810, -39.377453);

	glTexCoord2i(0,0);glVertex3f(22.603624, 0.202382, 1.999180);
	glTexCoord2i(1,0);glVertex3f(22.603624, 0.202382, 1.999180);
	glTexCoord2i(1,1);glVertex3f(22.603624, -2.434834, 1.999180);
	glTexCoord2i(0,1);glVertex3f(22.603624, -1.968482, 1.999180);

	glTexCoord2i(0,0);glVertex3f(23.380650, 0.202400, -1.878912);
	glTexCoord2i(1,0);glVertex3f(22.603624, 0.202382, -2.000494);
	glTexCoord2i(1,1);glVertex3f(22.603624, -2.434834, -2.000494);
	glTexCoord2i(0,1);glVertex3f(23.380650, -2.434816, -1.878912);

	glTexCoord2i(0,0);glVertex3f(-22.522556, 0.202422, -43.040985);
	glTexCoord2i(1,0);glVertex3f(-22.522558, -2.434794, -43.040985);
	glTexCoord2i(1,1);glVertex3f(-21.652910, -2.434810, -42.848640);
	glTexCoord2i(0,1);glVertex3f(-21.652908, 0.202406, -42.848640);

	glTexCoord2i(0,0);glVertex3f(-26.003929, 0.202424, -1.445370);
	glTexCoord2i(1,0);glVertex3f(-26.003929, -2.434792, -1.445370);
	glTexCoord2i(1,1);glVertex3f(-25.355083, -2.434792, -1.878916);
	glTexCoord2i(0,1);glVertex3f(-25.355083, 0.202424, -1.878916);

	glTexCoord2i(0,0);glVertex3f(22.603621, 0.073700, 39.378380);
	glTexCoord2i(1,0);glVertex3f(22.603621, 0.202382, 39.378380);
	glTexCoord2i(1,1);glVertex3f(22.603621, -2.434834, 39.378380);
	glTexCoord2i(0,1);glVertex3f(22.603621, -2.563516, 39.378380);

	glTexCoord2i(0,0);glVertex3f(20.672714, 0.202399, -43.183880);
	glTexCoord2i(1,0);glVertex3f(19.652916, 0.202383, -42.848640);
	glTexCoord2i(1,1);glVertex3f(19.652914, -2.434831, -42.848640);
	glTexCoord2i(0,1);glVertex3f(20.672714, -2.434817, -43.183880);

	glTexCoord2i(0,0);glVertex3f(-24.702137, 0.202422, -42.607437);
	glTexCoord2i(1,0);glVertex3f(-25.135685, 0.202422, -41.958591);
	glTexCoord2i(1,1);glVertex3f(-25.135687, -2.434794, -41.958591);
	glTexCoord2i(0,1);glVertex3f(-24.702139, -2.434794, -42.607437);

	glTexCoord2i(0,0);glVertex3f(19.652908, 0.073701, 42.849869);
	glTexCoord2i(1,0);glVertex3f(19.652908, 0.202383, 42.849869);
	glTexCoord2i(1,1);glVertex3f(19.652908, -2.434831, 42.849869);
	glTexCoord2i(0,1);glVertex3f(19.652908, -2.563515, 42.849869);

	glTexCoord2i(0,0);glVertex3f(21.316006, 0.202401, 43.292023);
	glTexCoord2i(1,0);glVertex3f(21.316006, -2.434816, 43.292023);
	glTexCoord2i(1,1);glVertex3f(20.550640, -2.434815, 43.139782);
	glTexCoord2i(0,1);glVertex3f(20.550640, 0.202401, 43.139782);

	glTexCoord2i(0,0);glVertex3f(-24.196194, 0.202424, 43.247604);
	glTexCoord2i(1,0);glVertex3f(-23.430828, 0.202424, 43.399845);
	glTexCoord2i(1,1);glVertex3f(-23.430828, -2.434792, 43.399845);
	glTexCoord2i(0,1);glVertex3f(-24.196194, -2.434792, 43.247604);

	glTexCoord2i(0,0);glVertex3f(-21.652916, 0.073724, 42.849869);
	glTexCoord2i(1,0);glVertex3f(-21.652916, 0.202406, 42.849869);
	glTexCoord2i(1,1);glVertex3f(-21.652916, -2.434810, 42.849869);
	glTexCoord2i(0,1);glVertex3f(-21.652916, -2.563493, 42.849869);

	glTexCoord2i(0,0);glVertex3f(24.463039, 0.202400, 0.734214);
	glTexCoord2i(1,0);glVertex3f(24.463039, -2.434816, 0.734214);
	glTexCoord2i(1,1);glVertex3f(24.029495, -2.434816, 1.383062);
	glTexCoord2i(0,1);glVertex3f(24.029495, 0.202400, 1.383062);

	glTexCoord2i(0,0);glVertex3f(-25.278587, 0.202424, 42.165211);
	glTexCoord2i(1,0);glVertex3f(-24.845039, 0.202424, 42.814056);
	glTexCoord2i(1,1);glVertex3f(-24.845039, -2.434792, 42.814056);
	glTexCoord2i(0,1);glVertex3f(-25.278587, -2.434792, 42.165211);

	glTexCoord2i(0,0);glVertex3f(-24.053291, 0.202422, -43.040985);
	glTexCoord2i(1,0);glVertex3f(-24.702137, 0.202422, -42.607437);
	glTexCoord2i(1,1);glVertex3f(-24.702139, -2.434794, -42.607437);
	glTexCoord2i(0,1);glVertex3f(-24.053293, -2.434794, -43.040985);

	glTexCoord2i(0,0);glVertex3f(24.029495, 0.202400, 1.383062);
	glTexCoord2i(1,0);glVertex3f(24.029495, -2.434816, 1.383062);
	glTexCoord2i(1,1);glVertex3f(23.380650, -2.434816, 1.816606);
	glTexCoord2i(0,1);glVertex3f(23.380650, 0.202400, 1.816606);

	glTexCoord2i(0,0);glVertex3f(-21.652908, 0.202406, -42.848640);
	glTexCoord2i(1,0);glVertex3f(-21.652908, 0.202406, -42.848640);
	glTexCoord2i(1,1);glVertex3f(-21.652910, -2.434810, -42.848640);
	glTexCoord2i(0,1);glVertex3f(-21.652908, -1.991876, -42.848640);

	glTexCoord2i(0,0);glVertex3f(-24.053291, 0.202422, -43.040985);
	glTexCoord2i(1,0);glVertex3f(-24.053293, -2.434794, -43.040985);
	glTexCoord2i(1,1);glVertex3f(-23.287926, -2.434794, -43.193226);
	glTexCoord2i(0,1);glVertex3f(-23.287926, 0.202422, -43.193226);

	glTexCoord2i(0,0);glVertex3f(-24.845039, 0.202424, 42.814056);
	glTexCoord2i(1,0);glVertex3f(-24.196194, 0.202424, 43.247604);
	glTexCoord2i(1,1);glVertex3f(-24.196194, -2.434792, 43.247604);
	glTexCoord2i(0,1);glVertex3f(-24.845039, -2.434792, 42.814056);

	glTexCoord2i(0,0);glVertex3f(-23.287926, 0.202422, -43.193226);
	glTexCoord2i(1,0);glVertex3f(-23.287926, -2.434794, -43.193226);
	glTexCoord2i(1,1);glVertex3f(-22.522558, -2.434794, -43.040985);
	glTexCoord2i(0,1);glVertex3f(-22.522556, 0.202422, -43.040985);

	glTexCoord2i(0,0);glVertex3f(22.603628, 0.202382, -39.377453);
	glTexCoord2i(1,0);glVertex3f(22.603628, 0.202382, -39.377453);
	glTexCoord2i(1,1);glVertex3f(22.603626, -2.434834, -39.377453);
	glTexCoord2i(0,1);glVertex3f(22.603626, -2.434834, -39.377453);

	glTexCoord2i(0,0);glVertex3f(-25.278587, 0.202424, 40.634476);
	glTexCoord2i(1,0);glVertex3f(-25.430828, 0.202424, 41.399841);
	glTexCoord2i(1,1);glVertex3f(-25.430828, -2.434792, 41.399841);
	glTexCoord2i(0,1);glVertex3f(-25.278587, -2.434792, 40.634476);

	glTexCoord2i(0,0);glVertex3f(22.203449, 0.202398, -43.183880);
	glTexCoord2i(1,0);glVertex3f(22.203449, -2.434818, -43.183880);
	glTexCoord2i(1,1);glVertex3f(22.852293, -2.434818, -42.750332);
	glTexCoord2i(0,1);glVertex3f(22.852295, 0.202398, -42.750332);

	glTexCoord2i(0,0);glVertex3f(22.603628, 0.073700, -39.377453);
	glTexCoord2i(1,0);glVertex3f(22.603628, 0.202382, -39.377453);
	glTexCoord2i(1,1);glVertex3f(22.603626, -2.434834, -39.377453);
	glTexCoord2i(0,1);glVertex3f(22.603626, -2.563516, -39.377453);

	glTexCoord2i(0,0);glVertex3f(-24.603628, 0.202406, 39.346527);
	glTexCoord2i(1,0);glVertex3f(-24.603628, 0.202406, 39.346527);
	glTexCoord2i(1,1);glVertex3f(-24.603628, -2.434810, 39.346527);
	glTexCoord2i(0,1);glVertex3f(-24.603628, -2.434810, 39.346527);

	glTexCoord2i(0,0);glVertex3f(-24.603624, 0.202406, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-24.603624, 0.202406, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-24.603624, -2.434810, 2.000680);
	glTexCoord2i(0,1);glVertex3f(-24.603624, -2.434810, 2.000680);

	glTexCoord2i(0,0);glVertex3f(-25.135685, 0.202422, -41.958591);
	glTexCoord2i(1,0);glVertex3f(-25.287926, 0.202422, -41.193230);
	glTexCoord2i(1,1);glVertex3f(-25.287928, -2.434794, -41.193230);
	glTexCoord2i(0,1);glVertex3f(-25.135687, -2.434794, -41.958591);

	glTexCoord2i(0,0);glVertex3f(22.603624, 0.202382, -2.000494);
	glTexCoord2i(1,0);glVertex3f(22.603624, 0.202382, -2.000494);
	glTexCoord2i(1,1);glVertex3f(22.603624, -2.434834, -2.000494);
	glTexCoord2i(0,1);glVertex3f(22.603624, -2.434834, -2.000494);

	glTexCoord2i(0,0);glVertex3f(24.029495, 0.202400, -1.445366);
	glTexCoord2i(1,0);glVertex3f(23.380650, 0.202400, -1.878912);
	glTexCoord2i(1,1);glVertex3f(23.380650, -2.434816, -1.878912);
	glTexCoord2i(0,1);glVertex3f(24.029495, -2.434816, -1.445366);

	glTexCoord2i(0,0);glVertex3f(-26.437475, 0.202424, 0.734210);
	glTexCoord2i(1,0);glVertex3f(-26.003929, 0.202424, 1.383058);
	glTexCoord2i(1,1);glVertex3f(-26.003929, -2.434792, 1.383058);
	glTexCoord2i(0,1);glVertex3f(-26.437475, -2.434792, 0.734210);

	glTexCoord2i(0,0);glVertex3f(-26.003929, 0.202424, 1.383058);
	glTexCoord2i(1,0);glVertex3f(-25.355083, 0.202424, 1.816602);
	glTexCoord2i(1,1);glVertex3f(-25.355083, -2.434792, 1.816602);
	glTexCoord2i(0,1);glVertex3f(-26.003929, -2.434792, 1.383058);

	glTexCoord2i(0,0);glVertex3f(-24.603624, 0.202406, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-24.603624, 0.202406, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-24.603624, -2.434810, 2.000680);
	glTexCoord2i(0,1);glVertex3f(-24.603624, -2.434810, 2.000680);

	glTexCoord2i(0,0);glVertex3f(22.603624, -1.968482, 1.999180);
	glTexCoord2i(1,0);glVertex3f(22.603624, -2.434834, 1.999180);
	glTexCoord2i(1,1);glVertex3f(18.007030, -2.915517, 1.799669);
	glTexCoord2i(0,1);glVertex3f(20.987526, -2.006327, 1.997054);

	glTexCoord2i(0,0);glVertex3f(23.380650, -2.434816, -1.878912);
	glTexCoord2i(1,0);glVertex3f(22.603624, -2.434834, -2.000494);
	glTexCoord2i(1,1);glVertex3f(18.007030, -2.915517, -1.891723);
	glTexCoord2i(0,1);glVertex3f(18.724163, -2.915501, -1.779513);

	glTexCoord2i(0,0);glVertex3f(-22.522558, -2.434794, -43.040985);
	glTexCoord2i(1,0);glVertex3f(-18.642921, -2.915483, -39.215607);
	glTexCoord2i(1,1);glVertex3f(-17.840303, -2.915497, -39.038090);
	glTexCoord2i(0,1);glVertex3f(-21.652910, -2.434810, -42.848640);

	glTexCoord2i(0,0);glVertex3f(22.603621, -2.563516, 39.378380);
	glTexCoord2i(1,0);glVertex3f(22.603621, -2.434834, 39.378380);
	glTexCoord2i(1,1);glVertex3f(18.317390, -2.915517, 35.281673);
	glTexCoord2i(0,1);glVertex3f(18.317390, -3.034281, 35.281673);

	glTexCoord2i(0,0);glVertex3f(-26.003929, -2.434792, -1.445370);
	glTexCoord2i(1,0);glVertex3f(-21.463562, -2.914344, -1.417352);
	glTexCoord2i(1,1);glVertex3f(-20.821766, -2.914345, -1.846188);
	glTexCoord2i(0,1);glVertex3f(-25.355083, -2.434792, -1.878916);

	glTexCoord2i(0,0);glVertex3f(20.672714, -2.434817, -43.183880);
	glTexCoord2i(1,0);glVertex3f(19.652914, -2.434831, -42.848640);
	glTexCoord2i(1,1);glVertex3f(15.442163, -2.915515, -38.411423);
	glTexCoord2i(0,1);glVertex3f(16.383356, -2.915501, -38.720825);

	glTexCoord2i(0,0);glVertex3f(-24.702139, -2.434794, -42.607437);
	glTexCoord2i(1,0);glVertex3f(-25.135687, -2.434794, -41.958591);
	glTexCoord2i(1,1);glVertex3f(-21.054638, -2.915481, -38.216640);
	glTexCoord2i(0,1);glVertex3f(-20.654507, -2.915481, -38.815475);

	glTexCoord2i(0,0);glVertex3f(19.652908, -2.563515, 42.849869);
	glTexCoord2i(1,0);glVertex3f(19.652908, -2.434831, 42.849869);
	glTexCoord2i(1,1);glVertex3f(15.594110, -2.915515, 38.485592);
	glTexCoord2i(0,1);glVertex3f(15.594110, -3.034279, 38.485592);

	glTexCoord2i(0,0);glVertex3f(21.316006, -2.434816, 43.292023);
	glTexCoord2i(1,0);glVertex3f(17.129021, -2.915501, 38.893665);
	glTexCoord2i(1,1);glVertex3f(16.422647, -2.915499, 38.753159);
	glTexCoord2i(0,1);glVertex3f(20.550640, -2.434815, 43.139782);

	glTexCoord2i(0,0);glVertex3f(-24.196194, -2.434792, 43.247604);
	glTexCoord2i(1,0);glVertex3f(-23.430828, -2.434792, 43.399845);
	glTexCoord2i(1,1);glVertex3f(-19.011393, -2.917253, 38.665600);
	glTexCoord2i(0,1);glVertex3f(-19.638803, -2.917253, 38.540798);

	glTexCoord2i(0,0);glVertex3f(24.463039, -2.434816, 0.734214);
	glTexCoord2i(1,0);glVertex3f(19.723127, -2.915501, 0.632204);
	glTexCoord2i(1,1);glVertex3f(19.323000, -2.915501, 1.231039);
	glTexCoord2i(0,1);glVertex3f(24.029495, -2.434816, 1.383062);

	glTexCoord2i(0,0);glVertex3f(-21.652916, -2.563493, 42.849869);
	glTexCoord2i(1,0);glVertex3f(-21.652916, -2.434810, 42.849869);
	glTexCoord2i(1,1);glVertex3f(-17.553947, -2.917267, 38.214752);
	glTexCoord2i(0,1);glVertex3f(-17.553947, -3.022755, 38.214752);

	glTexCoord2i(0,0);glVertex3f(-25.278587, -2.434792, 42.165211);
	glTexCoord2i(1,0);glVertex3f(-24.845039, -2.434792, 42.814056);
	glTexCoord2i(1,1);glVertex3f(-20.170698, -2.917253, 38.185394);
	glTexCoord2i(0,1);glVertex3f(-20.526098, -2.917253, 37.653507);

	glTexCoord2i(0,0);glVertex3f(-24.053293, -2.434794, -43.040985);
	glTexCoord2i(1,0);glVertex3f(-24.702139, -2.434794, -42.607437);
	glTexCoord2i(1,1);glVertex3f(-20.654507, -2.915481, -38.815475);
	glTexCoord2i(0,1);glVertex3f(-20.055672, -2.915483, -39.215607);

	glTexCoord2i(0,0);glVertex3f(24.029495, -2.434816, 1.383062);
	glTexCoord2i(1,0);glVertex3f(19.323000, -2.915501, 1.231039);
	glTexCoord2i(1,1);glVertex3f(18.724163, -2.915501, 1.631167);
	glTexCoord2i(0,1);glVertex3f(23.380650, -2.434816, 1.816606);

	glTexCoord2i(0,0);glVertex3f(-24.053293, -2.434794, -43.040985);
	glTexCoord2i(1,0);glVertex3f(-20.055672, -2.915483, -39.215607);
	glTexCoord2i(1,1);glVertex3f(-19.349298, -2.915483, -39.356113);
	glTexCoord2i(0,1);glVertex3f(-23.287926, -2.434794, -43.193226);

	glTexCoord2i(0,0);glVertex3f(-21.652908, -1.991876, -42.848640);
	glTexCoord2i(1,0);glVertex3f(-21.652910, -2.434810, -42.848640);
	glTexCoord2i(1,1);glVertex3f(-17.840303, -2.915497, -39.038090);
	glTexCoord2i(0,1);glVertex3f(-17.840303, -2.206727, -39.038090);

	glTexCoord2i(0,0);glVertex3f(-24.845039, -2.434792, 42.814056);
	glTexCoord2i(1,0);glVertex3f(-24.196194, -2.434792, 43.247604);
	glTexCoord2i(1,1);glVertex3f(-19.638803, -2.917253, 38.540798);
	glTexCoord2i(0,1);glVertex3f(-20.170698, -2.917253, 38.185394);

	glTexCoord2i(0,0);glVertex3f(-23.287926, -2.434794, -43.193226);
	glTexCoord2i(1,0);glVertex3f(-19.349298, -2.915483, -39.356113);
	glTexCoord2i(1,1);glVertex3f(-18.642921, -2.915483, -39.215607);
	glTexCoord2i(0,1);glVertex3f(-22.522558, -2.434794, -43.040985);

	glTexCoord2i(0,0);glVertex3f(22.603626, -2.434834, -39.377453);
	glTexCoord2i(1,0);glVertex3f(22.603626, -2.434834, -39.377453);
	glTexCoord2i(1,1);glVertex3f(18.165442, -2.915517, -35.207787);
	glTexCoord2i(0,1);glVertex3f(18.165442, -2.915517, -35.207787);

	glTexCoord2i(0,0);glVertex3f(-25.278587, -2.434792, 40.634476);
	glTexCoord2i(1,0);glVertex3f(-25.430828, -2.434792, 41.399841);
	glTexCoord2i(1,1);glVertex3f(-20.650898, -2.917253, 37.026093);
	glTexCoord2i(0,1);glVertex3f(-20.526098, -2.917253, 36.398682);

	glTexCoord2i(0,0);glVertex3f(22.203449, -2.434818, -43.183880);
	glTexCoord2i(1,0);glVertex3f(17.796106, -2.915503, -38.720825);
	glTexCoord2i(1,1);glVertex3f(18.394941, -2.915503, -38.320694);
	glTexCoord2i(0,1);glVertex3f(22.852293, -2.434818, -42.750332);

	glTexCoord2i(0,0);glVertex3f(22.603626, -2.563516, -39.377453);
	glTexCoord2i(1,0);glVertex3f(22.603626, -2.434834, -39.377453);
	glTexCoord2i(1,1);glVertex3f(18.165442, -2.915517, -35.207787);
	glTexCoord2i(0,1);glVertex3f(18.165442, -3.034281, -35.207787);

	glTexCoord2i(0,0);glVertex3f(-24.603628, -2.434810, 39.346527);
	glTexCoord2i(1,0);glVertex3f(-24.603628, -2.434810, 39.346527);
	glTexCoord2i(1,1);glVertex3f(-19.972797, -2.917267, 35.342884);
	glTexCoord2i(0,1);glVertex3f(-19.972797, -2.917267, 35.342884);

	glTexCoord2i(0,0);glVertex3f(-24.603624, -2.434810, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-24.603624, -2.434810, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-20.078472, -2.914363, 1.991259);
	glTexCoord2i(0,1);glVertex3f(-20.078472, -2.914363, 1.991259);

	glTexCoord2i(0,0);glVertex3f(-25.135687, -2.434794, -41.958591);
	glTexCoord2i(1,0);glVertex3f(-25.287928, -2.434794, -41.193230);
	glTexCoord2i(1,1);glVertex3f(-21.195145, -2.915481, -37.510269);
	glTexCoord2i(0,1);glVertex3f(-21.054638, -2.915481, -38.216640);

	glTexCoord2i(0,0);glVertex3f(22.603624, -2.434834, -2.000494);
	glTexCoord2i(1,0);glVertex3f(22.603624, -2.434834, -2.000494);
	glTexCoord2i(1,1);glVertex3f(18.007030, -2.915517, -1.891723);
	glTexCoord2i(0,1);glVertex3f(18.007030, -2.915517, -2.016505);

	glTexCoord2i(0,0);glVertex3f(24.029495, -2.434816, -1.445366);
	glTexCoord2i(1,0);glVertex3f(23.380650, -2.434816, -1.878912);
	glTexCoord2i(1,1);glVertex3f(18.724163, -2.915501, -1.779513);
	glTexCoord2i(0,1);glVertex3f(19.323000, -2.915501, -1.379383);

	glTexCoord2i(0,0);glVertex3f(-26.437475, -2.434792, 0.734210);
	glTexCoord2i(1,0);glVertex3f(-26.003929, -2.434792, 1.383058);
	glTexCoord2i(1,1);glVertex3f(-21.463562, -2.914344, 1.380346);
	glTexCoord2i(0,1);glVertex3f(-21.892397, -2.914344, 0.738548);

	glTexCoord2i(0,0);glVertex3f(-26.003929, -2.434792, 1.383058);
	glTexCoord2i(1,0);glVertex3f(-25.355083, -2.434792, 1.816602);
	glTexCoord2i(1,1);glVertex3f(-20.821766, -2.914345, 1.809180);
	glTexCoord2i(0,1);glVertex3f(-21.463562, -2.914344, 1.380346);

	glTexCoord2i(0,0);glVertex3f(-24.603624, -2.434810, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-24.603624, -2.434810, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-20.078472, -2.914363, 1.991259);
	glTexCoord2i(0,1);glVertex3f(-20.078472, -2.914363, 1.991259);

	glTexCoord2i(0,0);glVertex3f(23.285837, -2.434818, -42.101486);
	glTexCoord2i(1,0);glVertex3f(18.795069, -2.915503, -37.721855);
	glTexCoord2i(1,1);glVertex3f(18.935575, -2.915503, -37.015480);
	glTexCoord2i(0,1);glVertex3f(23.438078, -2.434818, -41.336121);

	glTexCoord2i(0,0);glVertex3f(22.603626, -2.434834, -39.377453);
	glTexCoord2i(1,0);glVertex3f(22.603626, -2.434834, -39.377453);
	glTexCoord2i(1,1);glVertex3f(18.165442, -2.915517, -35.207787);
	glTexCoord2i(0,1);glVertex3f(18.165442, -2.915517, -35.207787);

	glTexCoord2i(0,0);glVertex3f(22.603624, -2.434834, -2.000494);
	glTexCoord2i(1,0);glVertex3f(22.603624, -2.434834, -2.000494);
	glTexCoord2i(1,1);glVertex3f(18.007030, -2.915517, -2.016505);
	glTexCoord2i(0,1);glVertex3f(18.007030, -2.915517, -1.891723);

	glTexCoord2i(0,0);glVertex3f(24.463039, -2.434816, 0.734214);
	glTexCoord2i(1,0);glVertex3f(24.615280, -2.434816, -0.031152);
	glTexCoord2i(1,1);glVertex3f(19.863634, -2.915501, -0.074171);
	glTexCoord2i(0,1);glVertex3f(19.723127, -2.915501, 0.632204);

	glTexCoord2i(0,0);glVertex3f(19.652908, -2.434831, 42.849869);
	glTexCoord2i(1,0);glVertex3f(19.652908, -2.434831, 42.849869);
	glTexCoord2i(1,1);glVertex3f(15.594110, -2.915515, 38.485592);
	glTexCoord2i(0,1);glVertex3f(15.594110, -2.915515, 38.485592);

	glTexCoord2i(0,0);glVertex3f(22.203449, -2.434818, -43.183880);
	glTexCoord2i(1,0);glVertex3f(21.438080, -2.434818, -43.336121);
	glTexCoord2i(1,1);glVertex3f(17.089729, -2.915503, -38.861328);
	glTexCoord2i(0,1);glVertex3f(17.796106, -2.915503, -38.720825);

	glTexCoord2i(0,0);glVertex3f(-21.652910, -2.563493, -42.848640);
	glTexCoord2i(1,0);glVertex3f(-21.652910, -2.434810, -42.848640);
	glTexCoord2i(1,1);glVertex3f(-17.840303, -2.915497, -39.038090);
	glTexCoord2i(0,1);glVertex3f(-17.840303, -3.034261, -39.038090);

	glTexCoord2i(0,0);glVertex3f(20.550640, -2.434815, 43.139782);
	glTexCoord2i(1,0);glVertex3f(16.422647, -2.915499, 38.753159);
	glTexCoord2i(1,1);glVertex3f(15.594110, -2.915515, 38.485592);
	glTexCoord2i(0,1);glVertex3f(19.652908, -2.434831, 42.849869);

	glTexCoord2i(0,0);glVertex3f(-25.355083, -2.434792, 1.816602);
	glTexCoord2i(1,0);glVertex3f(-24.603624, -2.434810, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-20.078472, -2.914363, 1.991259);
	glTexCoord2i(0,1);glVertex3f(-20.821766, -2.914345, 1.809180);

	glTexCoord2i(0,0);glVertex3f(23.438078, -2.434818, -41.336121);
	glTexCoord2i(1,0);glVertex3f(18.935575, -2.915503, -37.015480);
	glTexCoord2i(1,1);glVertex3f(18.795069, -2.915503, -36.309105);
	glTexCoord2i(0,1);glVertex3f(23.285837, -2.434818, -40.570751);

	glTexCoord2i(0,0);glVertex3f(24.615280, -2.434816, -0.031152);
	glTexCoord2i(1,0);glVertex3f(24.463039, -2.434816, -0.796520);
	glTexCoord2i(1,1);glVertex3f(19.723127, -2.915501, -0.780546);
	glTexCoord2i(0,1);glVertex3f(19.863634, -2.915501, -0.074171);

	glTexCoord2i(0,0);glVertex3f(22.603624, -2.563516, 1.999180);
	glTexCoord2i(1,0);glVertex3f(22.603624, -2.434834, 1.999180);
	glTexCoord2i(1,1);glVertex3f(18.007030, -2.915517, 1.799669);
	glTexCoord2i(0,1);glVertex3f(18.007030, -3.034281, 1.799669);

	glTexCoord2i(0,0);glVertex3f(22.852293, -2.434818, -42.750332);
	glTexCoord2i(1,0);glVertex3f(18.394941, -2.915503, -38.320694);
	glTexCoord2i(1,1);glVertex3f(18.795069, -2.915503, -37.721855);
	glTexCoord2i(0,1);glVertex3f(23.285837, -2.434818, -42.101486);

	glTexCoord2i(0,0);glVertex3f(-24.603628, -2.434810, 39.346527);
	glTexCoord2i(1,0);glVertex3f(-24.603628, -2.434810, 39.346527);
	glTexCoord2i(1,1);glVertex3f(-19.972797, -2.917267, 35.342884);
	glTexCoord2i(0,1);glVertex3f(-19.972797, -2.917267, 35.342884);

	glTexCoord2i(0,0);glVertex3f(23.316006, -2.434816, 41.292023);
	glTexCoord2i(1,0);glVertex3f(23.163765, -2.434816, 40.526657);
	glTexCoord2i(1,1);glVertex3f(18.834360, -2.915501, 36.341446);
	glTexCoord2i(0,1);glVertex3f(18.974867, -2.915501, 37.047821);

	glTexCoord2i(0,0);glVertex3f(-24.603622, -2.434810, -39.377453);
	glTexCoord2i(1,0);glVertex3f(-24.603622, -2.434810, -39.377453);
	glTexCoord2i(1,1);glVertex3f(-20.563583, -2.915497, -35.834450);
	glTexCoord2i(0,1);glVertex3f(-20.563583, -2.915497, -35.834450);

	glTexCoord2i(0,0);glVertex3f(-24.603628, -2.434810, 39.346527);
	glTexCoord2i(1,0);glVertex3f(-25.278587, -2.434792, 40.634476);
	glTexCoord2i(1,1);glVertex3f(-20.526098, -2.917253, 36.398682);
	glTexCoord2i(0,1);glVertex3f(-19.972797, -2.917267, 35.342884);

	glTexCoord2i(0,0);glVertex3f(23.163765, -2.434816, 42.057392);
	glTexCoord2i(1,0);glVertex3f(23.316006, -2.434816, 41.292023);
	glTexCoord2i(1,1);glVertex3f(18.974867, -2.915501, 37.047821);
	glTexCoord2i(0,1);glVertex3f(18.834360, -2.915501, 37.754196);

	glTexCoord2i(0,0);glVertex3f(-25.287928, -2.434794, -41.193230);
	glTexCoord2i(1,0);glVertex3f(-25.135687, -2.434794, -40.427856);
	glTexCoord2i(1,1);glVertex3f(-21.054638, -2.915481, -36.803890);
	glTexCoord2i(0,1);glVertex3f(-21.195145, -2.915481, -37.510269);

	glTexCoord2i(0,0);glVertex3f(19.652908, -2.434831, 42.849869);
	glTexCoord2i(1,0);glVertex3f(19.652908, -2.434831, 42.849869);
	glTexCoord2i(1,1);glVertex3f(15.594110, -2.915515, 38.485592);
	glTexCoord2i(0,1);glVertex3f(15.594110, -2.915515, 38.485592);

	glTexCoord2i(0,0);glVertex3f(21.438080, -2.434818, -43.336121);
	glTexCoord2i(1,0);glVertex3f(20.672714, -2.434817, -43.183880);
	glTexCoord2i(1,1);glVertex3f(16.383356, -2.915501, -38.720825);
	glTexCoord2i(0,1);glVertex3f(17.089729, -2.915503, -38.861328);

	glTexCoord2i(0,0);glVertex3f(-25.135687, -2.434794, -40.427856);
	glTexCoord2i(1,0);glVertex3f(-24.603622, -2.434810, -39.377453);
	glTexCoord2i(1,1);glVertex3f(-20.563583, -2.915497, -35.834450);
	glTexCoord2i(0,1);glVertex3f(-21.054638, -2.915481, -36.803890);

	glTexCoord2i(0,0);glVertex3f(22.603624, -2.563516, -2.000494);
	glTexCoord2i(1,0);glVertex3f(22.603624, -2.434834, -2.000494);
	glTexCoord2i(1,1);glVertex3f(18.007030, -2.915517, -1.891723);
	glTexCoord2i(0,1);glVertex3f(18.007030, -3.034281, -1.891723);

	glTexCoord2i(0,0);glVertex3f(-26.437475, -2.434792, -0.796522);
	glTexCoord2i(1,0);glVertex3f(-21.892397, -2.914344, -0.775552);
	glTexCoord2i(1,1);glVertex3f(-21.463562, -2.914344, -1.417352);
	glTexCoord2i(0,1);glVertex3f(-26.003929, -2.434792, -1.445370);

	glTexCoord2i(0,0);glVertex3f(22.730221, -2.434816, 42.706234);
	glTexCoord2i(1,0);glVertex3f(23.163765, -2.434816, 42.057392);
	glTexCoord2i(1,1);glVertex3f(18.834360, -2.915501, 37.754196);
	glTexCoord2i(0,1);glVertex3f(18.434233, -2.915501, 38.353027);

	glTexCoord2i(0,0);glVertex3f(23.285837, -2.434818, -40.570751);
	glTexCoord2i(1,0);glVertex3f(18.795069, -2.915503, -36.309105);
	glTexCoord2i(1,1);glVertex3f(18.165442, -2.915517, -35.207787);
	glTexCoord2i(0,1);glVertex3f(22.603626, -2.434834, -39.377453);

	glTexCoord2i(0,0);glVertex3f(19.652914, -2.434831, -42.848640);
	glTexCoord2i(1,0);glVertex3f(19.652914, -2.434831, -42.848640);
	glTexCoord2i(1,1);glVertex3f(15.442163, -2.915515, -38.411423);
	glTexCoord2i(0,1);glVertex3f(15.442163, -2.915515, -38.411423);

	glTexCoord2i(0,0);glVertex3f(-21.652916, -2.434810, 42.849869);
	glTexCoord2i(1,0);glVertex3f(-21.652916, -2.434810, 42.849869);
	glTexCoord2i(1,1);glVertex3f(-17.553947, -2.917267, 38.214752);
	glTexCoord2i(0,1);glVertex3f(-17.553947, -2.917267, 38.214752);

	glTexCoord2i(0,0);glVertex3f(-26.589716, -2.434792, -0.031156);
	glTexCoord2i(1,0);glVertex3f(-22.042982, -2.914344, -0.018502);
	glTexCoord2i(1,1);glVertex3f(-21.892397, -2.914344, -0.775552);
	glTexCoord2i(0,1);glVertex3f(-26.437475, -2.434792, -0.796522);

	glTexCoord2i(0,0);glVertex3f(19.652914, -2.434831, -42.848640);
	glTexCoord2i(1,0);glVertex3f(19.652914, -2.434831, -42.848640);
	glTexCoord2i(1,1);glVertex3f(15.442163, -2.915515, -38.411423);
	glTexCoord2i(0,1);glVertex3f(15.442163, -2.915515, -38.411423);

	glTexCoord2i(0,0);glVertex3f(-24.603622, -2.563492, -39.377453);
	glTexCoord2i(1,0);glVertex3f(-24.603622, -2.434810, -39.377453);
	glTexCoord2i(1,1);glVertex3f(-20.563583, -2.915497, -35.834450);
	glTexCoord2i(0,1);glVertex3f(-20.563583, -3.034261, -35.834450);

	glTexCoord2i(0,0);glVertex3f(22.603624, -2.434834, 1.999180);
	glTexCoord2i(1,0);glVertex3f(22.603624, -1.968482, 1.999180);
	glTexCoord2i(1,1);glVertex3f(20.987526, -2.006327, 1.997054);
	glTexCoord2i(0,1);glVertex3f(18.007030, -2.915517, 1.799669);

	glTexCoord2i(0,0);glVertex3f(-26.589716, -2.434792, -0.031156);
	glTexCoord2i(1,0);glVertex3f(-26.437475, -2.434792, 0.734210);
	glTexCoord2i(1,1);glVertex3f(-21.892397, -2.914344, 0.738548);
	glTexCoord2i(0,1);glVertex3f(-22.042982, -2.914344, -0.018502);

	glTexCoord2i(0,0);glVertex3f(19.652914, -2.563515, -42.848640);
	glTexCoord2i(1,0);glVertex3f(19.652914, -2.434831, -42.848640);
	glTexCoord2i(1,1);glVertex3f(15.442163, -2.915515, -38.411423);
	glTexCoord2i(0,1);glVertex3f(15.442163, -3.034279, -38.411423);

	glTexCoord2i(0,0);glVertex3f(-24.603624, -2.563492, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-24.603624, -2.434810, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-20.078472, -2.914363, -1.967748);
	glTexCoord2i(0,1);glVertex3f(-20.078472, -3.041647, -1.967748);

	glTexCoord2i(0,0);glVertex3f(-24.603624, -2.434810, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-24.603624, -2.434810, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-20.078472, -2.914363, -1.967748);
	glTexCoord2i(0,1);glVertex3f(-20.078472, -2.914363, -1.967748);

	glTexCoord2i(0,0);glVertex3f(-24.603624, -2.434810, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-24.603624, -2.434810, -2.001814);
	glTexCoord2i(1,1);glVertex3f(-20.078472, -2.914363, -1.967748);
	glTexCoord2i(0,1);glVertex3f(-20.078472, -2.914363, -1.967748);

	glTexCoord2i(0,0);glVertex3f(-24.603624, -2.434810, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-25.355083, -2.434792, -1.878916);
	glTexCoord2i(1,1);glVertex3f(-20.821766, -2.914345, -1.846188);
	glTexCoord2i(0,1);glVertex3f(-20.078472, -2.914363, -1.967748);

	glTexCoord2i(0,0);glVertex3f(-24.603628, -2.563492, 39.346527);
	glTexCoord2i(1,0);glVertex3f(-24.603628, -2.434810, 39.346527);
	glTexCoord2i(1,1);glVertex3f(-19.972797, -2.917267, 35.342884);
	glTexCoord2i(0,1);glVertex3f(-19.972797, -3.022755, 35.342884);

	glTexCoord2i(0,0);glVertex3f(-22.665459, -2.434793, 43.247604);
	glTexCoord2i(1,0);glVertex3f(-21.652916, -2.434810, 42.849869);
	glTexCoord2i(1,1);glVertex3f(-17.553947, -2.917267, 38.214752);
	glTexCoord2i(0,1);glVertex3f(-18.383980, -2.917253, 38.540798);

	glTexCoord2i(0,0);glVertex3f(22.603621, -2.434834, 39.378380);
	glTexCoord2i(1,0);glVertex3f(22.603621, -2.434834, 39.378380);
	glTexCoord2i(1,1);glVertex3f(18.317390, -2.915517, 35.281673);
	glTexCoord2i(0,1);glVertex3f(18.317390, -2.915517, 35.281673);

	glTexCoord2i(0,0);glVertex3f(-23.430828, -2.434792, 43.399845);
	glTexCoord2i(1,0);glVertex3f(-22.665459, -2.434793, 43.247604);
	glTexCoord2i(1,1);glVertex3f(-18.383980, -2.917253, 38.540798);
	glTexCoord2i(0,1);glVertex3f(-19.011393, -2.917253, 38.665600);

	glTexCoord2i(0,0);glVertex3f(-21.652910, -2.434810, -42.848640);
	glTexCoord2i(1,0);glVertex3f(-17.840303, -2.915497, -39.038090);
	glTexCoord2i(1,1);glVertex3f(-17.840303, -2.206727, -39.038090);
	glTexCoord2i(0,1);glVertex3f(-21.652908, -1.991876, -42.848640);

	glTexCoord2i(0,0);glVertex3f(22.081375, -2.434816, 43.139782);
	glTexCoord2i(1,0);glVertex3f(17.835396, -2.915501, 38.753159);
	glTexCoord2i(1,1);glVertex3f(17.129021, -2.915501, 38.893665);
	glTexCoord2i(0,1);glVertex3f(21.316006, -2.434816, 43.292023);

	glTexCoord2i(0,0);glVertex3f(22.603621, -2.434834, 39.378380);
	glTexCoord2i(1,0);glVertex3f(22.603621, -2.434834, 39.378380);
	glTexCoord2i(1,1);glVertex3f(18.317390, -2.915517, 35.281673);
	glTexCoord2i(0,1);glVertex3f(18.317390, -2.915517, 35.281673);

	glTexCoord2i(0,0);glVertex3f(23.380650, -2.434816, 1.816606);
	glTexCoord2i(1,0);glVertex3f(18.724163, -2.915501, 1.631167);
	glTexCoord2i(1,1);glVertex3f(18.007030, -2.915517, 1.799669);
	glTexCoord2i(0,1);glVertex3f(22.603624, -2.434834, 1.999180);

	glTexCoord2i(0,0);glVertex3f(23.163765, -2.434816, 40.526657);
	glTexCoord2i(1,0);glVertex3f(22.603621, -2.434834, 39.378380);
	glTexCoord2i(1,1);glVertex3f(18.317390, -2.915517, 35.281673);
	glTexCoord2i(0,1);glVertex3f(18.834360, -2.915501, 36.341446);

	glTexCoord2i(0,0);glVertex3f(-25.430828, -2.434792, 41.399841);
	glTexCoord2i(1,0);glVertex3f(-25.278587, -2.434792, 42.165211);
	glTexCoord2i(1,1);glVertex3f(-20.526098, -2.917253, 37.653507);
	glTexCoord2i(0,1);glVertex3f(-20.650898, -2.917253, 37.026093);

	glTexCoord2i(0,0);glVertex3f(22.081375, -2.434816, 43.139782);
	glTexCoord2i(1,0);glVertex3f(22.730221, -2.434816, 42.706234);
	glTexCoord2i(1,1);glVertex3f(18.434233, -2.915501, 38.353027);
	glTexCoord2i(0,1);glVertex3f(17.835396, -2.915501, 38.753159);

	glTexCoord2i(0,0);glVertex3f(24.463039, -2.434816, -0.796520);
	glTexCoord2i(1,0);glVertex3f(24.029495, -2.434816, -1.445366);
	glTexCoord2i(1,1);glVertex3f(19.323000, -2.915501, -1.379383);
	glTexCoord2i(0,1);glVertex3f(19.723127, -2.915501, -0.780546);

	glTexCoord2i(0,0);glVertex3f(-21.652916, -2.434810, 42.849869);
	glTexCoord2i(1,0);glVertex3f(-21.652916, -2.434810, 42.849869);
	glTexCoord2i(1,1);glVertex3f(-17.553947, -2.917267, 38.214752);
	glTexCoord2i(0,1);glVertex3f(-17.553947, -2.917267, 38.214752);

	glTexCoord2i(0,0);glVertex3f(-24.603622, -2.434810, -39.377453);
	glTexCoord2i(1,0);glVertex3f(-24.603622, -2.434810, -39.377453);
	glTexCoord2i(1,1);glVertex3f(-20.563583, -2.915497, -35.834450);
	glTexCoord2i(0,1);glVertex3f(-20.563583, -2.915497, -35.834450);

	glTexCoord2i(0,0);glVertex3f(-24.603624, -2.563492, 2.000680);
	glTexCoord2i(1,0);glVertex3f(-24.603624, -2.434810, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-20.078472, -2.914363, 1.991259);
	glTexCoord2i(0,1);glVertex3f(-20.078472, -3.041647, 1.991259);

	glTexCoord2i(0,0);glVertex3f(18.007030, -2.915517, -2.016505);
	glTexCoord2i(1,0);glVertex3f(22.603624, -2.434834, -2.000494);
	glTexCoord2i(1,1);glVertex3f(22.603624, -1.963130, -2.000494);
	glTexCoord2i(0,1);glVertex3f(20.966909, -2.017757, -2.016504);

	glTexCoord2i(0,0);glVertex3f(15.594110, -2.915515, 38.485592);
	glTexCoord2i(1,0);glVertex3f(18.005522, -1.987051, 41.005726);
	glTexCoord2i(1,1);glVertex3f(19.652908, -2.000999, 42.849869);
	glTexCoord2i(0,1);glVertex3f(19.652908, -2.434831, 42.849869);

	glTexCoord2i(0,0);glVertex3f(18.317390, -2.915517, 35.281673);
	glTexCoord2i(1,0);glVertex3f(22.603621, -2.434834, 39.378380);
	glTexCoord2i(1,1);glVertex3f(22.603621, -1.993284, 39.378380);
	glTexCoord2i(0,1);glVertex3f(20.987225, -2.009025, 37.983166);

	glTexCoord2i(0,0);glVertex3f(15.442163, -2.915515, -38.411423);
	glTexCoord2i(1,0);glVertex3f(19.652914, -2.434831, -42.848640);
	glTexCoord2i(1,1);glVertex3f(19.652916, -1.992153, -42.848640);
	glTexCoord2i(0,1);glVertex3f(15.442163, -2.143213, -38.411423);

	glTexCoord2i(0,0);glVertex3f(18.165442, -2.915517, -35.207787);
	glTexCoord2i(1,0);glVertex3f(18.165442, -2.239837, -35.207787);
	glTexCoord2i(1,1);glVertex3f(22.603626, -1.993638, -39.377453);
	glTexCoord2i(0,1);glVertex3f(22.603626, -2.434834, -39.377453);

	glTexCoord2i(0,0);glVertex3f(-20.563583, -2.915497, -35.834450);
	glTexCoord2i(1,0);glVertex3f(-24.603622, -2.434810, -39.377453);
	glTexCoord2i(1,1);glVertex3f(-24.603622, -2.003260, -39.377453);
	glTexCoord2i(0,1);glVertex3f(-20.563583, -2.095557, -35.834450);

	glTexCoord2i(0,0);glVertex3f(-20.078472, -2.914363, 1.991259);
	glTexCoord2i(1,0);glVertex3f(-24.603624, -2.434810, 2.000680);
	glTexCoord2i(1,1);glVertex3f(-24.603624, -2.005714, 2.000680);
	glTexCoord2i(0,1);glVertex3f(-20.078472, -2.077625, 1.991259);

	glTexCoord2i(0,0);glVertex3f(-24.603624, -2.434810, -2.001814);
	glTexCoord2i(1,0);glVertex3f(-20.078472, -2.914363, -1.967748);
	glTexCoord2i(1,1);glVertex3f(-20.078472, -2.151697, -1.967748);
	glTexCoord2i(0,1);glVertex3f(-24.603624, -2.006974, -2.001814);

	glTexCoord2i(0,0);glVertex3f(-24.603628, -2.434810, 39.346527);
	glTexCoord2i(1,0);glVertex3f(-19.972797, -2.917267, 35.342884);
	glTexCoord2i(1,1);glVertex3f(-19.972797, -2.122735, 35.342884);
	glTexCoord2i(0,1);glVertex3f(-24.603628, -1.999098, 39.346527);

	glTexCoord2i(0,0);glVertex3f(-21.652916, -2.434810, 42.849869);
	glTexCoord2i(1,0);glVertex3f(-21.652916, -2.022758, 42.849869);
	glTexCoord2i(1,1);glVertex3f(-17.553947, -2.156555, 38.468082);
	glTexCoord2i(0,1);glVertex3f(-17.553947, -2.917267, 38.214752);

	glTexCoord2i(0,0);glVertex3f(-17.840303, -3.034261, -39.038090);
	glTexCoord2i(1,0);glVertex3f(-17.840303, -2.915497, -39.038090);
	glTexCoord2i(1,1);glVertex3f(-17.840303, -2.137715, -39.038090);
	glTexCoord2i(0,1);glVertex3f(-17.840303, -2.256477, -39.038090);

	glTexCoord2i(0,0);glVertex3f(19.863634, -2.915501, -0.074171);
	glTexCoord2i(1,0);glVertex3f(19.723127, -2.915501, -0.780546);
	glTexCoord2i(1,1);glVertex3f(19.723127, -2.137717, -0.780546);
	glTexCoord2i(0,1);glVertex3f(19.863634, -2.137717, -0.074171);

	glTexCoord2i(0,0);glVertex3f(15.594110, -2.915515, 38.485592);
	glTexCoord2i(1,0);glVertex3f(15.594110, -2.915515, 38.485592);
	glTexCoord2i(1,1);glVertex3f(15.594111, -2.137731, 38.485592);
	glTexCoord2i(0,1);glVertex3f(15.594111, -2.137731, 38.485592);

	glTexCoord2i(0,0);glVertex3f(18.795069, -2.915503, -36.309105);
	glTexCoord2i(1,0);glVertex3f(18.935575, -2.915503, -37.015480);
	glTexCoord2i(1,1);glVertex3f(18.935575, -2.137719, -37.015480);
	glTexCoord2i(0,1);glVertex3f(18.795069, -2.137719, -36.309105);

	glTexCoord2i(0,0);glVertex3f(-20.821766, -2.914345, -1.846188);
	glTexCoord2i(1,0);glVertex3f(-21.463562, -2.914344, -1.417352);
	glTexCoord2i(1,1);glVertex3f(-21.463562, -2.136560, -1.417352);
	glTexCoord2i(0,1);glVertex3f(-20.821766, -2.136561, -1.846188);

	glTexCoord2i(0,0);glVertex3f(-21.054638, -2.915481, -38.216640);
	glTexCoord2i(1,0);glVertex3f(-21.195145, -2.915481, -37.510269);
	glTexCoord2i(1,1);glVertex3f(-21.195145, -2.137697, -37.510269);
	glTexCoord2i(0,1);glVertex3f(-21.054638, -2.137697, -38.216640);

	glTexCoord2i(0,0);glVertex3f(16.422647, -2.915499, 38.753159);
	glTexCoord2i(1,0);glVertex3f(17.129021, -2.915501, 38.893665);
	glTexCoord2i(1,1);glVertex3f(17.129021, -2.137717, 38.893665);
	glTexCoord2i(0,1);glVertex3f(16.422647, -2.137715, 38.753159);

	glTexCoord2i(0,0);glVertex3f(-21.463562, -2.914344, 1.380346);
	glTexCoord2i(1,0);glVertex3f(-20.821766, -2.914345, 1.809180);
	glTexCoord2i(1,1);glVertex3f(-20.821766, -2.136561, 1.809180);
	glTexCoord2i(0,1);glVertex3f(-21.463562, -2.136560, 1.380346);

	glTexCoord2i(0,0);glVertex3f(-20.078472, -2.914363, -1.967748);
	glTexCoord2i(1,0);glVertex3f(-20.821766, -2.914345, -1.846188);
	glTexCoord2i(1,1);glVertex3f(-20.821766, -2.136561, -1.846188);
	glTexCoord2i(0,1);glVertex3f(-20.078472, -2.136579, -1.967748);

	glTexCoord2i(0,0);glVertex3f(-20.526098, -2.917253, 37.653507);
	glTexCoord2i(1,0);glVertex3f(-20.170698, -2.917253, 38.185394);
	glTexCoord2i(1,1);glVertex3f(-20.170698, -2.139469, 38.185394);
	glTexCoord2i(0,1);glVertex3f(-20.526098, -2.139469, 37.653507);

	glTexCoord2i(0,0);glVertex3f(-21.195145, -2.915481, -37.510269);
	glTexCoord2i(1,0);glVertex3f(-21.054638, -2.915481, -36.803890);
	glTexCoord2i(1,1);glVertex3f(-21.054638, -2.137697, -36.803890);
	glTexCoord2i(0,1);glVertex3f(-21.195145, -2.137697, -37.510269);

	glTexCoord2i(0,0);glVertex3f(17.129021, -2.915501, 38.893665);
	glTexCoord2i(1,0);glVertex3f(17.835396, -2.915501, 38.753159);
	glTexCoord2i(1,1);glVertex3f(17.835396, -2.137717, 38.753159);
	glTexCoord2i(0,1);glVertex3f(17.129021, -2.137717, 38.893665);

	glTexCoord2i(0,0);glVertex3f(-20.170698, -2.917253, 38.185394);
	glTexCoord2i(1,0);glVertex3f(-19.638803, -2.917253, 38.540798);
	glTexCoord2i(1,1);glVertex3f(-19.638803, -2.139469, 38.540798);
	glTexCoord2i(0,1);glVertex3f(-20.170698, -2.139469, 38.185394);

	glTexCoord2i(0,0);glVertex3f(-19.011393, -2.917253, 38.665600);
	glTexCoord2i(1,0);glVertex3f(-18.383980, -2.917253, 38.540798);
	glTexCoord2i(1,1);glVertex3f(-18.383980, -2.139469, 38.540798);
	glTexCoord2i(0,1);glVertex3f(-19.011393, -2.139469, 38.665600);

	glTexCoord2i(0,0);glVertex3f(-21.054638, -2.915481, -36.803890);
	glTexCoord2i(1,0);glVertex3f(-20.563583, -2.915497, -35.834450);
	glTexCoord2i(1,1);glVertex3f(-20.563583, -2.137713, -35.834450);
	glTexCoord2i(0,1);glVertex3f(-21.054638, -2.137697, -36.803890);

	glTexCoord2i(0,0);glVertex3f(18.935575, -2.915503, -37.015480);
	glTexCoord2i(1,0);glVertex3f(18.795069, -2.915503, -37.721855);
	glTexCoord2i(1,1);glVertex3f(18.795069, -2.137719, -37.721855);
	glTexCoord2i(0,1);glVertex3f(18.935575, -2.137719, -37.015480);

	glTexCoord2i(0,0);glVertex3f(17.089729, -2.915503, -38.861328);
	glTexCoord2i(1,0);glVertex3f(16.383356, -2.915501, -38.720825);
	glTexCoord2i(1,1);glVertex3f(16.383356, -2.137719, -38.720825);
	glTexCoord2i(0,1);glVertex3f(17.089729, -2.137719, -38.861328);

	glTexCoord2i(0,0);glVertex3f(19.723127, -2.915501, -0.780546);
	glTexCoord2i(1,0);glVertex3f(19.323000, -2.915501, -1.379383);
	glTexCoord2i(1,1);glVertex3f(19.323000, -2.137717, -1.379383);
	glTexCoord2i(0,1);glVertex3f(19.723127, -2.137717, -0.780546);

	glTexCoord2i(0,0);glVertex3f(19.323000, -2.915501, -1.379383);
	glTexCoord2i(1,0);glVertex3f(18.724163, -2.915501, -1.779513);
	glTexCoord2i(1,1);glVertex3f(18.724163, -2.137717, -1.779513);
	glTexCoord2i(0,1);glVertex3f(19.323000, -2.137717, -1.379383);

	glTexCoord2i(0,0);glVertex3f(18.974867, -2.915501, 37.047821);
	glTexCoord2i(1,0);glVertex3f(18.834360, -2.915501, 36.341446);
	glTexCoord2i(1,1);glVertex3f(18.834360, -2.137717, 36.341446);
	glTexCoord2i(0,1);glVertex3f(18.974867, -2.137717, 37.047821);

	glTexCoord2i(0,0);glVertex3f(-18.642921, -2.915483, -39.215607);
	glTexCoord2i(1,0);glVertex3f(-19.349298, -2.915483, -39.356113);
	glTexCoord2i(1,1);glVertex3f(-19.349298, -2.137699, -39.356113);
	glTexCoord2i(0,1);glVertex3f(-18.642921, -2.137699, -39.215607);

	glTexCoord2i(0,0);glVertex3f(-20.526098, -2.917253, 36.398682);
	glTexCoord2i(1,0);glVertex3f(-20.650898, -2.917253, 37.026093);
	glTexCoord2i(1,1);glVertex3f(-20.650898, -2.139469, 37.026093);
	glTexCoord2i(0,1);glVertex3f(-20.526098, -2.139469, 36.398682);

	glTexCoord2i(0,0);glVertex3f(-17.840303, -2.915497, -39.038090);
	glTexCoord2i(1,0);glVertex3f(-18.642921, -2.915483, -39.215607);
	glTexCoord2i(1,1);glVertex3f(-18.642921, -2.137699, -39.215607);
	glTexCoord2i(0,1);glVertex3f(-17.840303, -2.137715, -39.038090);

	glTexCoord2i(0,0);glVertex3f(-20.821766, -2.914345, 1.809180);
	glTexCoord2i(1,0);glVertex3f(-20.078472, -2.914363, 1.991259);
	glTexCoord2i(1,1);glVertex3f(-20.078472, -2.136579, 1.991259);
	glTexCoord2i(0,1);glVertex3f(-20.821766, -2.136561, 1.809180);

	glTexCoord2i(0,0);glVertex3f(19.323000, -2.915501, 1.231039);
	glTexCoord2i(1,0);glVertex3f(19.723127, -2.915501, 0.632204);
	glTexCoord2i(1,1);glVertex3f(19.723127, -2.137717, 0.632204);
	glTexCoord2i(0,1);glVertex3f(19.323000, -2.137717, 1.231039);

	glTexCoord2i(0,0);glVertex3f(17.835396, -2.915501, 38.753159);
	glTexCoord2i(1,0);glVertex3f(18.434233, -2.915501, 38.353027);
	glTexCoord2i(1,1);glVertex3f(18.434233, -2.137717, 38.353027);
	glTexCoord2i(0,1);glVertex3f(17.835396, -2.137717, 38.753159);

	glTexCoord2i(0,0);glVertex3f(18.007030, -2.915517, -2.016505);
	glTexCoord2i(1,0);glVertex3f(18.007030, -2.915517, -1.891723);
	glTexCoord2i(1,1);glVertex3f(18.007030, -2.137733, -1.891723);
	glTexCoord2i(0,1);glVertex3f(18.007030, -2.137733, -2.016505);

	glTexCoord2i(0,0);glVertex3f(-18.383980, -2.917253, 38.540798);
	glTexCoord2i(1,0);glVertex3f(-17.553947, -2.917267, 38.214752);
	glTexCoord2i(1,1);glVertex3f(-17.553947, -2.139483, 38.214752);
	glTexCoord2i(0,1);glVertex3f(-18.383980, -2.139469, 38.540798);

	glTexCoord2i(0,0);glVertex3f(18.165442, -2.915517, -35.207787);
	glTexCoord2i(1,0);glVertex3f(18.165442, -2.915517, -35.207787);
	glTexCoord2i(1,1);glVertex3f(18.165442, -2.137733, -35.207787);
	glTexCoord2i(0,1);glVertex3f(18.165442, -2.137733, -35.207787);

	glTexCoord2i(0,0);glVertex3f(18.007030, -2.915517, 1.799669);
	glTexCoord2i(1,0);glVertex3f(18.724163, -2.915501, 1.631167);
	glTexCoord2i(1,1);glVertex3f(18.724163, -2.137717, 1.631167);
	glTexCoord2i(0,1);glVertex3f(18.007030, -2.137733, 1.799669);

	glTexCoord2i(0,0);glVertex3f(-20.055672, -2.915483, -39.215607);
	glTexCoord2i(1,0);glVertex3f(-20.654507, -2.915481, -38.815475);
	glTexCoord2i(1,1);glVertex3f(-20.654507, -2.137697, -38.815475);
	glTexCoord2i(0,1);glVertex3f(-20.055672, -2.137699, -39.215607);

	glTexCoord2i(0,0);glVertex3f(-20.654507, -2.915481, -38.815475);
	glTexCoord2i(1,0);glVertex3f(-21.054638, -2.915481, -38.216640);
	glTexCoord2i(1,1);glVertex3f(-21.054638, -2.137697, -38.216640);
	glTexCoord2i(0,1);glVertex3f(-20.654507, -2.137697, -38.815475);

	glTexCoord2i(0,0);glVertex3f(18.165442, -2.915517, -35.207787);
	glTexCoord2i(1,0);glVertex3f(18.795069, -2.915503, -36.309105);
	glTexCoord2i(1,1);glVertex3f(18.795069, -2.137719, -36.309105);
	glTexCoord2i(0,1);glVertex3f(18.165442, -2.137733, -35.207787);

	glTexCoord2i(0,0);glVertex3f(-20.078472, -2.914363, 1.991259);
	glTexCoord2i(1,0);glVertex3f(-20.078472, -2.914363, 1.991259);
	glTexCoord2i(1,1);glVertex3f(-20.078472, -2.136579, 1.991259);
	glTexCoord2i(0,1);glVertex3f(-20.078472, -2.136579, 1.991259);

	glTexCoord2i(0,0);glVertex3f(18.007030, -3.034281, 1.799669);
	glTexCoord2i(1,0);glVertex3f(18.007030, -2.915517, 1.799669);
	glTexCoord2i(1,1);glVertex3f(18.007030, -2.137733, 1.799669);
	glTexCoord2i(0,1);glVertex3f(18.007030, -2.256497, 1.799669);

	glTexCoord2i(0,0);glVertex3f(-17.553947, -2.917267, 38.214752);
	glTexCoord2i(1,0);glVertex3f(-17.553947, -2.917267, 38.214752);
	glTexCoord2i(1,1);glVertex3f(-17.553947, -2.139483, 38.214752);
	glTexCoord2i(0,1);glVertex3f(-17.553947, -2.139483, 38.214752);

	glTexCoord2i(0,0);glVertex3f(-20.650898, -2.917253, 37.026093);
	glTexCoord2i(1,0);glVertex3f(-20.526098, -2.917253, 37.653507);
	glTexCoord2i(1,1);glVertex3f(-20.526098, -2.139469, 37.653507);
	glTexCoord2i(0,1);glVertex3f(-20.650898, -2.139469, 37.026093);

	glTexCoord2i(0,0);glVertex3f(-19.972797, -2.917267, 35.342884);
	glTexCoord2i(1,0);glVertex3f(-20.526098, -2.917253, 36.398682);
	glTexCoord2i(1,1);glVertex3f(-20.526098, -2.139469, 36.398682);
	glTexCoord2i(0,1);glVertex3f(-19.972797, -2.139483, 35.342884);

	glTexCoord2i(0,0);glVertex3f(-21.463562, -2.914344, -1.417352);
	glTexCoord2i(1,0);glVertex3f(-21.892397, -2.914344, -0.775552);
	glTexCoord2i(1,1);glVertex3f(-21.892397, -2.136560, -0.775552);
	glTexCoord2i(0,1);glVertex3f(-21.463562, -2.136560, -1.417352);

	glTexCoord2i(0,0);glVertex3f(-22.042982, -2.914344, -0.018502);
	glTexCoord2i(1,0);glVertex3f(-21.892397, -2.914344, 0.738548);
	glTexCoord2i(1,1);glVertex3f(-21.892397, -2.136560, 0.738548);
	glTexCoord2i(0,1);glVertex3f(-22.042982, -2.136560, -0.018502);

	glTexCoord2i(0,0);glVertex3f(16.383356, -2.915501, -38.720825);
	glTexCoord2i(1,0);glVertex3f(15.442163, -2.915515, -38.411423);
	glTexCoord2i(1,1);glVertex3f(15.442163, -2.137731, -38.411423);
	glTexCoord2i(0,1);glVertex3f(16.383356, -2.137719, -38.720825);

	glTexCoord2i(0,0);glVertex3f(-19.638803, -2.917253, 38.540798);
	glTexCoord2i(1,0);glVertex3f(-19.011393, -2.917253, 38.665600);
	glTexCoord2i(1,1);glVertex3f(-19.011393, -2.139469, 38.665600);
	glTexCoord2i(0,1);glVertex3f(-19.638803, -2.139469, 38.540798);

	glTexCoord2i(0,0);glVertex3f(18.724163, -2.915501, -1.779513);
	glTexCoord2i(1,0);glVertex3f(18.007030, -2.915517, -1.891723);
	glTexCoord2i(1,1);glVertex3f(18.007030, -2.137733, -1.891723);
	glTexCoord2i(0,1);glVertex3f(18.724163, -2.137717, -1.779513);

	glTexCoord2i(0,0);glVertex3f(15.442163, -2.915515, -38.411423);
	glTexCoord2i(1,0);glVertex3f(15.442163, -2.915515, -38.411423);
	glTexCoord2i(1,1);glVertex3f(15.442163, -2.137731, -38.411423);
	glTexCoord2i(0,1);glVertex3f(15.442163, -2.137731, -38.411423);

	glTexCoord2i(0,0);glVertex3f(-21.892397, -2.914344, 0.738548);
	glTexCoord2i(1,0);glVertex3f(-21.463562, -2.914344, 1.380346);
	glTexCoord2i(1,1);glVertex3f(-21.463562, -2.136560, 1.380346);
	glTexCoord2i(0,1);glVertex3f(-21.892397, -2.136560, 0.738548);

	glTexCoord2i(0,0);glVertex3f(17.796106, -2.915503, -38.720825);
	glTexCoord2i(1,0);glVertex3f(17.089729, -2.915503, -38.861328);
	glTexCoord2i(1,1);glVertex3f(17.089729, -2.137719, -38.861328);
	glTexCoord2i(0,1);glVertex3f(17.796106, -2.137719, -38.720825);

	glTexCoord2i(0,0);glVertex3f(15.594110, -2.915515, 38.485592);
	glTexCoord2i(1,0);glVertex3f(16.422647, -2.915499, 38.753159);
	glTexCoord2i(1,1);glVertex3f(16.422647, -2.137715, 38.753159);
	glTexCoord2i(0,1);glVertex3f(15.594111, -2.137731, 38.485592);

	glTexCoord2i(0,0);glVertex3f(-19.349298, -2.915483, -39.356113);
	glTexCoord2i(1,0);glVertex3f(-20.055672, -2.915483, -39.215607);
	glTexCoord2i(1,1);glVertex3f(-20.055672, -2.137699, -39.215607);
	glTexCoord2i(0,1);glVertex3f(-19.349298, -2.137699, -39.356113);

	glTexCoord2i(0,0);glVertex3f(18.834360, -2.915501, 37.754196);
	glTexCoord2i(1,0);glVertex3f(18.974867, -2.915501, 37.047821);
	glTexCoord2i(1,1);glVertex3f(18.974867, -2.137717, 37.047821);
	glTexCoord2i(0,1);glVertex3f(18.834360, -2.137717, 37.754196);

	glTexCoord2i(0,0);glVertex3f(-21.892397, -2.914344, -0.775552);
	glTexCoord2i(1,0);glVertex3f(-22.042982, -2.914344, -0.018502);
	glTexCoord2i(1,1);glVertex3f(-22.042982, -2.136560, -0.018502);
	glTexCoord2i(0,1);glVertex3f(-21.892397, -2.136560, -0.775552);

	glTexCoord2i(0,0);glVertex3f(18.834360, -2.915501, 36.341446);
	glTexCoord2i(1,0);glVertex3f(18.317390, -2.915517, 35.281673);
	glTexCoord2i(1,1);glVertex3f(18.317390, -2.137733, 35.281673);
	glTexCoord2i(0,1);glVertex3f(18.834360, -2.137717, 36.341446);

	glTexCoord2i(0,0);glVertex3f(18.434233, -2.915501, 38.353027);
	glTexCoord2i(1,0);glVertex3f(18.834360, -2.915501, 37.754196);
	glTexCoord2i(1,1);glVertex3f(18.834360, -2.137717, 37.754196);
	glTexCoord2i(0,1);glVertex3f(18.434233, -2.137717, 38.353027);

	glTexCoord2i(0,0);glVertex3f(18.795069, -2.915503, -37.721855);
	glTexCoord2i(1,0);glVertex3f(18.394941, -2.915503, -38.320694);
	glTexCoord2i(1,1);glVertex3f(18.394941, -2.137719, -38.320694);
	glTexCoord2i(0,1);glVertex3f(18.795069, -2.137719, -37.721855);

	glTexCoord2i(0,0);glVertex3f(19.723127, -2.915501, 0.632204);
	glTexCoord2i(1,0);glVertex3f(19.863634, -2.915501, -0.074171);
	glTexCoord2i(1,1);glVertex3f(19.863634, -2.137717, -0.074171);
	glTexCoord2i(0,1);glVertex3f(19.723127, -2.137717, 0.632204);

	glTexCoord2i(0,0);glVertex3f(18.724163, -2.915501, 1.631167);
	glTexCoord2i(1,0);glVertex3f(19.323000, -2.915501, 1.231039);
	glTexCoord2i(1,1);glVertex3f(19.323000, -2.137717, 1.231039);
	glTexCoord2i(0,1);glVertex3f(18.724163, -2.137717, 1.631167);

	glTexCoord2i(0,0);glVertex3f(-20.078472, -2.914363, 1.991259);
	glTexCoord2i(1,0);glVertex3f(-20.078472, -2.914363, 1.991259);
	glTexCoord2i(1,1);glVertex3f(-20.078472, -2.136579, 1.991259);
	glTexCoord2i(0,1);glVertex3f(-20.078472, -2.136579, 1.991259);

	glTexCoord2i(0,0);glVertex3f(18.394941, -2.915503, -38.320694);
	glTexCoord2i(1,0);glVertex3f(17.796106, -2.915503, -38.720825);
	glTexCoord2i(1,1);glVertex3f(17.796106, -2.137719, -38.720825);
	glTexCoord2i(0,1);glVertex3f(18.394941, -2.137719, -38.320694);

	glTexCoord2i(0,0);glVertex3f(18.165442, -2.915517, -35.207787);
	glTexCoord2i(1,0);glVertex3f(18.165442, -2.915517, -35.207787);
	glTexCoord2i(1,1);glVertex3f(18.165442, -2.137733, -35.207787);
	glTexCoord2i(0,1);glVertex3f(18.165442, -2.137733, -35.207787);

	glEnd();

}
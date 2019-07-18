#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <GL/glut.h>
using namespace std;

float murgiSpeed = 0.03;
bool moveRight = true;
bool layEgg = true;
bool gameOver = false;
bool begin = true;

float murgiX = -0.55;
float murgiY = 0.0;
float murgiWidth = 1.10;
float murgiHeight = 0.66;
float mps = 0.11;

float dimX = murgiX + 0.55;
float dimWidth = 0.36;
float dimY = murgiY;
float dimHeight = 0.42;
float dimSpeed = 0.02;
float dps = 0.03;

float baltiX = -0.35;
float baltiWidth = 0.70;
float baltiY = -3.00;
float baltiHeight = 0.70;

int count = 0;

void Ultachicken(float murgiX, float murgiY)
{
	glBegin(GL_POINTS);
	glColor3f(0.1, 0.1, 0.1);
	glPointSize(5.5);
	glVertex2f(murgiX + mps * (1.5), murgiY + mps * 8);
	glEnd();
	glFlush();
	//-leg
	glColor3f(1.0, 0.8, 0.5);
	glBegin(GL_POLYGON);
	glVertex3f(murgiX + mps * 4, murgiY + mps * 0, 0.0);
	glVertex3f(murgiX + mps * 4, murgiY + mps*(-2), 0.0);
	glVertex3f(murgiX + mps*3.35, murgiY + mps*(-2), 0.0);
	glVertex3f(murgiX + mps*3.35, murgiY + mps * 0, 0.0);
	glEnd();
	glFlush();
	glBegin(GL_POLYGON);

	glVertex3f(murgiX + mps * 5, murgiY + mps * 0, 0.0);
	glVertex3f(murgiX + mps*5.65, murgiY + mps * 0, 0.0);
	glVertex3f(murgiX + mps*5.65, murgiY + mps*(-2), 0.0);
	glVertex3f(murgiX + mps * 5, murgiY + mps*(-2), 0.0);
	glEnd();
	glFlush();

    //body
	glColor3f(1.0, 0.8, 0.5);
	glBegin(GL_POLYGON);
	glVertex3f(murgiX + mps*0.3, murgiY + mps * 6, 0.0);
	glVertex3f(murgiX + mps * 0, murgiY + mps * 4, 0.0);
	glVertex3f(murgiX + mps * 0, murgiY + mps * 2, 0.0);
	glVertex3f(murgiX + mps * 1, murgiY + mps * 1, 0.0);
	glVertex3f(murgiX + mps * 3, murgiY + mps * 0, 0.0);
	glColor3f(1.0, 1.0, 0.8);
	glVertex3f(murgiX + mps * 6, murgiY + mps * 0, 0.0);
	glVertex3f(murgiX + mps * 8, murgiY + mps * 1, 0.0);
	glVertex3f(murgiX + mps * 10, murgiY + mps * 3, 0.0);
	glVertex3f(murgiX + mps * 11, murgiY + mps * 6, 0.0);
	glEnd();
	glFlush();

	//matha
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.8, 0.5);
	glVertex3f(murgiX + mps*0.3, murgiY + mps * 6, 0.0);
	glVertex3f(murgiX + mps * 0, murgiY + mps * 7, 0.0);
	glVertex3f(murgiX + mps * 0, murgiY + mps * 8, 0.0);
	glVertex3f(murgiX + mps * 1, murgiY + mps * 9, 0.0);
	glColor3f(1.0, 1.0, 0.8);
	glVertex3f(murgiX + mps * 3, murgiY + mps * 9, 0.0);
	glVertex3f(murgiX + mps * 4, murgiY + mps * 8, 0.0);
	glVertex3f(murgiX + mps*4.8, murgiY + mps * 6, 0.0);
	glVertex3f(murgiX + mps*5.5, murgiY + mps * 6, 0.0);
	glEnd();
	glFlush();

	//jhuti
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.3, 0.3);
	glVertex3f(murgiX + mps*0.7, murgiY + mps*7.5, 0.0);
	glVertex3f(murgiX + mps*0.4, murgiY + mps*9.8, 0.0);
	glVertex3f(murgiX + mps*1.4, murgiY + mps*9.3, 0.0);
	glVertex3f(murgiX + mps*1.8, murgiY + mps * 10, 0.0);
	glVertex3f(murgiX + mps*2.5, murgiY + mps*9.2, 0.0);
	glVertex3f(murgiX + mps*3.2, murgiY + mps*9.8, 0.0);
	glVertex3f(murgiX + mps*3.8, murgiY + mps*8.8, 0.0);
	glVertex3f(murgiX + mps*4.4, murgiY + mps*9.5, 0.0);
	glVertex3f(murgiX + mps * 3, murgiY + mps * 7, 0.0);
	glEnd();
	glFlush();

	//bick
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.1, 0.1);

	glVertex3f(murgiX + mps * 0, murgiY + mps * 7, 0.0);
	glVertex3f(murgiX + mps*(-1), murgiY + mps*7.5, 0.0);
	glVertex3f(murgiX + mps * 0, murgiY + mps * 8, 0.0);

	glEnd();
	glFlush();

	//fingers
	glColor3f(1.0, 0.3, 0.3);
	glBegin(GL_POLYGON);
	glVertex3f(murgiX + mps * 3.8, murgiY + mps * -2.7, 0.0);
	glVertex3f(murgiX + mps * 3.8, murgiY + mps*(-2), 0.0);
	glVertex3f(murgiX + mps*3.6, murgiY + mps*(-2), 0.0);
	glVertex3f(murgiX + mps*3.6, murgiY + mps * -2.7, 0.0);
	glEnd();
	glFlush();
	glBegin(GL_POLYGON);
	glVertex3f(murgiX + mps * 3, murgiY + mps * -2.7, 0.0);
	glVertex3f(murgiX + mps * 3.4, murgiY + mps*(-2), 0.0);
	glVertex3f(murgiX + mps*3.7, murgiY + mps*(-2), 0.0);
	glVertex3f(murgiX + mps*3.2, murgiY + mps * -2.7, 0.0);
	glEnd();
	glFlush();
	glBegin(GL_POLYGON);
	glVertex3f(murgiX + mps * 4.2, murgiY + mps * -2.7, 0.0);
	glVertex3f(murgiX + mps * 3.6, murgiY + mps*(-2), 0.0);
	glVertex3f(murgiX + mps*3.9, murgiY + mps*(-2), 0.0);
	glVertex3f(murgiX + mps*4.4, murgiY + mps * -2.7, 0.0);
	glEnd();
	glFlush();
	glBegin(GL_POLYGON);

	//fingers
	glColor3f(1.0, 0.3, 0.3);
	glBegin(GL_POLYGON);
	glVertex3f(murgiX + mps * 5.5, murgiY + mps * -2.7, 0.0);
	glVertex3f(murgiX + mps * 5.5, murgiY + mps*(-2), 0.0);
	glVertex3f(murgiX + mps*5.3, murgiY + mps*(-2), 0.0);
	glVertex3f(murgiX + mps*5.3, murgiY + mps * -2.7, 0.0);
	glEnd();
	glFlush();
	glBegin(GL_POLYGON);
	glVertex3f(murgiX + mps * 4.7, murgiY + mps * -2.7, 0.0);
	glVertex3f(murgiX + mps * 5.1, murgiY + mps*(-2), 0.0);
	glVertex3f(murgiX + mps*5.4, murgiY + mps*(-2), 0.0);
	glVertex3f(murgiX + mps*4.9, murgiY + mps * -2.7, 0.0);
	glEnd();
	glFlush();
	glBegin(GL_POLYGON);
	glVertex3f(murgiX + mps * 5.9, murgiY + mps * -2.7, 0.0);
	glVertex3f(murgiX + mps * 5.3, murgiY + mps*(-2), 0.0);
	glVertex3f(murgiX + mps*5.6, murgiY + mps*(-2), 0.0);
	glVertex3f(murgiX + mps*6.1, murgiY + mps * -2.7, 0.0);
	glEnd();
	glFlush();

	glColor3f(0.1, 0.1, 0.1);

	glPointSize(5.5);
	glBegin(GL_POINTS);
	glVertex3f(murgiX - mps*-1, murgiY + mps * 8, 0.0);
	glEnd();
	glFlush();
}

void sojachicken(float murgiX)
{
    //--Eyes
	glBegin(GL_POINTS);
	glColor3f(0.1, 0.1, 0.1);
	glPointSize(5.5);
	glVertex2f(murgiX + mps * (-1.5), murgiY + mps * 8);
	glEnd();
	glFlush();

	//--thang--
	glColor3f(1.0, 0.8, 0.5);
	glBegin(GL_POLYGON);
	glVertex2f(murgiX - mps * 4, murgiY + mps * 0);
	glVertex2f(murgiX - mps * 4, murgiY + mps*(-2));
	glVertex2f(murgiX - mps*3.35, murgiY + mps*(-2));
	glVertex2f(murgiX - mps*3.35, murgiY + mps * 0);
	glEnd();
	glFlush();

	glBegin(GL_POLYGON);
	glVertex2f(murgiX - mps * 5, murgiY + mps * 0);
	glVertex2f(murgiX - mps*5.65, murgiY + mps * 0);
	glVertex2f(murgiX - mps*5.65, murgiY + mps*(-2));
	glVertex2f(murgiX - mps * 5, murgiY + mps*(-2));
	glEnd();
	glFlush();

    //body
	glColor3f(1.0, 0.8, 0.5);
	glBegin(GL_POLYGON);
	glVertex2f(murgiX - mps*0.3, murgiY + mps * 6);
	glVertex2f(murgiX - mps * 0, murgiY + mps * 4);
	glVertex2f(murgiX - mps * 0, murgiY + mps * 2);
	glVertex2f(murgiX - mps * 1, murgiY + mps * 1);
	glVertex2f(murgiX - mps * 3, murgiY + mps * 0);
	glColor3f(1.0, 1.0, 0.8);
	glVertex2f(murgiX - mps * 6, murgiY + mps * 0);
	glVertex2f(murgiX - mps * 8, murgiY + mps * 1);
	glVertex2f(murgiX - mps * 10, murgiY + mps * 3);
	glVertex2f(murgiX - mps * 11, murgiY + mps * 6);
	glEnd();
	glFlush();

	//matha
	glBegin(GL_POLYGON);

	glColor3f(1.0, 0.8, 0.5);
	glVertex2f(murgiX - mps*0.3, murgiY + mps * 6);
	glVertex2f(murgiX - mps * 0, murgiY + mps * 7);
	glVertex2f(murgiX - mps * 0, murgiY + mps * 8);
	glVertex2f(murgiX - mps * 1, murgiY + mps * 9);
	glColor3f(1.0, 1.0, 0.8);
	glVertex2f(murgiX - mps * 3, murgiY + mps * 9);
	glVertex2f(murgiX - mps * 4, murgiY + mps * 8);
	glVertex2f(murgiX - mps*4.8, murgiY + mps * 6);
	glVertex2f(murgiX - mps*5.5, murgiY + mps * 6);
	glEnd();
	glFlush();

	//jhuti
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.3, 0.3);

	glVertex2f(murgiX - mps*0.7, murgiY + mps*7.5);
	glVertex2f(murgiX - mps*0.4, murgiY + mps*9.8);
	glVertex2f(murgiX - mps*1.4, murgiY + mps*9.3);
	glVertex2f(murgiX - mps*1.8, murgiY + mps * 10);
	glVertex2f(murgiX - mps*2.5, murgiY + mps*9.2);
	glVertex2f(murgiX - mps*3.2, murgiY + mps*9.8);
	glVertex2f(murgiX - mps*3.8, murgiY + mps*8.8);
	glVertex2f(murgiX - mps*4.4, murgiY + mps*9.5);
	glVertex2f(murgiX - mps * 3, murgiY + mps * 7);
	glEnd();
	glFlush();
	//lips
	glBegin(GL_POLYGON);

	glColor3f(1.0, 0.1, 0.1);

	glVertex2f(murgiX - mps * 0, murgiY + mps * 7);
	glVertex2f(murgiX - mps*(-1), murgiY + mps*7.5);
	glVertex2f(murgiX - mps * 0, murgiY + mps * 8);

	glEnd();
	glFlush();

	//fingers
	glColor3f(1.0, 0.3, 0.3);

	glBegin(GL_POLYGON);
	glVertex2f(murgiX - mps * 3.8, murgiY + mps * -2.7);
	glVertex2f(murgiX - mps * 3.8, murgiY + mps*(-2));
	glVertex2f(murgiX - mps*3.6, murgiY + mps*(-2));
	glVertex2f(murgiX - mps*3.6, murgiY + mps * -2.7);
	glEnd();
	glFlush();
	glBegin(GL_POLYGON);
	glVertex2f(murgiX - mps * 3, murgiY + mps * -2.7);
	glVertex2f(murgiX - mps * 3.4, murgiY + mps*(-2));
	glVertex2f(murgiX - mps*3.7, murgiY + mps*(-2));
	glVertex2f(murgiX - mps*3.2, murgiY + mps * -2.7);
	glEnd();
	glFlush();
	glBegin(GL_POLYGON);
	glVertex2f(murgiX - mps * 4.2, murgiY + mps * -2.7);
	glVertex2f(murgiX - mps * 3.6, murgiY + mps*(-2));
	glVertex2f(murgiX - mps*3.9, murgiY + mps*(-2));
	glVertex2f(murgiX - mps*4.4, murgiY + mps * -2.7);
	glEnd();
	glFlush();
	glBegin(GL_POLYGON);

	//fingers
	glColor3f(1.0, 0.3, 0.3);
	glBegin(GL_POLYGON);
	glVertex2f(murgiX - mps * 5.5, murgiY + mps * -2.7);
	glVertex2f(murgiX - mps * 5.5, murgiY + mps*(-2));
	glVertex2f(murgiX - mps*5.3, murgiY + mps*(-2));
	glVertex2f(murgiX - mps*5.3, murgiY + mps * -2.7);
	glEnd();
	glFlush();
	glBegin(GL_POLYGON);
	glVertex2f(murgiX - mps * 4.7, murgiY + mps * -2.7);
	glVertex2f(murgiX - mps * 5.1, murgiY + mps*(-2));
	glVertex2f(murgiX - mps*5.4, murgiY + mps*(-2));
	glVertex2f(murgiX - mps*4.9, murgiY + mps * -2.7);
	glEnd();
	glFlush();
	glBegin(GL_POLYGON);
	glVertex2f(murgiX - mps * 5.9, murgiY + mps * -2.7);
	glVertex2f(murgiX - mps * 5.3, murgiY + mps*(-2));
	glVertex2f(murgiX - mps*5.6, murgiY + mps*(-2));
	glVertex2f(murgiX - mps*6.1, murgiY + mps * -2.7);
	glEnd();
	glFlush();
}

void egg(float ex, float ey) {
	glColor3f(1.0, 0.8, 0.5);
	glBegin(GL_POLYGON);
	glVertex2f(dimX + dps * 5, dimY - dps * 0);
	glVertex2f(dimX + dps * 3.5, dimY - dps * 1);
	glVertex2f(dimX + dps * 2, dimY - dps * 2);
	glVertex2f(dimX + dps * 1, dimY - dps * 4);
	glVertex2f(dimX + dps * 0, dimY - dps * 7);
	glVertex2f(dimX + dps * 0, dimY - dps * 9);
	glVertex2f(dimX + dps * 1, dimY - dps *11.5);
	glVertex2f(dimX + dps * 2, dimY - dps * 13);
	glVertex2f(dimX + dps * 4, dimY - dps * 14);
	glColor3f(0.95, 0.77, 0.38);
	glVertex2f(dimX + dps * 8, dimY - dps * 14);

	glVertex2f(dimX + dps * 10, dimY - dps * 13);
	glVertex2f(dimX + dps * 11, dimY - dps *11.5);
	glVertex2f(dimX + dps * 12, dimY - dps * 9);
	glVertex2f(dimX + dps * 12, dimY - dps * 7);
	glVertex2f(dimX + dps * 11, dimY - dps * 4);
	glColor3f(1.0, 0.8, 0.5);
	glVertex2f(dimX + dps * 10, dimY - dps * 2);
	glVertex2f(dimX + dps * 8.5, dimY - dps * 1);
	glVertex2f(dimX + dps * 7, dimY - dps * 0);

	glEnd();
	glFlush();
}

void balti()
{
	glPushMatrix();
	glColor3f(0.94, 0.4, 0.2);
	glBegin(GL_QUADS);
	glVertex3f(baltiX - 0.10, baltiY + baltiHeight, 0.0); //top left
	glVertex3f(baltiX, baltiY, 0.0); //bottom left
	glColor3f(0.8, 0.3, 0.1);
	glVertex3f(baltiX + baltiWidth, baltiY, 0.0); //bottom right
	glVertex3f(baltiX + baltiWidth + 0.10, baltiY + baltiHeight, 0.0); //top right
	glEnd();
	glPopMatrix();
	glFlush();
}

void stickAndRope()
{
    //For drawing Stick
	glColor3f(0.61, 0.3, 0.1);
	glBegin(GL_POLYGON);
	glVertex3f(1.5, -3.0, 0.0);
	glVertex3f(1.4, -3.0, 0.0);
	glVertex3f(1.4, -0.3, 0.0);
	glVertex3f(1.5, -0.3, 0.0);
	glEnd();

    //For drawing rope
	glColor3f(0.0, 0.0, 0.0);
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glVertex3f(1.5, -0.3, 0.0);
	glVertex3f(-5.5, -0.3, 0.0);
	glEnd();
}

void surface()
{
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-7.0, 1.0, 0.0);
	glVertex3f(7.0, 1.0, 0.0);
	glVertex3f(7.0, -3.0, 0.0);
	glVertex3f(-7.0, -3.0, 0.0);
	glEnd();
}

void sky()
{
	glColor3f(0.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex3f(-7.0, 0.55, 0.0);
	glVertex3f(7.0, 0.55, 0.0);
	glVertex3f(7.0, 3.0, 0.0);
	glVertex3f(-7.0, 3.0, 0.0);
	glEnd();
}

void gameover(char *string, float x, float y, float z)
{
	//glColor3f(1.0, 1.0, 1.0);
	char *c;
	glRasterPos3f(x, y, z);

	for (c = string; *c != '\0'; c++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
	}
}

void drawBitmapText(char *string, float x, float y, float z)
{
	glColor3f(0.0, 0.0, 0.0);

	char *c;
	glRasterPos3f(x, y, z);

	for (c = string; *c != '\0'; c++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, *c);
	}
}
//Initializes 3D rendering
void initRendering()
{
	glEnable(GL_DEPTH_TEST);
	//glOrtho(-5.5,5.5,-3.1,3.1,-10.0,10.0);
}

//Called when the window is resized
void handleResize(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
    /*
    if(w<=h){
        glOrtho(-5.5,5.5,-3.1*(GLfloat)h/(GLfloat)w,3.1*(GLfloat)h/(GLfloat)w,-10.0,10.0);
    }
    else{
         glOrtho(-5.5*(GLfloat)w/(GLfloat)h,5.5*(GLfloat)w/(GLfloat)h,-3.1,3.1,-10.0,10.0);
    }*/
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

//Draws the 3D scene
void drawScene()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
	glTranslatef(0.0, 0.0, -7.0); //Move forward 5 units

	if (gameOver)
	{
		glColor3f(0.0, 0.0, 0.0);
		gameover("GAME OVER", -0.30, 0.10, 0.0);
		char score[4];
		char scr[] = { "FINAL SCORE: " };
		sprintf(score, "%d", count);
		drawBitmapText(score, 3.10, -0.20, 0.0);
		drawBitmapText(scr, 1.60, -0.20, 0);
		glColor3f(0.0, 0.0, 0.0);
		gameover("Press'R' to replay", -0.47, -0.60, 0.0);
	}

	else
	{
		char score[4];
		char scr[] = { "SCORE:   " };
		sprintf(score, "%d", count);
		drawBitmapText(score, 3.10, -0.20, 0.0);
		drawBitmapText(scr, 2.40, -0.20, 0);

		balti();
		egg(dimX, dimY);

		if (layEgg)
		{
			dimX = murgiX + 0.37;
			dimY = murgiY;
			layEgg = false;
		}
		if (moveRight)
		{
			sojachicken(murgiX + murgiWidth);
		}
		else
		{
			Ultachicken(murgiX, murgiY);
		}

	}

	if (murgiX + murgiWidth >= 1.50)
		moveRight = false;
	else if (murgiX <= -5.50)
		moveRight = true;

	if (moveRight)
		murgiX += murgiSpeed;
	else
		murgiX -= murgiSpeed;

	stickAndRope();
	surface();
	sky();


	if (dimX >= baltiX && dimX + dimWidth <= baltiX + baltiWidth +.05 && dimY<baltiY + baltiHeight && dimY>baltiY + baltiHeight - 5)
	{
		layEgg = true;
		murgiSpeed += 0.003f;
		dimSpeed += 0.002f;
		count++;
	}
	else if (dimY - dimHeight <= -2.85)
	{
		gameOver = true;
		layEgg = false;
	}
	else {
		dimY -= dimSpeed;
	}

	glutSwapBuffers();
}

void SpecialKeys(int key, int x, int y) {
	if (gameOver) {

	}
	else {
		switch (key) {
		case GLUT_KEY_LEFT:
			if (baltiX <= -5.50)
				break;
			else
				baltiX -= 0.20f;

			break;
		case GLUT_KEY_RIGHT:
			if (baltiX + baltiWidth >= 1.50)
				break;
			else
				baltiX += 0.20f;

			break;
		}
		balti();
	}
}

void handleKeypress(unsigned char key, int x, int y) {
	switch (key)
	{
	case 'r':

		gameOver = false;
		count = 0;
		murgiX = 0;
		baltiX = 0;
		dimX = 0;
		dimSpeed = 0.02;
		murgiSpeed = 0.03;
		glutPostRedisplay();
		break;
	}
}

void update(int value) {
	//Tell GLUT that the display has changed
	glutPostRedisplay();
                        //Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(25, update, 0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1500, 700);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Transformations");
	initRendering();
	glutDisplayFunc(drawScene);
	glutReshapeFunc(handleResize);
	glutKeyboardFunc(handleKeypress);
	glutTimerFunc(25, update, 0); //Add a timer
	glutSpecialFunc(SpecialKeys);
	glutMainLoop();
	return 0;
}

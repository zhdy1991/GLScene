#include "glscene.h"

GLScene::GLScene(QWidget *parent)
	: QGLViewer(parent)
{
	if (parent == NULL) {
		resize(800, 800);
		move(100, 100);
	}
}

GLScene::~GLScene()
{
}

void GLScene::draw()
{

	qglClearColor(Qt::white);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);
	glEnd();
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 1.0);
	glVertex3f(0.0, 1.0, 0.0);
	glEnd();
	glFlush();
}

void GLScene::init()
{
}

void GLScene::initializeGL()
{
	glLoadIdentity();
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

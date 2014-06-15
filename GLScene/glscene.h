#ifndef GLSCENE_H
#define GLSCENE_H

#include <QGLViewer/qglviewer.h>


class GLScene : public QGLViewer
{
	Q_OBJECT

public:
	GLScene(QWidget *parent = 0);
	~GLScene();

protected :
	virtual void draw();
	virtual void init();
private:
};

#endif // GLSCENE_H

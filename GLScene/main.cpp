#include "glscene.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	GLScene w;
	w.show();
	return a.exec();
}

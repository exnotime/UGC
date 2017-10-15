#include <QtWidgets/qapplication.h>
#include "MainWindow.h"
#include "Node.h"
int main(int argc, char** argv) {
	QApplication app(argc, argv);
	UGCMainWindow mainWindow;
	Node n(mainWindow.GetWindow());
	bool drops = n.acceptDrops();
	n.show();
	return app.exec();
}
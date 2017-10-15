#include "MainWindow.h"

UGCMainWindow::UGCMainWindow() {
	CreateWindow();
	CreateMenu();
}


UGCMainWindow::~UGCMainWindow() {

}

void UGCMainWindow::CreateWindow() {
	m_Window = new QMainWindow(nullptr, Qt::Window | Qt::WindowMinMaxButtonsHint | Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
	m_Window->resize(1600, 900);
	m_Window->setWindowTitle("Universal Graph Creator");
	m_Window->setAutoFillBackground(true);
	m_Window->setPalette(QPalette(QColor(qRgb(15, 25, 30))));
	m_Window->show();
}

void UGCMainWindow::CreateMenu() {
	m_MenuBar = m_Window->menuBar();
	m_Menu = new QMenu("File");
	m_Menu->addAction("Open");
	QAction* a = m_Menu->addAction("Exit");
	QObject::connect(a, &QAction::triggered, this, &UGCMainWindow::Exit);
	m_MenuBar->addMenu(m_Menu);
}

void UGCMainWindow::Exit() {
	exit(0);
}
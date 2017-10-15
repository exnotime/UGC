#pragma once
#include <glm/glm.hpp>
#include <QtWidgets/qmainwindow.h>
#include <QtWidgets/qmenubar.h>
#include <QtWidgets/qaction.h>

class UGCMainWindow : public QObject {
	Q_OBJECT
public:
	UGCMainWindow();
	~UGCMainWindow();
	QMainWindow* GetWindow() { return m_Window; }
private:
	void CreateWindow();
	void CreateMenu();

	public slots:
		void Exit();
private:
	QMainWindow*	m_Window;
	QMenuBar*		m_MenuBar;
	QMenu*			m_Menu;
};


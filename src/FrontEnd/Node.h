#pragma once
#include <vector>
#include <string>
#include <QtWidgets/qwidget.h>
#include <glm/glm.hpp>
struct Slot {
	std::string Name;
};

class Node : public QWidget {
	Q_OBJECT
public:
	Node(QWidget *parent = nullptr);
	~Node();

	QSize sizeHint() const override;
protected:
	void mouseMoveEvent(QMouseEvent *event) override;
	void mousePressEvent(QMouseEvent *event) override;
	void dragEnterEvent(QDragEnterEvent *event) override;
	void dragMoveEvent(QDragMoveEvent *event) override;
	void paintEvent(QPaintEvent *event) override;
private:
	std::vector<Slot> m_Inputs;
	std::vector<Slot> m_Outputs;
	QPoint m_Pos;
};
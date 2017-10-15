#include "Node.h"

#include <QtGui/qpainter.h>
#include <QtGui/qevent.h>

Node::Node(QWidget *parent) : QWidget(parent){
	m_Pos = QPoint(50, 50);
	setGeometry(50, 50, 120, 160);
	setAcceptDrops(true);
}

Node::~Node() {

}

QSize Node::sizeHint() const {
	return QSize(40, 70);
}

void Node::paintEvent(QPaintEvent *event) {
	QPainter painter(this);
	painter.fillRect(event->rect(), QBrush(Qt::yellow));
}

void Node::dragEnterEvent(QDragEnterEvent *event) {
	QWidget::dragEnterEvent(event);
}

void Node::dragMoveEvent(QDragMoveEvent *event) {
	QWidget::dragMoveEvent(event);
}

void Node::mouseMoveEvent(QMouseEvent *event) {
	if (event->buttons() & Qt::LeftButton) {
		this->move(mapToParent(event->pos() - m_Pos));
	}
	QWidget::mouseMoveEvent(event);
}

void Node::mousePressEvent(QMouseEvent *event) {
	m_Pos = event->pos();
	QWidget::mousePressEvent(event);
}


/****************************************************************************
**
** Copyright (C) 2016
**
** This file is generated by the Magus toolkit
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
****************************************************************************/

#ifndef CENTRAL_DOCKWIDGET_H
#define CENTRAL_DOCKWIDGET_H

#include <QtWidgets>
#include <QMessageBox>
#include <QDockWidget>

QT_BEGIN_NAMESPACE
QT_END_NAMESPACE

class MainWindow;

/****************************************************************************
 This class represents a DockWidget
 ***************************************************************************/
class CentralDockWidget : public QDockWidget
{
	Q_OBJECT

	public:
        CentralDockWidget(QString title, MainWindow* parent, Qt::WindowFlags flags = 0);
        ~CentralDockWidget(void);
        void addDockWidget(Qt::DockWidgetArea area, QDockWidget* dockWidget);

	private slots:

	private:
		MainWindow* mParent;
        QMainWindow* mInnerMain;
};

#endif


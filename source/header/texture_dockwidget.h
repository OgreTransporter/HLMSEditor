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

#ifndef TEXTURE_DOCKWIDGET_H
#define TEXTURE_DOCKWIDGET_H

#include <QtWidgets>
#include "texture_main.h"

QT_BEGIN_NAMESPACE
class QDockWidget;
QT_END_NAMESPACE

class MainWindow;

/****************************************************************************
 This class represents a DockWidget
 ***************************************************************************/
class TextureDockWidget : public QDockWidget
{
	Q_OBJECT

	public:
        TextureDockWidget(QString title, MainWindow* parent, Qt::WindowFlags flags = 0);
        ~TextureDockWidget(void);
		void createActions(void);
		void createMenus(void);
		void createToolBars(void);

        // Returns a list of all resources in the resource tree. This includes both groups, subgroups and assets
        // This function can be used to stream the data to a file
        QVector<Magus::QtResourceInfo*>& getResources (void);

        // Creates the resourcetree. This includes both groups, subgroups and assets
        // This function can be used to load the data from a file
        void setResources (const QVector<Magus::QtResourceInfo*>& resources);

        void addTextureFile (const QString& fileName);
        void addTextureFile (const QString& fileName, const QString& group);
        void deleteTexture (const QString& fileName);
        const QString& getCurrentFileName (void);
        const QPixmap* getCurrentPixmap (void);

        // Empty the texture browser
        void clearResources(void);

    signals:
        void textureDoubleClicked(const QString& fileName, const QString& baseName);
        void customContextMenuItemSelected(const QString& menuItemText);
        void textureMutationOccured(void);

    private slots:
        void handleTextureDoubleClicked(int toplevelId, int parentId, int resourceId, const QString& name, const QString& baseName);
        void handleCustomContextMenuItemSelected(const QString& menuItemText);
        void handleTextureMutationOccured(void);

    private:
		MainWindow* mParent;
        TextureMain* mTextureMain;
};

#endif


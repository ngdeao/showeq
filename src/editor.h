
/*
 * editor.h
 *
 * text file editor
 *
 *  ShowEQ Distributed under GPL
 *  http://www.sourceforge.net/projects/seq
 */

#ifndef EDITOR_H
#define EDITOR_H

#include <Q3MainWindow>
#include <QCloseEvent>
#include <Q3PopupMenu>

class Q3MultiLineEdit;
class Q3ToolBar;
class Q3PopupMenu;

class EditorWindow : public Q3MainWindow
{
	Q_OBJECT
public:
	EditorWindow();
	EditorWindow(const char *fileName);
	~EditorWindow();

protected:
    void closeEvent(QCloseEvent*);

private slots:
    void load();
    void load(const char *fileName);
    void save();
    void saveAs();

private:
    Q3MultiLineEdit *e;
    Q3ToolBar *fileTools;
    QString filename;
};


#endif

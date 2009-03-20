#ifndef UI_MAPICONDIALOG_H
#define UI_MAPICONDIALOG_H

#include <qvariant.h>


#include <Qt3Support/Q3Frame>
#include <Qt3Support/Q3GroupBox>
#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>
#include "mapicon.h"

QT_BEGIN_NAMESPACE

class Ui_MapIconDialog
{
public:
    QLabel *TextLabel7;
    Q3Frame *m_mapIconSettingsFrame;
    QPushButton *m_revert;
    QPushButton *m_apply;
    QTabWidget *m_tabWidget;
    QWidget *image;
    Q3Frame *frame4;
    QLabel *m_imageImageLabel;
    QLabel *TextLabel2_4;
    QComboBox *m_imageImage;
    QComboBox *m_imageSize;
    QCheckBox *m_imageFlash;
    Q3GroupBox *imageOutlineGroupBox_3;
    QLabel *TextLabel4_5_2;
    QLabel *TextLabel5_5_2;
    Q3Frame *m_imagePenColorSample;
    QCheckBox *m_imageUseSpawnColorPen;
    QComboBox *m_imagePenStyle;
    QSpinBox *m_imagePenWidth;
    QPushButton *m_imagePenColor;
    Q3GroupBox *imageFillGroupBox_3;
    QLabel *TextLabel3_4_2;
    QPushButton *m_imageBrushColor;
    Q3Frame *m_imageBrushColorSample;
    QCheckBox *m_imageUseSpawnColorBrush;
    QComboBox *m_imageBrushStyle;
    QCheckBox *m_useImage;
    QWidget *highlight;
    QCheckBox *m_useHighlight;
    Q3Frame *frame6;
    QLabel *TextLabel1_2_2;
    QCheckBox *m_highlightFlash;
    QComboBox *m_highlightSize;
    QLabel *TextLabel2_2_2;
    QComboBox *m_highlightImage;
    Q3GroupBox *highlightFillGroupBox_2;
    QCheckBox *m_highlightUseSpawnColorBrush;
    QLabel *TextLabel3_2_2_2;
    QPushButton *m_highlightBrushColor;
    Q3Frame *m_highlightBrushColorSample;
    QComboBox *m_highlightBrushStyle;
    Q3GroupBox *highlightOutlineGroupBox_2;
    QCheckBox *m_highlightUseSpawnColorPen;
    QComboBox *m_highlightPenStyle;
    QLabel *TextLabel5_2_2_2;
    QPushButton *m_highlightPenColor;
    QLabel *TextLabel4_2_2_2;
    Q3Frame *m_highlightPenColorSample;
    QSpinBox *m_highlightPenWidth;
    QWidget *lines;
    Q3GroupBox *line2GroupBox_2;
    QLabel *TextLabel6_2_3_2;
    QSpinBox *m_line2Distance;
    QPushButton *m_line2PenColor;
    QLabel *TextLabel4_3_2_2_4_2;
    QComboBox *m_line2PenStyle;
    QLabel *TextLabel5_3_2_2_4_2;
    Q3Frame *m_line2PenColorSample;
    QSpinBox *m_line2PenWidth;
    Q3GroupBox *line1GroupBox_2;
    QLabel *TextLabel6_4_2;
    QLabel *TextLabel4_3_2_4_2;
    QComboBox *m_line1PenStyle;
    QPushButton *m_line1PenColor;
    QLabel *TextLabel5_3_2_4_2;
    Q3Frame *m_line1PenColorSample;
    QSpinBox *m_line1Distance;
    QSpinBox *m_line1PenWidth;
    Q3GroupBox *line0GroupBox_2;
    QLabel *TextLabel4_3_4_2;
    QLabel *TextLabel5_3_4_2;
    QPushButton *m_line0PenColor;
    Q3Frame *m_line0PenColorSample;
    QCheckBox *m_showLine0;
    QComboBox *m_line0PenStyle;
    QSpinBox *m_line0PenWidth;
    QWidget *other;
    Q3GroupBox *walkPathLineGroupBox_2;
    QLabel *TextLabel4_3_2_2_2_2_2;
    QComboBox *m_walkPathPenStyle;
    QLabel *TextLabel5_3_2_2_2_2_2;
    QPushButton *m_walkPathPenColor;
    Q3Frame *m_walkPathPenColorSample;
    QCheckBox *m_useWalkPathPen;
    QSpinBox *m_walkPathPenWidth;
    QCheckBox *m_showName;
    QCheckBox *m_showWalkPath;
    QComboBox *m_mapIconCombo;
    QPushButton *m_close;

    void setupUi(QDialog *MapIconDialog)
    {
    if (MapIconDialog->objectName().isEmpty())
        MapIconDialog->setObjectName(QString::fromUtf8("MapIconDialog"));
    MapIconDialog->resize(557, 306);
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(MapIconDialog->sizePolicy().hasHeightForWidth());
    MapIconDialog->setSizePolicy(sizePolicy);
    TextLabel7 = new QLabel(MapIconDialog);
    TextLabel7->setObjectName(QString::fromUtf8("TextLabel7"));
    TextLabel7->setGeometry(QRect(10, 10, 60, 20));
    TextLabel7->setWordWrap(false);
    m_mapIconSettingsFrame = new Q3Frame(MapIconDialog);
    m_mapIconSettingsFrame->setObjectName(QString::fromUtf8("m_mapIconSettingsFrame"));
    m_mapIconSettingsFrame->setGeometry(QRect(10, 40, 540, 260));
    m_mapIconSettingsFrame->setFrameShape(Q3Frame::StyledPanel);
    m_mapIconSettingsFrame->setFrameShadow(Q3Frame::Raised);
    m_revert = new QPushButton(m_mapIconSettingsFrame);
    m_revert->setObjectName(QString::fromUtf8("m_revert"));
    m_revert->setGeometry(QRect(283, 231, 60, 22));
    m_apply = new QPushButton(m_mapIconSettingsFrame);
    m_apply->setObjectName(QString::fromUtf8("m_apply"));
    m_apply->setGeometry(QRect(171, 231, 60, 22));
    m_tabWidget = new QTabWidget(m_mapIconSettingsFrame);
    m_tabWidget->setObjectName(QString::fromUtf8("m_tabWidget"));
    m_tabWidget->setGeometry(QRect(10, 10, 520, 210));
    image = new QWidget();
    image->setObjectName(QString::fromUtf8("image"));
    frame4 = new Q3Frame(image);
    frame4->setObjectName(QString::fromUtf8("frame4"));
    frame4->setGeometry(QRect(8, 24, 500, 40));
    frame4->setFrameShape(QFrame::StyledPanel);
    frame4->setFrameShadow(Q3Frame::Sunken);
    m_imageImageLabel = new QLabel(frame4);
    m_imageImageLabel->setObjectName(QString::fromUtf8("m_imageImageLabel"));
    m_imageImageLabel->setGeometry(QRect(10, 10, 40, 20));
    m_imageImageLabel->setWordWrap(false);
    TextLabel2_4 = new QLabel(frame4);
    TextLabel2_4->setObjectName(QString::fromUtf8("TextLabel2_4"));
    TextLabel2_4->setGeometry(QRect(240, 10, 30, 20));
    TextLabel2_4->setWordWrap(false);
    m_imageImage = new QComboBox(frame4);
    m_imageImage->setObjectName(QString::fromUtf8("m_imageImage"));
    m_imageImage->setGeometry(QRect(60, 10, 140, 22));
    m_imageSize = new QComboBox(frame4);
    m_imageSize->setObjectName(QString::fromUtf8("m_imageSize"));
    m_imageSize->setGeometry(QRect(280, 10, 100, 22));
    m_imageFlash = new QCheckBox(frame4);
    m_imageFlash->setObjectName(QString::fromUtf8("m_imageFlash"));
    m_imageFlash->setGeometry(QRect(410, 10, 80, 20));
    imageOutlineGroupBox_3 = new Q3GroupBox(image);
    imageOutlineGroupBox_3->setObjectName(QString::fromUtf8("imageOutlineGroupBox_3"));
    imageOutlineGroupBox_3->setGeometry(QRect(10, 70, 500, 50));
    TextLabel4_5_2 = new QLabel(imageOutlineGroupBox_3);
    TextLabel4_5_2->setObjectName(QString::fromUtf8("TextLabel4_5_2"));
    TextLabel4_5_2->setGeometry(QRect(410, 20, 40, 20));
    TextLabel4_5_2->setWordWrap(false);
    TextLabel5_5_2 = new QLabel(imageOutlineGroupBox_3);
    TextLabel5_5_2->setObjectName(QString::fromUtf8("TextLabel5_5_2"));
    TextLabel5_5_2->setGeometry(QRect(240, 20, 38, 20));
    TextLabel5_5_2->setWordWrap(false);
    m_imagePenColorSample = new Q3Frame(imageOutlineGroupBox_3);
    m_imagePenColorSample->setObjectName(QString::fromUtf8("m_imagePenColorSample"));
    m_imagePenColorSample->setGeometry(QRect(210, 20, 20, 22));
    m_imagePenColorSample->setFrameShape(QFrame::StyledPanel);
    m_imagePenColorSample->setFrameShadow(Q3Frame::Raised);
    m_imageUseSpawnColorPen = new QCheckBox(imageOutlineGroupBox_3);
    m_imageUseSpawnColorPen->setObjectName(QString::fromUtf8("m_imageUseSpawnColorPen"));
    m_imageUseSpawnColorPen->setGeometry(QRect(10, 20, 130, 20));
    m_imagePenStyle = new QComboBox(imageOutlineGroupBox_3);
    m_imagePenStyle->setObjectName(QString::fromUtf8("m_imagePenStyle"));
    m_imagePenStyle->setGeometry(QRect(280, 20, 120, 22));
    m_imagePenWidth = new QSpinBox(imageOutlineGroupBox_3);
    m_imagePenWidth->setObjectName(QString::fromUtf8("m_imagePenWidth"));
    m_imagePenWidth->setGeometry(QRect(456, 20, 30, 23));
    m_imagePenWidth->setMaximum(5);
    m_imagePenColor = new QPushButton(imageOutlineGroupBox_3);
    m_imagePenColor->setObjectName(QString::fromUtf8("m_imagePenColor"));
    m_imagePenColor->setGeometry(QRect(140, 20, 60, 22));
    imageFillGroupBox_3 = new Q3GroupBox(image);
    imageFillGroupBox_3->setObjectName(QString::fromUtf8("imageFillGroupBox_3"));
    imageFillGroupBox_3->setGeometry(QRect(10, 120, 500, 50));
    TextLabel3_4_2 = new QLabel(imageFillGroupBox_3);
    TextLabel3_4_2->setObjectName(QString::fromUtf8("TextLabel3_4_2"));
    TextLabel3_4_2->setGeometry(QRect(240, 20, 38, 20));
    TextLabel3_4_2->setWordWrap(false);
    m_imageBrushColor = new QPushButton(imageFillGroupBox_3);
    m_imageBrushColor->setObjectName(QString::fromUtf8("m_imageBrushColor"));
    m_imageBrushColor->setGeometry(QRect(140, 20, 60, 22));
    m_imageBrushColorSample = new Q3Frame(imageFillGroupBox_3);
    m_imageBrushColorSample->setObjectName(QString::fromUtf8("m_imageBrushColorSample"));
    m_imageBrushColorSample->setGeometry(QRect(210, 20, 20, 22));
    m_imageBrushColorSample->setFrameShape(QFrame::StyledPanel);
    m_imageBrushColorSample->setFrameShadow(Q3Frame::Raised);
    m_imageUseSpawnColorBrush = new QCheckBox(imageFillGroupBox_3);
    m_imageUseSpawnColorBrush->setObjectName(QString::fromUtf8("m_imageUseSpawnColorBrush"));
    m_imageUseSpawnColorBrush->setGeometry(QRect(10, 20, 130, 20));
    m_imageBrushStyle = new QComboBox(imageFillGroupBox_3);
    m_imageBrushStyle->setObjectName(QString::fromUtf8("m_imageBrushStyle"));
    m_imageBrushStyle->setGeometry(QRect(280, 20, 170, 22));
    m_useImage = new QCheckBox(image);
    m_useImage->setObjectName(QString::fromUtf8("m_useImage"));
    m_useImage->setGeometry(QRect(10, 0, 100, 20));
    m_tabWidget->addTab(image, QString());
    highlight = new QWidget();
    highlight->setObjectName(QString::fromUtf8("highlight"));
    m_useHighlight = new QCheckBox(highlight);
    m_useHighlight->setObjectName(QString::fromUtf8("m_useHighlight"));
    m_useHighlight->setGeometry(QRect(10, 0, 110, 20));
    frame6 = new Q3Frame(highlight);
    frame6->setObjectName(QString::fromUtf8("frame6"));
    frame6->setGeometry(QRect(8, 24, 500, 40));
    frame6->setFrameShape(QFrame::StyledPanel);
    frame6->setFrameShadow(Q3Frame::Sunken);
    TextLabel1_2_2 = new QLabel(frame6);
    TextLabel1_2_2->setObjectName(QString::fromUtf8("TextLabel1_2_2"));
    TextLabel1_2_2->setGeometry(QRect(10, 10, 40, 20));
    TextLabel1_2_2->setWordWrap(false);
    m_highlightFlash = new QCheckBox(frame6);
    m_highlightFlash->setObjectName(QString::fromUtf8("m_highlightFlash"));
    m_highlightFlash->setGeometry(QRect(410, 10, 80, 20));
    m_highlightSize = new QComboBox(frame6);
    m_highlightSize->setObjectName(QString::fromUtf8("m_highlightSize"));
    m_highlightSize->setGeometry(QRect(280, 10, 90, 22));
    TextLabel2_2_2 = new QLabel(frame6);
    TextLabel2_2_2->setObjectName(QString::fromUtf8("TextLabel2_2_2"));
    TextLabel2_2_2->setGeometry(QRect(240, 10, 30, 20));
    TextLabel2_2_2->setWordWrap(false);
    m_highlightImage = new QComboBox(frame6);
    m_highlightImage->setObjectName(QString::fromUtf8("m_highlightImage"));
    m_highlightImage->setGeometry(QRect(60, 10, 140, 22));
    highlightFillGroupBox_2 = new Q3GroupBox(highlight);
    highlightFillGroupBox_2->setObjectName(QString::fromUtf8("highlightFillGroupBox_2"));
    highlightFillGroupBox_2->setGeometry(QRect(10, 120, 500, 50));
    m_highlightUseSpawnColorBrush = new QCheckBox(highlightFillGroupBox_2);
    m_highlightUseSpawnColorBrush->setObjectName(QString::fromUtf8("m_highlightUseSpawnColorBrush"));
    m_highlightUseSpawnColorBrush->setGeometry(QRect(10, 20, 130, 20));
    TextLabel3_2_2_2 = new QLabel(highlightFillGroupBox_2);
    TextLabel3_2_2_2->setObjectName(QString::fromUtf8("TextLabel3_2_2_2"));
    TextLabel3_2_2_2->setGeometry(QRect(240, 20, 38, 20));
    TextLabel3_2_2_2->setWordWrap(false);
    m_highlightBrushColor = new QPushButton(highlightFillGroupBox_2);
    m_highlightBrushColor->setObjectName(QString::fromUtf8("m_highlightBrushColor"));
    m_highlightBrushColor->setGeometry(QRect(140, 20, 60, 22));
    m_highlightBrushColorSample = new Q3Frame(highlightFillGroupBox_2);
    m_highlightBrushColorSample->setObjectName(QString::fromUtf8("m_highlightBrushColorSample"));
    m_highlightBrushColorSample->setGeometry(QRect(210, 20, 20, 22));
    m_highlightBrushColorSample->setFrameShape(QFrame::StyledPanel);
    m_highlightBrushColorSample->setFrameShadow(Q3Frame::Raised);
    m_highlightBrushStyle = new QComboBox(highlightFillGroupBox_2);
    m_highlightBrushStyle->setObjectName(QString::fromUtf8("m_highlightBrushStyle"));
    m_highlightBrushStyle->setGeometry(QRect(280, 20, 170, 22));
    highlightOutlineGroupBox_2 = new Q3GroupBox(highlight);
    highlightOutlineGroupBox_2->setObjectName(QString::fromUtf8("highlightOutlineGroupBox_2"));
    highlightOutlineGroupBox_2->setGeometry(QRect(10, 70, 500, 50));
    m_highlightUseSpawnColorPen = new QCheckBox(highlightOutlineGroupBox_2);
    m_highlightUseSpawnColorPen->setObjectName(QString::fromUtf8("m_highlightUseSpawnColorPen"));
    m_highlightUseSpawnColorPen->setGeometry(QRect(10, 20, 130, 20));
    m_highlightPenStyle = new QComboBox(highlightOutlineGroupBox_2);
    m_highlightPenStyle->setObjectName(QString::fromUtf8("m_highlightPenStyle"));
    m_highlightPenStyle->setGeometry(QRect(280, 20, 120, 22));
    TextLabel5_2_2_2 = new QLabel(highlightOutlineGroupBox_2);
    TextLabel5_2_2_2->setObjectName(QString::fromUtf8("TextLabel5_2_2_2"));
    TextLabel5_2_2_2->setGeometry(QRect(240, 20, 38, 20));
    TextLabel5_2_2_2->setWordWrap(false);
    m_highlightPenColor = new QPushButton(highlightOutlineGroupBox_2);
    m_highlightPenColor->setObjectName(QString::fromUtf8("m_highlightPenColor"));
    m_highlightPenColor->setGeometry(QRect(140, 20, 60, 22));
    TextLabel4_2_2_2 = new QLabel(highlightOutlineGroupBox_2);
    TextLabel4_2_2_2->setObjectName(QString::fromUtf8("TextLabel4_2_2_2"));
    TextLabel4_2_2_2->setGeometry(QRect(410, 20, 40, 20));
    TextLabel4_2_2_2->setWordWrap(false);
    m_highlightPenColorSample = new Q3Frame(highlightOutlineGroupBox_2);
    m_highlightPenColorSample->setObjectName(QString::fromUtf8("m_highlightPenColorSample"));
    m_highlightPenColorSample->setGeometry(QRect(210, 20, 20, 22));
    m_highlightPenColorSample->setFrameShape(QFrame::StyledPanel);
    m_highlightPenColorSample->setFrameShadow(Q3Frame::Raised);
    m_highlightPenWidth = new QSpinBox(highlightOutlineGroupBox_2);
    m_highlightPenWidth->setObjectName(QString::fromUtf8("m_highlightPenWidth"));
    m_highlightPenWidth->setGeometry(QRect(456, 20, 30, 23));
    m_highlightPenWidth->setMaximum(5);
    m_tabWidget->addTab(highlight, QString());
    lines = new QWidget();
    lines->setObjectName(QString::fromUtf8("lines"));
    line2GroupBox_2 = new Q3GroupBox(lines);
    line2GroupBox_2->setObjectName(QString::fromUtf8("line2GroupBox_2"));
    line2GroupBox_2->setGeometry(QRect(10, 120, 500, 50));
    TextLabel6_2_3_2 = new QLabel(line2GroupBox_2);
    TextLabel6_2_3_2->setObjectName(QString::fromUtf8("TextLabel6_2_3_2"));
    TextLabel6_2_3_2->setGeometry(QRect(10, 20, 60, 20));
    TextLabel6_2_3_2->setWordWrap(false);
    m_line2Distance = new QSpinBox(line2GroupBox_2);
    m_line2Distance->setObjectName(QString::fromUtf8("m_line2Distance"));
    m_line2Distance->setGeometry(QRect(70, 20, 60, 23));
    m_line2Distance->setMaximum(2000);
    m_line2Distance->setSingleStep(5);
    m_line2PenColor = new QPushButton(line2GroupBox_2);
    m_line2PenColor->setObjectName(QString::fromUtf8("m_line2PenColor"));
    m_line2PenColor->setGeometry(QRect(140, 20, 60, 22));
    TextLabel4_3_2_2_4_2 = new QLabel(line2GroupBox_2);
    TextLabel4_3_2_2_4_2->setObjectName(QString::fromUtf8("TextLabel4_3_2_2_4_2"));
    TextLabel4_3_2_2_4_2->setGeometry(QRect(410, 20, 40, 20));
    TextLabel4_3_2_2_4_2->setWordWrap(false);
    m_line2PenStyle = new QComboBox(line2GroupBox_2);
    m_line2PenStyle->setObjectName(QString::fromUtf8("m_line2PenStyle"));
    m_line2PenStyle->setGeometry(QRect(280, 20, 120, 22));
    TextLabel5_3_2_2_4_2 = new QLabel(line2GroupBox_2);
    TextLabel5_3_2_2_4_2->setObjectName(QString::fromUtf8("TextLabel5_3_2_2_4_2"));
    TextLabel5_3_2_2_4_2->setGeometry(QRect(240, 20, 38, 20));
    TextLabel5_3_2_2_4_2->setWordWrap(false);
    m_line2PenColorSample = new Q3Frame(line2GroupBox_2);
    m_line2PenColorSample->setObjectName(QString::fromUtf8("m_line2PenColorSample"));
    m_line2PenColorSample->setGeometry(QRect(210, 20, 20, 22));
    m_line2PenColorSample->setFrameShape(QFrame::StyledPanel);
    m_line2PenColorSample->setFrameShadow(Q3Frame::Raised);
    m_line2PenWidth = new QSpinBox(line2GroupBox_2);
    m_line2PenWidth->setObjectName(QString::fromUtf8("m_line2PenWidth"));
    m_line2PenWidth->setGeometry(QRect(456, 20, 30, 23));
    m_line2PenWidth->setMaximum(5);
    line1GroupBox_2 = new Q3GroupBox(lines);
    line1GroupBox_2->setObjectName(QString::fromUtf8("line1GroupBox_2"));
    line1GroupBox_2->setGeometry(QRect(10, 70, 500, 50));
    TextLabel6_4_2 = new QLabel(line1GroupBox_2);
    TextLabel6_4_2->setObjectName(QString::fromUtf8("TextLabel6_4_2"));
    TextLabel6_4_2->setGeometry(QRect(10, 20, 60, 20));
    TextLabel6_4_2->setWordWrap(false);
    TextLabel4_3_2_4_2 = new QLabel(line1GroupBox_2);
    TextLabel4_3_2_4_2->setObjectName(QString::fromUtf8("TextLabel4_3_2_4_2"));
    TextLabel4_3_2_4_2->setGeometry(QRect(410, 20, 40, 20));
    TextLabel4_3_2_4_2->setWordWrap(false);
    m_line1PenStyle = new QComboBox(line1GroupBox_2);
    m_line1PenStyle->setObjectName(QString::fromUtf8("m_line1PenStyle"));
    m_line1PenStyle->setGeometry(QRect(280, 20, 120, 22));
    m_line1PenColor = new QPushButton(line1GroupBox_2);
    m_line1PenColor->setObjectName(QString::fromUtf8("m_line1PenColor"));
    m_line1PenColor->setGeometry(QRect(140, 20, 60, 22));
    TextLabel5_3_2_4_2 = new QLabel(line1GroupBox_2);
    TextLabel5_3_2_4_2->setObjectName(QString::fromUtf8("TextLabel5_3_2_4_2"));
    TextLabel5_3_2_4_2->setGeometry(QRect(240, 20, 38, 20));
    TextLabel5_3_2_4_2->setWordWrap(false);
    m_line1PenColorSample = new Q3Frame(line1GroupBox_2);
    m_line1PenColorSample->setObjectName(QString::fromUtf8("m_line1PenColorSample"));
    m_line1PenColorSample->setGeometry(QRect(210, 20, 20, 22));
    m_line1PenColorSample->setFrameShape(QFrame::StyledPanel);
    m_line1PenColorSample->setFrameShadow(Q3Frame::Raised);
    m_line1Distance = new QSpinBox(line1GroupBox_2);
    m_line1Distance->setObjectName(QString::fromUtf8("m_line1Distance"));
    m_line1Distance->setGeometry(QRect(70, 20, 60, 23));
    m_line1Distance->setMaximum(2000);
    m_line1Distance->setSingleStep(5);
    m_line1PenWidth = new QSpinBox(line1GroupBox_2);
    m_line1PenWidth->setObjectName(QString::fromUtf8("m_line1PenWidth"));
    m_line1PenWidth->setGeometry(QRect(456, 20, 30, 23));
    m_line1PenWidth->setMaximum(5);
    line0GroupBox_2 = new Q3GroupBox(lines);
    line0GroupBox_2->setObjectName(QString::fromUtf8("line0GroupBox_2"));
    line0GroupBox_2->setGeometry(QRect(10, 20, 500, 50));
    TextLabel4_3_4_2 = new QLabel(line0GroupBox_2);
    TextLabel4_3_4_2->setObjectName(QString::fromUtf8("TextLabel4_3_4_2"));
    TextLabel4_3_4_2->setGeometry(QRect(410, 20, 40, 20));
    TextLabel4_3_4_2->setWordWrap(false);
    TextLabel5_3_4_2 = new QLabel(line0GroupBox_2);
    TextLabel5_3_4_2->setObjectName(QString::fromUtf8("TextLabel5_3_4_2"));
    TextLabel5_3_4_2->setGeometry(QRect(240, 20, 38, 20));
    TextLabel5_3_4_2->setWordWrap(false);
    m_line0PenColor = new QPushButton(line0GroupBox_2);
    m_line0PenColor->setObjectName(QString::fromUtf8("m_line0PenColor"));
    m_line0PenColor->setGeometry(QRect(140, 20, 60, 22));
    m_line0PenColorSample = new Q3Frame(line0GroupBox_2);
    m_line0PenColorSample->setObjectName(QString::fromUtf8("m_line0PenColorSample"));
    m_line0PenColorSample->setGeometry(QRect(210, 20, 20, 22));
    m_line0PenColorSample->setFrameShape(QFrame::StyledPanel);
    m_line0PenColorSample->setFrameShadow(Q3Frame::Raised);
    m_showLine0 = new QCheckBox(line0GroupBox_2);
    m_showLine0->setObjectName(QString::fromUtf8("m_showLine0"));
    m_showLine0->setGeometry(QRect(10, 20, 120, 20));
    m_line0PenStyle = new QComboBox(line0GroupBox_2);
    m_line0PenStyle->setObjectName(QString::fromUtf8("m_line0PenStyle"));
    m_line0PenStyle->setGeometry(QRect(280, 20, 120, 22));
    m_line0PenWidth = new QSpinBox(line0GroupBox_2);
    m_line0PenWidth->setObjectName(QString::fromUtf8("m_line0PenWidth"));
    m_line0PenWidth->setGeometry(QRect(456, 20, 30, 23));
    m_line0PenWidth->setMaximum(5);
    m_tabWidget->addTab(lines, QString());
    other = new QWidget();
    other->setObjectName(QString::fromUtf8("other"));
    walkPathLineGroupBox_2 = new Q3GroupBox(other);
    walkPathLineGroupBox_2->setObjectName(QString::fromUtf8("walkPathLineGroupBox_2"));
    walkPathLineGroupBox_2->setGeometry(QRect(10, 70, 500, 50));
    TextLabel4_3_2_2_2_2_2 = new QLabel(walkPathLineGroupBox_2);
    TextLabel4_3_2_2_2_2_2->setObjectName(QString::fromUtf8("TextLabel4_3_2_2_2_2_2"));
    TextLabel4_3_2_2_2_2_2->setGeometry(QRect(410, 20, 40, 20));
    TextLabel4_3_2_2_2_2_2->setWordWrap(false);
    m_walkPathPenStyle = new QComboBox(walkPathLineGroupBox_2);
    m_walkPathPenStyle->setObjectName(QString::fromUtf8("m_walkPathPenStyle"));
    m_walkPathPenStyle->setGeometry(QRect(280, 20, 120, 22));
    TextLabel5_3_2_2_2_2_2 = new QLabel(walkPathLineGroupBox_2);
    TextLabel5_3_2_2_2_2_2->setObjectName(QString::fromUtf8("TextLabel5_3_2_2_2_2_2"));
    TextLabel5_3_2_2_2_2_2->setGeometry(QRect(240, 20, 38, 20));
    TextLabel5_3_2_2_2_2_2->setWordWrap(false);
    m_walkPathPenColor = new QPushButton(walkPathLineGroupBox_2);
    m_walkPathPenColor->setObjectName(QString::fromUtf8("m_walkPathPenColor"));
    m_walkPathPenColor->setGeometry(QRect(140, 20, 60, 22));
    m_walkPathPenColorSample = new Q3Frame(walkPathLineGroupBox_2);
    m_walkPathPenColorSample->setObjectName(QString::fromUtf8("m_walkPathPenColorSample"));
    m_walkPathPenColorSample->setGeometry(QRect(210, 20, 20, 22));
    m_walkPathPenColorSample->setFrameShape(QFrame::StyledPanel);
    m_walkPathPenColorSample->setFrameShadow(Q3Frame::Raised);
    m_useWalkPathPen = new QCheckBox(walkPathLineGroupBox_2);
    m_useWalkPathPen->setObjectName(QString::fromUtf8("m_useWalkPathPen"));
    m_useWalkPathPen->setGeometry(QRect(10, 20, 100, 20));
    m_walkPathPenWidth = new QSpinBox(walkPathLineGroupBox_2);
    m_walkPathPenWidth->setObjectName(QString::fromUtf8("m_walkPathPenWidth"));
    m_walkPathPenWidth->setGeometry(QRect(456, 20, 30, 23));
    m_walkPathPenWidth->setMaximum(5);
    m_showName = new QCheckBox(other);
    m_showName->setObjectName(QString::fromUtf8("m_showName"));
    m_showName->setGeometry(QRect(10, 10, 90, 20));
    m_showWalkPath = new QCheckBox(other);
    m_showWalkPath->setObjectName(QString::fromUtf8("m_showWalkPath"));
    m_showWalkPath->setGeometry(QRect(10, 40, 130, 20));
    m_tabWidget->addTab(other, QString());
    m_mapIconCombo = new QComboBox(MapIconDialog);
    m_mapIconCombo->setObjectName(QString::fromUtf8("m_mapIconCombo"));
    m_mapIconCombo->setGeometry(QRect(80, 10, 240, 22));
    m_close = new QPushButton(MapIconDialog);
    m_close->setObjectName(QString::fromUtf8("m_close"));
    m_close->setGeometry(QRect(490, 10, 60, 22));
    m_close->setDefault(true);

#ifndef UI_QT_NO_SHORTCUT
    TextLabel7->setBuddy(m_mapIconCombo);
    m_imageImageLabel->setBuddy(m_imageImage);
    TextLabel2_4->setBuddy(m_imageSize);
    TextLabel4_5_2->setBuddy(m_imagePenWidth);
    TextLabel5_5_2->setBuddy(m_imagePenStyle);
    TextLabel3_4_2->setBuddy(m_imageBrushStyle);
    TextLabel1_2_2->setBuddy(m_highlightImage);
    TextLabel2_2_2->setBuddy(m_highlightSize);
    TextLabel3_2_2_2->setBuddy(m_highlightBrushStyle);
    TextLabel5_2_2_2->setBuddy(m_highlightPenStyle);
    TextLabel4_2_2_2->setBuddy(m_highlightPenWidth);
    TextLabel6_2_3_2->setBuddy(m_line2Distance);
    TextLabel4_3_2_2_4_2->setBuddy(m_line2PenWidth);
    TextLabel5_3_2_2_4_2->setBuddy(m_line2PenStyle);
    TextLabel6_4_2->setBuddy(m_line1Distance);
    TextLabel4_3_2_4_2->setBuddy(m_line1PenWidth);
    TextLabel5_3_2_4_2->setBuddy(m_line1PenStyle);
    TextLabel4_3_4_2->setBuddy(m_line0PenWidth);
    TextLabel5_3_4_2->setBuddy(m_line0PenStyle);
    TextLabel4_3_2_2_2_2_2->setBuddy(m_walkPathPenWidth);
    TextLabel5_3_2_2_2_2_2->setBuddy(m_walkPathPenStyle);
#endif // QT_NO_SHORTCUT

    QWidget::setTabOrder(m_mapIconCombo, m_tabWidget);
    QWidget::setTabOrder(m_tabWidget, m_useImage);
    QWidget::setTabOrder(m_useImage, m_imageImage);
    QWidget::setTabOrder(m_imageImage, m_imageSize);
    QWidget::setTabOrder(m_imageSize, m_imageFlash);
    QWidget::setTabOrder(m_imageFlash, m_imageUseSpawnColorPen);
    QWidget::setTabOrder(m_imageUseSpawnColorPen, m_imagePenColor);
    QWidget::setTabOrder(m_imagePenColor, m_imagePenStyle);
    QWidget::setTabOrder(m_imagePenStyle, m_imagePenWidth);
    QWidget::setTabOrder(m_imagePenWidth, m_imageUseSpawnColorBrush);
    QWidget::setTabOrder(m_imageUseSpawnColorBrush, m_imageBrushColor);
    QWidget::setTabOrder(m_imageBrushColor, m_imageBrushStyle);
    QWidget::setTabOrder(m_imageBrushStyle, m_useHighlight);
    QWidget::setTabOrder(m_useHighlight, m_highlightImage);
    QWidget::setTabOrder(m_highlightImage, m_highlightSize);
    QWidget::setTabOrder(m_highlightSize, m_highlightFlash);
    QWidget::setTabOrder(m_highlightFlash, m_highlightUseSpawnColorPen);
    QWidget::setTabOrder(m_highlightUseSpawnColorPen, m_highlightPenColor);
    QWidget::setTabOrder(m_highlightPenColor, m_highlightPenStyle);
    QWidget::setTabOrder(m_highlightPenStyle, m_highlightPenWidth);
    QWidget::setTabOrder(m_highlightPenWidth, m_highlightUseSpawnColorBrush);
    QWidget::setTabOrder(m_highlightUseSpawnColorBrush, m_highlightBrushColor);
    QWidget::setTabOrder(m_highlightBrushColor, m_highlightBrushStyle);
    QWidget::setTabOrder(m_highlightBrushStyle, m_showLine0);
    QWidget::setTabOrder(m_showLine0, m_line0PenColor);
    QWidget::setTabOrder(m_line0PenColor, m_line0PenStyle);
    QWidget::setTabOrder(m_line0PenStyle, m_line0PenWidth);
    QWidget::setTabOrder(m_line0PenWidth, m_line1Distance);
    QWidget::setTabOrder(m_line1Distance, m_line1PenColor);
    QWidget::setTabOrder(m_line1PenColor, m_line1PenStyle);
    QWidget::setTabOrder(m_line1PenStyle, m_line1PenWidth);
    QWidget::setTabOrder(m_line1PenWidth, m_line2Distance);
    QWidget::setTabOrder(m_line2Distance, m_line2PenColor);
    QWidget::setTabOrder(m_line2PenColor, m_line2PenStyle);
    QWidget::setTabOrder(m_line2PenStyle, m_line2PenWidth);
    QWidget::setTabOrder(m_line2PenWidth, m_showName);
    QWidget::setTabOrder(m_showName, m_showWalkPath);
    QWidget::setTabOrder(m_showWalkPath, m_useWalkPathPen);
    QWidget::setTabOrder(m_useWalkPathPen, m_walkPathPenColor);
    QWidget::setTabOrder(m_walkPathPenColor, m_walkPathPenStyle);
    QWidget::setTabOrder(m_walkPathPenStyle, m_walkPathPenWidth);
    QWidget::setTabOrder(m_walkPathPenWidth, m_apply);
    QWidget::setTabOrder(m_apply, m_revert);
    QWidget::setTabOrder(m_revert, m_close);

    retranslateUi(MapIconDialog);
    QObject::connect(m_apply, SIGNAL(clicked()), MapIconDialog, SLOT(apply()));
    QObject::connect(m_revert, SIGNAL(clicked()), MapIconDialog, SLOT(revert()));
    QObject::connect(m_close, SIGNAL(clicked()), MapIconDialog, SLOT(close()));
    QObject::connect(m_mapIconCombo, SIGNAL(activated(int)), MapIconDialog, SLOT(mapIconCombo_activated(int)));
    QObject::connect(m_imagePenColor, SIGNAL(clicked()), MapIconDialog, SLOT(imagePenColor_clicked()));
    QObject::connect(m_imageBrushColor, SIGNAL(clicked()), MapIconDialog, SLOT(imageBrushColor_clicked()));
    QObject::connect(m_highlightPenColor, SIGNAL(clicked()), MapIconDialog, SLOT(highlightPenColor_clicked()));
    QObject::connect(m_highlightBrushColor, SIGNAL(clicked()), MapIconDialog, SLOT(highlightBrushColor_clicked()));
    QObject::connect(m_line0PenColor, SIGNAL(clicked()), MapIconDialog, SLOT(line0PenColor_clicked()));
    QObject::connect(m_line1PenColor, SIGNAL(clicked()), MapIconDialog, SLOT(line1PenColor_clicked()));
    QObject::connect(m_line2PenColor, SIGNAL(clicked()), MapIconDialog, SLOT(line2PenColor_clicked()));
    QObject::connect(m_walkPathPenColor, SIGNAL(clicked()), MapIconDialog, SLOT(walkPathPenColor_clicked()));

    QMetaObject::connectSlotsByName(MapIconDialog);
    } // setupUi

    void retranslateUi(QDialog *MapIconDialog)
    {
    MapIconDialog->setWindowTitle(QApplication::translate("MapIconDialog", "Map Icon Config", 0, QApplication::UnicodeUTF8));
    TextLabel7->setText(QApplication::translate("MapIconDialog", "&Map Icon:", 0, QApplication::UnicodeUTF8));
    m_revert->setText(QApplication::translate("MapIconDialog", "Revert", 0, QApplication::UnicodeUTF8));
    m_apply->setText(QApplication::translate("MapIconDialog", "Apply", 0, QApplication::UnicodeUTF8));
    m_imageImageLabel->setText(QApplication::translate("MapIconDialog", "Image:", 0, QApplication::UnicodeUTF8));
    TextLabel2_4->setText(QApplication::translate("MapIconDialog", "Size:", 0, QApplication::UnicodeUTF8));
    m_imageFlash->setText(QApplication::translate("MapIconDialog", "Flash", 0, QApplication::UnicodeUTF8));
    imageOutlineGroupBox_3->setTitle(QApplication::translate("MapIconDialog", "&Outline", 0, QApplication::UnicodeUTF8));
    TextLabel4_5_2->setText(QApplication::translate("MapIconDialog", "Width:", 0, QApplication::UnicodeUTF8));
    TextLabel5_5_2->setText(QApplication::translate("MapIconDialog", "Style:", 0, QApplication::UnicodeUTF8));
    m_imageUseSpawnColorPen->setText(QApplication::translate("MapIconDialog", "Use Spawn Color", 0, QApplication::UnicodeUTF8));
    m_imagePenColor->setText(QApplication::translate("MapIconDialog", "Color...", 0, QApplication::UnicodeUTF8));
    imageFillGroupBox_3->setTitle(QApplication::translate("MapIconDialog", "&Fill", 0, QApplication::UnicodeUTF8));
    TextLabel3_4_2->setText(QApplication::translate("MapIconDialog", "Style:", 0, QApplication::UnicodeUTF8));
    m_imageBrushColor->setText(QApplication::translate("MapIconDialog", "Color...", 0, QApplication::UnicodeUTF8));
    m_imageUseSpawnColorBrush->setText(QApplication::translate("MapIconDialog", "Use Spawn Color", 0, QApplication::UnicodeUTF8));
    m_useImage->setText(QApplication::translate("MapIconDialog", "&Use Image", 0, QApplication::UnicodeUTF8));
    m_tabWidget->setTabText(m_tabWidget->indexOf(image), QApplication::translate("MapIconDialog", "&Image", 0, QApplication::UnicodeUTF8));
    m_useHighlight->setText(QApplication::translate("MapIconDialog", "&Use Highlight", 0, QApplication::UnicodeUTF8));
    TextLabel1_2_2->setText(QApplication::translate("MapIconDialog", "Image:", 0, QApplication::UnicodeUTF8));
    m_highlightFlash->setText(QApplication::translate("MapIconDialog", "Flash", 0, QApplication::UnicodeUTF8));
    TextLabel2_2_2->setText(QApplication::translate("MapIconDialog", "Size:", 0, QApplication::UnicodeUTF8));
    highlightFillGroupBox_2->setTitle(QApplication::translate("MapIconDialog", "&Fill", 0, QApplication::UnicodeUTF8));
    m_highlightUseSpawnColorBrush->setText(QApplication::translate("MapIconDialog", "Use Spawn Color", 0, QApplication::UnicodeUTF8));
    TextLabel3_2_2_2->setText(QApplication::translate("MapIconDialog", "Style:", 0, QApplication::UnicodeUTF8));
    m_highlightBrushColor->setText(QApplication::translate("MapIconDialog", "Color...", 0, QApplication::UnicodeUTF8));
    highlightOutlineGroupBox_2->setTitle(QApplication::translate("MapIconDialog", "&Outline", 0, QApplication::UnicodeUTF8));
    m_highlightUseSpawnColorPen->setText(QApplication::translate("MapIconDialog", "Use Spawn Color", 0, QApplication::UnicodeUTF8));
    TextLabel5_2_2_2->setText(QApplication::translate("MapIconDialog", "Style:", 0, QApplication::UnicodeUTF8));
    m_highlightPenColor->setText(QApplication::translate("MapIconDialog", "Color...", 0, QApplication::UnicodeUTF8));
    TextLabel4_2_2_2->setText(QApplication::translate("MapIconDialog", "Width:", 0, QApplication::UnicodeUTF8));
    m_tabWidget->setTabText(m_tabWidget->indexOf(highlight), QApplication::translate("MapIconDialog", "&Highlight", 0, QApplication::UnicodeUTF8));
    line2GroupBox_2->setTitle(QApplication::translate("MapIconDialog", "Line &2", 0, QApplication::UnicodeUTF8));
    TextLabel6_2_3_2->setText(QApplication::translate("MapIconDialog", "Distance:", 0, QApplication::UnicodeUTF8));
    m_line2Distance->setSpecialValueText(QApplication::translate("MapIconDialog", "Off", 0, QApplication::UnicodeUTF8));
    m_line2PenColor->setText(QApplication::translate("MapIconDialog", "Color...", 0, QApplication::UnicodeUTF8));
    TextLabel4_3_2_2_4_2->setText(QApplication::translate("MapIconDialog", "Width:", 0, QApplication::UnicodeUTF8));
    TextLabel5_3_2_2_4_2->setText(QApplication::translate("MapIconDialog", "Style:", 0, QApplication::UnicodeUTF8));
    line1GroupBox_2->setTitle(QApplication::translate("MapIconDialog", "Line &1", 0, QApplication::UnicodeUTF8));
    TextLabel6_4_2->setText(QApplication::translate("MapIconDialog", "Distance:", 0, QApplication::UnicodeUTF8));
    TextLabel4_3_2_4_2->setText(QApplication::translate("MapIconDialog", "Width:", 0, QApplication::UnicodeUTF8));
    m_line1PenColor->setText(QApplication::translate("MapIconDialog", "Color...", 0, QApplication::UnicodeUTF8));
    TextLabel5_3_2_4_2->setText(QApplication::translate("MapIconDialog", "Style:", 0, QApplication::UnicodeUTF8));
    m_line1Distance->setSpecialValueText(QApplication::translate("MapIconDialog", "Off", 0, QApplication::UnicodeUTF8));
    line0GroupBox_2->setTitle(QApplication::translate("MapIconDialog", "Line &0", 0, QApplication::UnicodeUTF8));
    TextLabel4_3_4_2->setText(QApplication::translate("MapIconDialog", "Width:", 0, QApplication::UnicodeUTF8));
    TextLabel5_3_4_2->setText(QApplication::translate("MapIconDialog", "Style:", 0, QApplication::UnicodeUTF8));
    m_line0PenColor->setText(QApplication::translate("MapIconDialog", "Color...", 0, QApplication::UnicodeUTF8));
    m_showLine0->setText(QApplication::translate("MapIconDialog", "Show", 0, QApplication::UnicodeUTF8));
    m_tabWidget->setTabText(m_tabWidget->indexOf(lines), QApplication::translate("MapIconDialog", "&Lines", 0, QApplication::UnicodeUTF8));
    walkPathLineGroupBox_2->setTitle(QApplication::translate("MapIconDialog", "Walk Path Line &Override", 0, QApplication::UnicodeUTF8));
    TextLabel4_3_2_2_2_2_2->setText(QApplication::translate("MapIconDialog", "Width:", 0, QApplication::UnicodeUTF8));
    TextLabel5_3_2_2_2_2_2->setText(QApplication::translate("MapIconDialog", "Style:", 0, QApplication::UnicodeUTF8));
    m_walkPathPenColor->setText(QApplication::translate("MapIconDialog", "Color...", 0, QApplication::UnicodeUTF8));
    m_useWalkPathPen->setText(QApplication::translate("MapIconDialog", "Use Override", 0, QApplication::UnicodeUTF8));
    m_showName->setText(QApplication::translate("MapIconDialog", "Show &Name", 0, QApplication::UnicodeUTF8));
    m_showWalkPath->setText(QApplication::translate("MapIconDialog", "Show &Walk Path", 0, QApplication::UnicodeUTF8));
    m_tabWidget->setTabText(m_tabWidget->indexOf(other), QApplication::translate("MapIconDialog", "&General", 0, QApplication::UnicodeUTF8));
    m_close->setText(QApplication::translate("MapIconDialog", "Close", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(MapIconDialog);
    } // retranslateUi

};

namespace Ui {
    class MapIconDialog: public Ui_MapIconDialog {};
} // namespace Ui

QT_END_NAMESPACE

class MapIconDialog : public QDialog, public Ui::MapIconDialog
{
    Q_OBJECT

public:
    MapIconDialog(QWidget* parent = 0, const char* name = 0, bool modal = false, Qt::WindowFlags fl = 0);
    ~MapIconDialog();

public slots:
    virtual void apply();
    virtual void revert();
    virtual void init();
    virtual void destroy();
    virtual void setMapIcons(MapIcons * mapIcons);
    virtual void mapIconCombo_activated(int id);
    virtual void imagePenColor_clicked();
    virtual void imageBrushColor_clicked();
    virtual void highlightPenColor_clicked();
    virtual void highlightBrushColor_clicked();
    virtual void line0PenColor_clicked();
    virtual void line1PenColor_clicked();
    virtual void line2PenColor_clicked();
    virtual void walkPathPenColor_clicked();
    virtual void setupMapIconDisplay();

protected:
    MapIcons* m_mapIcons;
    MapIcon m_currentMapIcon;
    MapIcon m_currentMapIconBackup;
    MapIconType m_currentMapIconType;

protected slots:
    virtual void languageChange();

};

#endif // MAPICONDIALOG_H


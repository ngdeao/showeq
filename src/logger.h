/*
 * logger.h
 *
 *  ShowEQ Distributed under GPL
 *  http://www.sourceforge.net/projects/seq
 */

#ifndef SEQLOGGER_H
#define SEQLOGGER_H

#include <Q3TextStream>

class SEQLogger : public QObject
{
	Q_OBJECT

public:
	SEQLogger(const QString& fname, QObject* parent = 0, const char* name = "SEQLogger");
	SEQLogger(FILE *fp, QObject* parent = 0, const char* name = "SEQLogger");

	bool open();
	bool isOpen();
	int outputf(const char *fmt, ...);
	int output(const void *data, int length);
	void flush();
	void outputData(uint32_t len, const uint8_t* data);

protected:
	FILE* m_fp;
	QFile m_file;
	Q3TextStream m_out;
	QString m_filename;
	bool m_errOpen;
};

inline bool SEQLogger::isOpen()
{
	return (m_fp != 0);
}

#endif

// Class Log.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

class Log
{
public:
	//log levels from 0 to 2
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;

private:
	//private log level int
	int m_LogLevel = LogLevelInfo;

public:
	//sets a log level
	void SetLevel(int level)
	{
		m_LogLevel = level;
	}

	//prints things in log level error
	void Error(const char* message)
	{
		if(m_LogLevel >= LogLevelError)
		std::cout << "[ERROR]: " << message << std::endl;
	}

	//prints things in log level error and lower
	void Warn(const char* message)
	{
		if (m_LogLevel >= LogLevelWarning)
		std::cout << "[WARNING]: " << message << std::endl;
	}

	//prints things in log level error and lower
	void Info(const char* message)
	{
		if (m_LogLevel >= LogLevelInfo)
		std::cout << "[INFO]: " << message << std::endl;
	}

};



int main()
{
	//initiate log
	Log log;
	//set log level to a set level of the three avaiable
	log.SetLevel(log.LogLevelWarning);
	//prints error if log level error chosen
	log.Error("Error!");
	//prints warning if log level warning chosen
	log.Warn("Warning!");
	//prints info if log level info chosen
	log.Info("Info!");

	//pauses te system so you can read the loadout
	system("pause");

    return 0;
}


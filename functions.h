#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include<vector>

void sig_handler(int mySignal);
void studyAtExit();
void sig_chld (int mysignal);
void splitToWords(std::vector<const char*>& data);
void myTerminal (std::vector<const char*>& data);
//void changeDirectory(std::vector<const char*>& data)

#endif

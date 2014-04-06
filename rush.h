#ifndef RUSH_H
#define RUSH_H
#include <iostream>//io c++
#include <string>//string c++
#include <unistd.h>//biblioteca base do syscall
#include <dirent.h>//biblioteca manipular diretorios
void split(std::string com,std::string ncom,std::string par);
int executar(std::string cmd);
void ss(std::string com);
#endif

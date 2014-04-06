#include "rush.h"

using namespace std;
void split(string entrada, string *comando, string *parametro){
	int pos = entrada.find(" ",0);
	cout<<pos;
	parametro = entrada.substr(pos+1);
	comando = entrada.substr(0,pos-1);
}
using namespace std;
int executar(string com){
	string parametro,comando;
	split(com,&comando,&parametro);
	cout<<comando<<"P:"<<parametro<<".F";
	if(comando.compare("exit")==0)
		return -1;
	if(comando.compare("setsid")==0)
		ss(parametro);
	return 0;
}
using namespace std;
void ss(string comando){
	cout<<"\n Comando a executar:"<<comando<<"\n";
	fork();
	setsid();
	string parametro;
	split(comando,&comando,&parametro);
	char *nenv[] = { NULL };
	execve(comando.c_str(),nenv,nenv);
}

#include "rush.h"
using namespace std;
void executar(string comando){
	cout<<"executando blablabla:"<<comando<<"\n";
	int pos = comando.find(" ",0);
	cout << pos;
	string par = comando.substr(pos+1);
	comando = comando.substr(0,pos);
	cout << comando << "   " << par;
}

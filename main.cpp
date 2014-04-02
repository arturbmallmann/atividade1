#include "rush.h"
using namespace std;
int main(){
	char* user;
	char* host = new char[255];
	char* cwd = new char[255];
	string comando;
	user=getlogin();
	gethostname(host,255);
	while (true){
		getcwd(cwd,255);
		std::cout<<user<<"@"<<host<<":"<<cwd<<"$ ";
		std::cin>>comando;
		executar(comando);
	}
}

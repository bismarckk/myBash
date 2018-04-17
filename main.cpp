#include<iostream>
#include<signal.h>
#include<stdlib.h>
#include<unistd.h>
#include"functions.h"
#include <cstring>


using namespace std;

int main (int argc, char *argv[])
{
      // char *pathToSh[] ={"ls", NULL};
      // char *newargv[] = { "ls","-la",NULL };
      vector<const char*> data;
      char buff[100];
      // vector<const char*> pwdargs;
      // pwdargs.push_back("pwd");
      // pwdargs.push_back(NULL);
      
      while(1)
      {
            //if(signal(SIGINT, sig_handler)==SIG_ERR);
            //atexit(studyAtExit);
            

            getcwd(buff, sizeof(buff));
            cout<<"\033[0;33m"<< buff << "$>> "<<"\033[0m";
            //myTerminal(pwdargs);
            splitToWords(data);            
            if(strcmp(data[0],"cd") == 0){
                  //cout<<"tego nie obsluguje\n";
                  if (data.size()>1){
                        chdir(data[1]);
                  }
            }      
            else myTerminal(data);

            data.clear();
      }
      return 0;
}

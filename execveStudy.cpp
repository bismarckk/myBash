#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#include<sys/wait.h>
#include<stdlib.h>

#include<iostream>

#include"functions.h"

using namespace std;

void myTerminal (vector<const char*>& data)
{    
      
      pid_t pid1;
           
            pid1=fork();
            if (pid1==0)
            {                      
                  //kill(getpid(),SIGKILL); 
                                                     
                  if((execvp((char*)data[0],(char**) (&data[0])))==-1)//dziala ale do konca nie rozumiem przekazania (char**) (&data[0]) dlacze nie &data
                        perror ("błedne operacje");  
                   

            }else if (pid1>0)
            {
                  pid1=wait(NULL);
                  
            }     
       
      
}


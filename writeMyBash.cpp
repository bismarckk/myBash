#include<iostream>

#include<unistd.h>
#include<stdio.h>



using namespace std;

void write_consol()
{
      
      const char* pwdargs[]= {"pwd",NULL};
      cout<<"Consol//";      
            if((execvp(pwdargs[0],(char**) &pwdargs[0]))==-1)
                  perror("blad");

}


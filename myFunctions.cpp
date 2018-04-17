#include<unistd.h>
#include<iostream>
#include<signal.h>
#include<stdlib.h>
#include"functions.h"


void sig_handler(int mySignal)
{
      if(mySignal==SIGINT)
      {
            std::cout<<"i get signal\n";
            exit(0);
      }     
}


void studyAtExit()
{
      std::cout<<"\nwyswietlam po zakonczeniu\n";
}


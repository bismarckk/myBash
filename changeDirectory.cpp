#include <iostream>
#include <cstring>
#include <vector>

#include <unistd.h>



//void changeDirectory(std::vector<const char*>& data){
int main (){
      std::vector<const char*> data;   
      data.push_back("/home/sypniewski/Documents/Cwiczenia"); 
      char path[100];
      strcpy(path,data[0]);

      std::cout<<path<<std::endl;
      // if (data.size()>1){
      //       chdir(data[1]);
      // }
      // else{            
      //       chdir("/home/sypniewski/");
      // }
}


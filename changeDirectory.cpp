#include <iostream>
#include <vector>

#include <cstring>

#include <unistd.h>

void changeDirectory(std::vector<const char*>& data){
            
      if (data.size()>1){
            chdir(data[1]);
      }
      else{            
            chdir("/home/sypniewski/");
      }



}

#include "param_sfo.cpp"
#include <iostream>

int main(int argc, char* argv[])
{
 if(argc == 2)
 {
  std::string path(argv[1]);
  param_sfo::param_sfo_file par(path);
  std::cout<<"PATH = "<<path<<std::endl<<std::endl;
  par.print(std::cout);
 }
 return 0;
}
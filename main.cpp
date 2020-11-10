#include <iostream>

int main() {
  std::string comm1;
  std::string path;
  bool error_yes;
  error_yes = false;
  path = "";
  std::cin>>comm1;
  if(comm1 == "ls"){
    std::cout<<"user <dir>\ncommand <dir>\n";
    std::cout<<"user free storage:- 123GB"<<std::endl;
    std::string comm2;
    std::cin>>comm2;
    if(comm2 == "gotodir user"){
      path = "c:/user";
      std::string comm3;
      std::cin>>comm3;
      if(comm3 == "dir"){
        std::cout<<"<empty>";
      }
      if(comm3 == "cd.."){
        path = "c:/";
      }
    }
    if(comm2 == "cd command"){
      error_yes = true;
      path = "xxxxxxxxx"
      
    }
  }
}
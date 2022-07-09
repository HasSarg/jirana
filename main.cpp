#include<iostream>
#include"core/file-controller.hpp"
#include"entities/user.hpp"

int main()
{
  entities::User user;
  user.set_name("name");
  std::cout << "Hello";
  return 0;
}

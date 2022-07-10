#include<iostream>
#include"core/file-controller.hpp"
#include"entities/user.hpp"
#include"entities/task.hpp"
#include"entities/project.hpp"

int main()
{
  entities::User user;
  user.set_name("Poghos");
  user.set_email("poghos@gmail.com");
  user.set_password("poghospassword");
  user.set_title("user1");
  std::cout << user.to_string(" | ") << std::endl;

  entities::Task task;
  task.set_name("task1");
  task.set_deadline("01.01.2023");
  task.set_status("in progress");
  task.set_user(user);
  std::cout << task.to_string(" | ") << std::endl;

  entities::User manager;
  manager.set_name("Petros");
  manager.set_email("petros@gmail.com");
  manager.set_password("petrospassword");
  manager.set_title("manager");

  entities::Project project;
  project.set_name("projec1");
  project.set_manager(manager);
  project.add_task(task);
  std::cout << project.to_string(" | ") << std::endl;
  return 0;
}

/*
 * @file project.h
 * this define class Project
 */

#ifndef PROJECT_H
#define PROJECT_H

#include<iostream>
#include<vector>
#include"entity.hpp"
#include"task.hpp"
#include"user.hpp"

namespace entities
{
class Project: public entities::Entity
{
public:
  Project() = default;
  Project(std::string name) : m_name(name){};
  Project(const Project&) = default;
  Project(Project&&) = default;
  Project& operator=(const Project&) = default;
  Project& operator=(Project&&) = default;
  ~Project() = default;
public:
  void set_name(const std::string& name)
  {
    m_name = name;
  }
  std::string get_name() const
  {
    return m_name;
  }
  void set_manager(const entities::User& manager)
  {
    m_manager = manager;
  }
  entities::User get_manager() const
  {
    return m_manager;
  }
  void add_task(const entities::Task& task)
  {
    m_tasks.push_back(task);
  }
  std::vector<entities::Task> get_tasks() const
  {
    return m_tasks;
  }
  std::string to_string(const std::string& delimiter) const override
  {
    std::string result;
    result += get_name();
    result += delimiter;
    result += get_manager().to_string(delimiter);
    result += delimiter;

    for(int i = 0; i < get_tasks().size(); ++i)
    {
      result += get_tasks()[i].to_string(delimiter);
      result += delimiter;
    }
    return result;
  }
private:
  std::string m_name;
  entities::User m_manager;
  std::vector<entities::Task> m_tasks;
};
} // entities
#endif //PROJECT_H

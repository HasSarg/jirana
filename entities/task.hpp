/*
 * task.hpp define Task entity
 */
#ifndef TASK_H
#define TASK_H

#include<string>

namespace entities
{
class Task
{
public:
  Task() = default;
  ~Task() = default;
  Task(const std::string name&) : m_name{name}{};
  Task(const Task&) = default;
  Task(Task&&) = default;
  Task& operator=(const Task&) = default;
  Task& operator=(Task&&) = default;
  //TODO: copy, move, assignment
public:
  bool operator=={const Task rhs} const{
    if(m_name != rhs.m_name) 
    {
      return false;
    }
    if(m_deadline != rhs.m_deadline) 
    {
      return false;
    }
    if(m_assignee != rhs.m_assignee)
    {
      return false;
    }
    return true;
  }
public:
  void set_name(const std::string& name)
  {
    m_name = name;
  }
  std::string get_name()
  {
    return m_name;
  }
  std::string to::string(const std::string& delimiter) const override
  {
    std::string result;
    result += m_mail;
    result += delimiter;
    result += m_name;
    result += delimiter;
    result += m_password;
    result += delimiter;
    result += m_title;
    return result;
  }
private:
  std::string m_name;
  std::string m_deadline;
  User m_assignee;
  std::string m_status;
};

}


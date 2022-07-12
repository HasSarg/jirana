/*
 * @file task.hpp define Task entity
 */
#ifndef TASK_H
#define TASK_H

#include<string>
#include"user.hpp"
#include"entity.hpp"

namespace entities
{
class Task : public entities::Entity
{
public:
  Task() = default;
  Task(const std::string& name) : m_name{name}{};
  //Task(const Task&) = default;
  Task(const Task& task)
  {
    if(this == &task) return;
    m_name = task.m_name;
    m_deadline = task.m_deadline;
    m_status = task.m_status;
    m_assignee = task.m_assignee;//??????
  }
  Task(Task&&) = default;
  //Task& operator=(const Task&) = default;
  Task& operator=(const Task& task)
  {
    if(this == &task) return *this;
    m_name = task.m_name;
    m_deadline = task.m_deadline;
    m_assignee = task.m_assignee;
    m_status = task.m_status;
  }
  Task& operator=(Task&&) = default;
  virtual ~Task() = default;
public:
  bool operator==(const Task rhs) const{
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
  bool operator!=(const Task rhs) const{
    if(m_name == rhs.m_name)
    {
      return false;
    }
    if(m_deadline == rhs.m_deadline)
    {
      return false;
    }
    if(m_assignee == rhs.m_assignee)
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
  void set_deadline(const std::string& deadline)
  {
    m_deadline = deadline;
  }
  std::string get_deadline() const
  {
    return m_deadline;
  }
  void set_status(const std::string& status)
  {
    m_status = status;
  }
  std::string get_status() const
  {
    return m_status;
  }
  void set_user(const entities::User& user)
  {
    m_assignee = user;
  }
  std::string get_user(const std::string& delimiter) const
  {
    return m_assignee.to_string(delimiter);
  }
  std::string to_string(const std::string& delimiter) const override
  {
    std::string result;
    result += m_name;
    result += delimiter;
    result += m_deadline;
    result += delimiter;
    result += m_assignee.to_string(delimiter);
    result += delimiter;
    result += m_status;
    return result;
  }
private:
  std::string m_name;
  std::string m_deadline;
  User m_assignee;
  std::string m_status;
};
} //entities
#endif // TASK_H

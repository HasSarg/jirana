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

class Project::entities::entity
{
public:
  Project() = default;
  Project(std::string name) : m_name;
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
  void set_manager(const User& manager)
  {
    m_manager = manager;
  }
  User get_manager() const
  {
    return m_manager;
  }
  void set_tasks(const std::vector<Task>& task)
  {
    m_tasks = task;
  }
  std::string to_string(const std::string& delimiter) const override
  {
  }

  void get_email() const
  {
    return m_email;
  }
private:
  std::string m_name;
  User m_manager;
  std::vector<Task> m_tasks;
};

}


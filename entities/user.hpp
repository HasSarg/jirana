/*
 * user.hpp define User entity
 */
#ifndef USER_H
#define USER_H

#include<string>
#include"entity.hpp"

namespace entities
{
class User: public entities::Entity
{
  public:
  User() = default;
  ~User() = default;
  User(const User&) = default;
  User(User&&) = default;
  //User& operator=(const User&) = default;
  User& operator=(const User& other)
  {
    m_name = other.get_name();
    m_email = other.get_email();
    m_password = other.get_password();
    m_title = other.get_title();
  }
  User& operator=(User&&) = default;
public:
  void set_name(const std::string& name)
  {
    m_name = name;
  }
  std::string get_name() const
  {
    return m_name;
  }
  void set_email(const std::string& email)
  {
    m_email = email;
  }
  std::string get_email() const
  {
    return m_email;
  }
  void set_password(const std::string& password)
  {
    m_password = password;
  }
  std::string get_password() const
  {
    return m_password;
  }
  void set_title(const std::string& title)
  {
    m_title = title;
  }
  std::string get_title() const
  {
    return m_title;
  }
  bool operator==(const User& rhs) const
  {
    if(m_name != rhs.m_name) return false;
    if(m_email != rhs.m_email) return false;
    if(m_password != rhs.m_password) return false;
    if(m_title != rhs.m_title) return false;
    return true;
  }
  virtual std::string to_string(const std::string& delimiter) const
  {
    std::string result;
    result += m_name;
    result += delimiter;
    result += m_email;
    result += delimiter;
    result += m_password;
    result += delimiter;
    result += m_title;
    return result;
  }
private:
  std::string m_name;
  std::string m_email;
  std::string m_password;
  std::string m_title;
};
} // entities
#endif //USER.H

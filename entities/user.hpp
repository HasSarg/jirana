/*
 * @file user.hpp define User entity
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
  //User(const User&) = default;
  User(const User& user)
  {
    if(this == &user) return;
    m_name = user.get_name();
    m_email = user.get_email();
    m_password = user.get_password();
    m_title = user.get_title();
  }
  User(User&&) = default;
  //User& operator=(const User&) = default;
  User& operator=(const User& other)
  {
    if(this != &other)
    {
      m_name = other.get_name();
      m_email = other.get_email();
      m_password = other.get_password();
      m_title = other.get_title();
    }
    return *this;
  }
  //User& operator=(User&&) = default;
  User& operator=(User&& other)
  {
    if(this != &other)
    {
      m_name = other.get_name();
      m_email = other.get_email();
      m_password = other.get_password();
      m_title = other.get_title();
    }
    return *this;
  }
  virtual ~User() = default;
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
  bool operator!=(const User& rhs) const
  {
    if(m_name == rhs.m_name && m_email == rhs.m_email &&
       m_title == rhs.m_title && m_password == rhs.m_password)
    {
      return false;
    }
    return true;
  }
  virtual std::string to_string(const std::string& delimiter) const override
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
#endif //USER_H

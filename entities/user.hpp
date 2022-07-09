/*
 * user.hpp define User entity
 */

namespace entities
{

class User
{
public:
  User() = default;
  ~User() = default;
  User(const User&) = default;
  User(User&&) = default;
  User& operator=(const User&) = default;
  User& operator=(Useri&&) = default;
  //TODO: copy, move, assignment
public:
  void set_name(const std::string& name)
  {
    m_name = name;
  }
  void set_email(const std::string& email)
  {
    m_email = email;
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
  bool operator== (const User& rhs) const {
    if(m_email != rhs.m_email) return false;
    if(m_name != rhs.m_name) return false;
    if(m_password != rhs.m_password) return false;
    if(m_title != rhs.m_title) return false;
    return true;
  }
private:
  std::string m_email;
  std::string m_name;
  std::string m_password;
  std::string m_title;
};

}


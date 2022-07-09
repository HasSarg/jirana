/** 
 * @file file-controller
 * @author HS
 * license
 */
#ifndef CORE_FILE_CONTRYOLLER_H
#define CORE_FILE_CONTRYOLLER_H

#include<fstream>
#include<string>
#include"../entities/entity.hpp"
/**
 * @class FileConroller controls file
 */

namespace core
{
class FileController {
public:
  FileController() = delete;
  ~FileController() = delete;

  static void saveUser(const entities::User& u)
  {
    fstream f("user.tmp");
    f << u.get_name() << e.get_name();
  }
  void save(const entities::Entity& entity)
  {
    f.open("../entities.txt", std::ios::out);
    f << entity.to_string(" | ");
    f.close();
  }
private:
  static std::fstream f("entities.txt");
};
} //core

#endif // CORE_FILE_CONTRYOLLER_H




///**
// * @name fn_name
// * @return int 
// * @param a integer to do ...
// */
//
//int fn_name(int a)
//{
//  int result = a * a;
//  return result;
//}

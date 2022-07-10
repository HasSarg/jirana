/**
 * @file file-controller.hpp
 */
#ifndef CORE_FILE_CONTRYOLLER_H
#define CORE_FILE_CONTRYOLLER_H

#include<fstream>
#include<string>
#include"../entities/entity.hpp"
namespace core
{
/**
 * @class FileConroller controls files
 */
class FileController
{
public:
  FileController() = delete;
  ~FileController() = delete;

  static void save(const entities::Entity* e, const std::string delimiter)
  {
    //f.open("entities.txt");
    //if(f.is_open())
    //{
      //f << e->to_string(delimiter);
      std::cout << e->to_string(delimiter);
      std::cout << "save\n";
    //}
    //else
    //{
    //  std::cout << "Error\n";
    //}
    //f.close();
  }
private:
  static std::fstream f;
};
} //core

#endif // CORE_FILE_CONTROLLER_H

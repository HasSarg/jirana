#ifndef ENTITY_H
#define ENTITY_H

#include<string>

namespace entities
{
class Entity
{
  public:
   virtual ~Entity() = default;
  public:
    virtual std::string to_string(const std::string& delimiter) const = 0;
};
} //entities
#endif //ENTITY_H

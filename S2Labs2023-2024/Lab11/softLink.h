#ifndef SOFTLINK_H
#define SOFTLINK_H

#include "Dir.h"
#include <string>

class softLink : public Dir
{

public:
    softLink(Dir* a, std::string name);
};

#endif

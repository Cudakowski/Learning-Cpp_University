#include "softLink.h"

softLink::softLink(Dir* a, std::string name): Dir(name,"SOFTLINK") 
{
    _tab.push_back(a);
}

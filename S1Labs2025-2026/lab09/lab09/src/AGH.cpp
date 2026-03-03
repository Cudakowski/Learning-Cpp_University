#include "AGH.h"

AGH* AGH::_ptr=nullptr;
std::string AGH::_name="";

AGH * AGH::Create()
{
    if(!_ptr)
    {
        AGH *ptr= new AGH();
        _ptr=ptr;
    }
    
    return _ptr;
}

AGH::AGH()
{
    _name="";
}

void AGH::SetName(std::string str)
{
    _name=str;
}

void AGH::Presentation()
{
    std::cout<<_name<<'\n';
}

void AGH::Delete()
{   
    if(_ptr)
        delete _ptr;
}

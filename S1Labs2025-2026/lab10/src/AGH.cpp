#include "AGH.h"

AGH* AGH::_ptr=nullptr;
AGH* AGH::_ptr2=nullptr;
std::string AGH::_name="";
std::string AGH::_name2="";
int AGH::_n=1;

AGH * AGH::Create()
{
    if(_n==1)
    {
        if(!_ptr)
        {
            AGH *ptr= new AGH();
            _ptr=ptr;
        }
        //_m=0;
        _n=2;
        return _ptr;
    }
    else
    {
        if(!_ptr2)
        {
            AGH *ptr= new AGH();
            _ptr2=ptr;
        }
        //_m=1;
        _n=1;
        return _ptr2;
    }
    
}

AGH::AGH()
{
    _name="";
}

void AGH::SetName(std::string str)
{
    if(_n==1)
    {
        _name=str;
    }
    else
    {
        _name2=str;
    }
}

void AGH::Presentation()
{
    std::cout<<(_n==1?_name:_name2)<<'\n';
}

void AGH::Delete()
{   
    if(_ptr)
        delete _ptr;
    if(_ptr2)
        delete _ptr2;
}

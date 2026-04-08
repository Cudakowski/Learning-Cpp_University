#include "GameObject.h"

std::vector<GameObject*> GameObject::_tab=std::vector<GameObject*>();

GameObject::GameObject(std::string name): _name{name} {}
GameObject::~GameObject()=default;
GameObject* GameObject::addGameObject(GameObject* a)
{
    _tab.push_back(a);
    return a;
}

const std::vector<GameObject*> &GameObject::ActiveGameObjects()
{
    return _tab;
}

std::string GameObject::Name() const
{
    return _name;
}

void GameObject::destroyGameObject(GameObject* a)
{
    for (size_t i{};i<_tab.size();i++)
    {
        if(_tab[i]==a)
        {
            delete _tab[i];
            _tab.erase(_tab.begin()+i);
            return;
        }
    }
    std::cout<<"GameObject not found for destruction\n";
}


void GameObject::destroyGameObjects()
{
    for (auto &&i : _tab)
    {
        delete i;
    }
    
}

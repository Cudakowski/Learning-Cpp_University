#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

#include <vector>
#include <string>
#include <iostream>

class GameObject
{
private:
    static std::vector<GameObject*> _tab;
    std::string _name;
public:
    GameObject(std::string name);
    virtual ~GameObject();
    static GameObject*  addGameObject(GameObject* a);
    static const std::vector<GameObject*> &ActiveGameObjects();
    std::string Name() const;
    static void destroyGameObject(GameObject* a);
    virtual void action()const=0;
    static void destroyGameObjects();
};

#endif

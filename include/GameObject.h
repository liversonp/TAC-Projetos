#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "Rect.h"
#include "Component.h"
#include "SDL_include.h"

class Component;

class GameObject{
private:
    std::vector <std::unique_ptr <Component>> components;
    bool isDead;
public:
    GameObject();
    ~GameObject();
    void Update(float dt);
    void Render();
    bool IsDead();
    void RequestDelete();
    void AddComponent(Component* cpt);
    void RemoveComponent(Component* cpt);
    Component* GetComponent(std::string type);
    Rect box;
};

#endif
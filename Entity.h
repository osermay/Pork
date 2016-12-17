//
//  Entity.h
//  NYUCodebase
//
//  Created by Kristin Moser on 12/16/16.
//  Copyright © 2016 Ivan Safrin. All rights reserved.
//

#ifndef Entity_h
#define Entity_h


#endif /* Entity_h */
#include "Entity.cpp"

enum EntityType {ENTITY_PLAYER, ENTITY_OUCH,
    ENTITY_NICE, ENTITY_PLATFORM};

class Entity {
public:
    Entity();
    Entity(Vector3 pos, Vector3 vel, Vector3 acc);
    Vector3 position;
    Vector3 velocity;
    Vector3 acceleration;
    float gravity = -2.0f;
    void calcBTLR();
    float bottom;
    float top;
    float left;
    float right;
    float rotation;
    
    bool isStatic;
    EntityType type;
    
    bool collidedTop;
    bool collidedBottom;
    bool collidedLeft;
    bool collidedRight;
};

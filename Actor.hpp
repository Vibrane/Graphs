#ifndef ACTOR_H
#define ACTOR_H
#include <iostream>
#include "MovieEdge.hpp"
#include <unordered_map>
using namespace std;
class Actor
{
public:
    unordered_map<string, MovieEdge> edgeMap;
    Actor(string n ) : name(n) {}
    int distance = 0;
    int index;
    string name;
    string prevActor;
    bool visited;
    bool operator<(const Actor& other) const
    {
        if (distance != other.distance)
            return distance > other.distance; //smaller count is higher priority
        return name > other.name; //smaller symbol as higher priority
    }
};
#endif
		

// CSE 101 Winter 2016, PA 4
//
// Name: TODO put both partners' info if applicable
// PID: TODO
// Sources of Help: TODO
// Due: March 4th, 2016 at 11:59 PM

#ifndef __A_STAR_CPP__
#define __A_STAR_CPP__

#include "AStar.hpp"

std::pair<int, float> a_star(TwoDArray<Coordinate>& g, Coordinate s, 
                             Coordinate d, float heuristic_weight) {
    // tbr indicates (number of vertices, length of best path found)
    std::pair<int, float> tbr;

    // TODO: Perform A* calculations

    // -1 is returned if the destination is not reachable
    tbr.first = -1;
    tbr.second = -1.0;

    return tbr;
}


#endif

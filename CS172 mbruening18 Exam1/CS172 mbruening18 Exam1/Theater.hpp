//
//  Theater.hpp
//  CS172 mbruening18 Exam1
//
//  Created by Megan Bruening on 10/6/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//

#ifndef Theater_hpp
#define Theater_hpp
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
using namespace std;

#include <stdio.h>

class Theater
{
private:
    string Name;
    string Phone;
    
public:
    Theater(string Name, string Phone); //The name for this theater
    
    void AddMovie(Movie& Movie); //Add a movie at a specific time
    string GetMovieForHour(int Hour); //Return the movie shown at or after the given hour
                                      //   Return "" if none are upcoming
    
    int GetShowTimeForGenre(string Genre);//When will the movie of the given genre be shown?
                                          //   Return -1 if none exist
    
    int GetPopcornPrice(); //Make up a cost in dollars for popcorn int GetCokePrice();
                           //Make up a cost on Coke
};

#endif /* Theater_hpp */

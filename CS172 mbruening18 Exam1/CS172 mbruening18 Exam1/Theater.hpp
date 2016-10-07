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
#include "Movie.hpp"
using namespace std;

#include <stdio.h>

class Theater
{
private:
    string NameOfTheater;
    string PhoneNumberOfTheater;
    int PriceOfPopcorn;
    int PriceOfCoke;
    
public:
    
    Theater(string Name, string Phone);

    void AddMovie(Movie& Movie);
    string GetMovieForHour(int Hour, Movie Movie[11]) const;
    int GetShowTimeForGenre(string Genre, Movie Movie[11]) const;
    int GetPopcornPrice();
    int GetCokePrice();
    
};
    
#endif /* Theater_hpp */

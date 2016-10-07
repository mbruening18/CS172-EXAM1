//
//  Theater.hpp
//  CS172 mbruening18 Exam1
//
//  Created by Megan Bruening on 10/6/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//
//I affirm that all code given below was written solely by me, Megan Bruneing,
//and that any help I received adhered to the rules stated for this exam.

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

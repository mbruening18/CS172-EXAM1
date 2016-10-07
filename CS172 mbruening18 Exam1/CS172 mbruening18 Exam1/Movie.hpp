//
//  Movie.hpp
//  CS172 mbruening18 Exam1
//
//  Created by Megan Bruening on 10/6/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//
//I affirm that all code given below was written solely by me, Megan Bruneing,
//and that any help I received adhered to the rules stated for this exam.

#ifndef Movie_hpp
#define Movie_hpp
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
#include <stdio.h>

using namespace std;

//Establishes class Movie
class Movie
{
//Makes the following functions private
private:
    string TitleOfMovie;
    string GenreOfMovie;
    int ShowtimeOfMovie;
    
    //Makes the following functions public
public:
    // consturctor that takes no argument function
    //Makes default movie for theater
    Movie();
    
   //Consturctor function
    Movie(string Title, string Genre, int ShowTime);
    
    //Gets and returns the movie title
    string GetTitle()const;
    //Gets and returns the movie genre
    string GetGenre()const;
    // Gets and returns the showtime of the Movie
    int GetShowtime()const;
};

#endif /* Movie_hpp */

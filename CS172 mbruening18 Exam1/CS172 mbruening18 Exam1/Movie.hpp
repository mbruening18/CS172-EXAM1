//
//  Movie.hpp
//  CS172 mbruening18 Exam1
//
//  Created by Megan Bruening on 10/6/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//

#ifndef Movie_hpp
#define Movie_hpp
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
#include <stdio.h>

using namespace std;

class Movie
{
private:
    string Title;
    string Genre;
    int Showtime;
public:
    //Come up with a default movie for your theater
    Movie();
    // for Genre, only Action, Comedy, Horror, and Documentary. If none of those,
    // default to Comedy
    Movie(string Title, string Genre, int ShowTime);
    
    string GetTitle(); // Returns the movie title
    string GetGenre(); // Returns the movie genre
    int GetShowtime(); // When is this movie shown?
};

#endif /* Movie_hpp */

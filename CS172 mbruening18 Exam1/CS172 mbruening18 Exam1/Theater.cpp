//
//  Theater.cpp
//  CS172 mbruening18 Exam1
//
//  Created by Megan Bruening on 10/6/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//

#include "Theater.hpp"

#include "Theater.hpp"
#include "Movie.hpp"
#include <string>
using namespace std;


Theater::Theater(string Name, string Phone)
{
    NameOfTheater = Name;
    PhoneNumberOfTheater = Phone;
}

void Theater::AddMovie(Movie& Movie)
{
    Movie::Movie(Movie.GetTitle(), Movie.GetGenre(), Movie.GetShowtime());
}

string Theater::GetMovieForHour(int Hour, Movie Movie[11]) const
{
    for(int i=0; i < 11; i++)
    {
        if(Hour == Movie[i].GetShowtime())
        {
            string s = Movie[i].GetTitle();
            return s;
            break;
        }
    }
    return "";
}


int Theater::GetShowTimeForGenre(string Genre, Movie Movie[11]) const
{
    for(int i=0; i<11; i++) {
        if(Genre == Movie[i].GetGenre())
            return Movie[i].GetShowtime();
    }
    return -1;
}


int Theater::GetPopcornPrice()
{
    PopcornPrice = 7;
    return PopcornPrice;
}


int Theater::GetCokePrice()
{
    CokePrice = 3;
    return CokePrice;
}

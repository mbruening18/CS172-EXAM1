//
//  Theater.cpp
//  CS172 mbruening18 Exam1
//
//  Created by Megan Bruening on 10/6/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//
//I affirm that all code given below was written solely by me, Megan Bruneing,
//and that any help I received adhered to the rules stated for this exam.

#include "Theater.hpp"
#include "Movie.hpp"
#include <string>
using namespace std;

//constructor for name of theater and phone number
Theater::Theater(string Name, string Phone)
{
    NameOfTheater = Name;
    PhoneNumberOfTheater = Phone;
}

//Adds movie title, genre and time for each movie
void Theater::AddMovie(Movie& Movie)
{
    Movie::Movie(Movie.GetTitle(), Movie.GetGenre(), Movie.GetShowtime());
}

//checks to see what time the move plays or will play
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

//Gets and returns the times for that genre
int Theater::GetShowTimeForGenre(string Genre, Movie Movie[11]) const
{
    for(int i=0; i<11; i++)
    {
        if(Genre == Movie[i].GetGenre())
        return Movie[i].GetShowtime();
    }
    return -1;
}

//returns the price of popcorn
int Theater::GetPopcornPrice()
{
    PriceOfPopcorn = 7;
    return PriceOfPopcorn;
}

//return the price of soda
int Theater::GetCokePrice()
{
    PriceOfCoke = 3;
    return PriceOfCoke;
}

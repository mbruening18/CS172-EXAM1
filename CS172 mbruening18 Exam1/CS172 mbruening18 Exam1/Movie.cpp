//
//  Movie.cpp
//  CS172 mbruening18 Exam1
//
//  Created by Megan Bruening on 10/6/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//
//I affirm that all code given below was written solely by me, Megan Bruneing,
//and that any help I received adhered to the rules stated for this exam.

#include "Movie.hpp"

//No-argument constructor
//returns default movie for theater
Movie::Movie()
{
    TitleOfMovie = "RED";
    GenreOfMovie = "Action";
    ShowtimeOfMovie = 2;
}

//Constuctor
// for Genre, only Action, Comedy, Horror, and Documentary. If none of those, default to Comedy
Movie::Movie(string Title, string Genre, int ShowTime)

{
    TitleOfMovie = Title;
    GenreOfMovie = Genre;
    ShowtimeOfMovie = ShowTime;
}

 //Gets and returns the movie title
string Movie::GetTitle() const
{
    return TitleOfMovie;
}

 //Gets and returns the movie Genre
string Movie::GetGenre() const
{
    return GenreOfMovie;
}

 //Gets and returns the showtime for the movie
int Movie::GetShowtime() const
{
    return ShowtimeOfMovie;
}

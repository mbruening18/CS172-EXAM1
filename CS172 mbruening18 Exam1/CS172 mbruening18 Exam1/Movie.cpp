//
//  Movie.cpp
//  CS172 mbruening18 Exam1
//
//  Created by Megan Bruening on 10/6/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//

#include "Movie.hpp"

//Come up with a default movie for your theater
Movie::Movie()
{
    TitleOfMovie = "RED";
    GenreOfMovie = "Action";
    ShowtimeOfMovie = 0;
}

Movie::Movie(string Title, string Genre, int ShowTime)// for Genre, only Action, Comedy, Horror, and Documentary. If none of those,
                                                      // default to Comedy
{
    TitleOfMovie = Title;
    GenreOfMovie = Genre;
    ShowtimeOfMovie = ShowTime;
}

string Movie::GetTitle() const// Returns the movie title
{
    return TitleOfMovie;
}

string Movie::GetGenre() const // Returns the movie genre
{
    return GenreOfMovie;
}

int Movie::GetShowtime() const // When is this movie shown?
{
    return ShowtimeOfMovie;
}

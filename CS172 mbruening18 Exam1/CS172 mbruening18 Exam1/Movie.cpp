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
    return 0;
}

// for Genre, only Action, Comedy, Horror, and Documentary. If none of those,
// default to Comedy

Movie::Movie(string Title, string Genre, int ShowTime)
{
    
}

string Movie::GetTitle() // Returns the movie title
{
    return Movie;
}

string Movie::GetGenre() // Returns the movie genre
{
    return Genre;
}

int Movie::GetShowtime() // When is this movie shown?
{
    return Showtime;
}

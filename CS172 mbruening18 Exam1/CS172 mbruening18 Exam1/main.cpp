//
//  main.cpp
//  CS172 mbruening18 Exam1
//
//  Created by Megan Bruening on 10/6/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//
//I affirm that all code given below was written solely by me, Megan Bruneing,
//and that any help I received adhered to the rules stated for this exam.

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>

#include "Movie.hpp"
#include "Theater.hpp"

using namespace std;

int main()
{
    //makes an array of movies, 11 of them
    const int MOVIECOUNT = 11;
    Movie movieListing[] =
    {
        // 11 diffrent array options 
        Movie("Bull Durham", "Comedy", 0), Movie("Ocean's Eleven", "Action", 2),
        Movie("Monte Python's Meaning of Life", "Comedy", 5), Movie("Jaws", "Horror", 7),
        Movie("Fletch", "Comedy", 10), Movie("Usual Suspects", "Action", 12),
        Movie("Bull Durham", "Comedy", 14), Movie("Ocean's Eleven", "Action", 16),
        Movie("Monte Python's Meaning of Life", "Comedy", 19), Movie("Jaws", "Horror", 21),
        Movie("Usual Suspects", "Action", 23),
    };
    //counts the product of the 11 movies
    Theater garland("The Garland", "509-327-2509");
    for (int m = 0; m < MOVIECOUNT; m++)
    {
        garland.AddMovie(movieListing[m]);
    }
    
   //Makes sure the GetMovieForHour function in the Theater class works
    int errors = 0;
    if (garland.GetMovieForHour(-1, movieListing) != "")
    {
        errors++;
        cout << "error: not handling -1 correctly\n";
    }
    if (garland.GetMovieForHour(25, movieListing) != "")
    {
        errors++;
        cout << "error: not handling 25 correctly\n";
    }
    if (garland.GetMovieForHour(19, movieListing) != "Monte Python's Meaning of Life")
    {
        errors++;
        cout << "error: incorrect movie for 19th hour\n";
    }
    
    //Makes sure the GetShowTimeForGenre function in the theater class works
    if (garland.GetShowTimeForGenre("Comedy", movieListing) != 0)
    {
        errors++;
        cout << "error: incorrect Comedy\n";
    }
    
    //couts the results, if it passed or has errors
    if (errors == 0) cout << "Passed\n";
    else cout << "Errors: " << errors << endl;
    
    //ends exit code 0
    return 0;
}

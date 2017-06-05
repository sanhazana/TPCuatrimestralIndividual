//
// Created by Lucas on 30/5/2017.
//

#include <malloc.h>
#include <time.h>
#include <mem.h>
#include <stdio.h>
#include "Movie.h"
#include "Client.h"

Movie* createMovie(char* title, double price){
    Movie* result = malloc(sizeof(Movie));
    result->title = title;
    result->idMovieCard = 0;
    result->price = price;

    time_t currentTime = time(NULL);
    result->timeStamp=currentTime;
}
void changePrice(Movie* movie, double price){
    movie->price = price;
}

double rentMovie(Movie* movie, int idMovieCard, double amount){
    if(amount>=movie->price && movie->idMovieCard==0){
        movie->idMovieCard=idMovieCard;

        time_t calendarTime;
        time(&calendarTime);

        movie->rentDate = malloc(sizeof(char *));
        strcpy(movie->rentDate, ctime(&calendarTime));


        printf("%s", "You rent the Movie!");
        return amount;
    } else {
        printf("%s", "You can't rent the Movie! Enough amount of money or it´s already rent.");
        return 0;
    }
}

void isAvailable(Movie* movie){
    if(movie->idMovieCard == 0) {
        printf("%s", "Movie is available!");
    }else{
        printf("%s", "Movie is NOT available!");
    }
}

void freeMovie(Movie* movie){
    free(movie->rentDate);
    free(movie->devolutionDate);
    free(movie);
}
//
//  weather.cpp
//  OOP Class
//
//  Created by Nassir Ali on 6/6/19.
//  Copyright © 2019 Nassir Ali. All rights reserved.
//

#include <iostream>
#include <string>
#include "weather.h"

using namespace std;

/*
 * A constructor for weather class.
 * */
Weather::Weather(std::string nm, GPS loc) :
station_nm(nm), my_loc(loc) {
}

ostream& operator<< (std::ostream& os, const Weather& w){
    os << "Name: " << w.station_nm << endl;
    os << "Latitude: " << w.my_loc.latitude << ", Longitude: " << w.my_loc.longitude << ", Rating: " << w.rating << endl;
    for(WReading reading: w.wreadings){
        os << reading << endl;
    }
    return os;
}
int Weather::get_rating() const {
    return rating;
}

void Weather::set_rating(int new_rating){
    rating = new_rating;
}

void Weather::add_reading(WReading w){
    wreadings.push_back(w);
}

string Weather::get_name() const {
    return station_nm;
}

std::ostream& operator<<(std::ostream& os, const WReading& wr){
    os << "Date: " << wr.date << "; Temp: " << wr.temperature << "; Humidity: " << wr.humidity << "; Windspeed: " << wr.windspeed;
    return os;
}

std::ostream& operator<<(std::ostream& os, const Date& date){
    os << date.month << "/" << date.day << "/" << date.year;
    return os;
}


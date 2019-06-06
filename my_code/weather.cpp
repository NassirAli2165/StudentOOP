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
    return os;
}
int Weather::get_rating() const {
    return rating;
}

void Weather::set_rating(int new_rating){
    rating = new_rating;
}

string Weather::get_name() const {
    return station_nm;
}

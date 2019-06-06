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


string Weather::get_name() {
    return station_nm;
}

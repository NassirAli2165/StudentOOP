//
//  weather.hpp
//  OOP Class
//
//  Created by Nassir Ali on 6/6/19.
//  Copyright © 2019 Nassir Ali. All rights reserved.
//

#ifndef weather_h
#define weather_h

#include <stdio.h>
#include <string>

struct GPS {
    double latitude;
    double longitude;
    GPS(double la, double lo) : latitude(la),
    longitude(lo) {}
};


class Weather {
public:
    Weather(std::string nm, GPS loc);
    std::string get_name();
    friend std::ostream& operator<< (std::ostream& os, const Weather& w);
private:
    std::string station_nm;
    GPS my_loc;
};


#endif /* weather_h */

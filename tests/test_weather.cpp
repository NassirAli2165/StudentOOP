//
//  test_weather.cpp
//  OOP Class
//
//  Created by Nassir Ali on 6/6/19.
//  Copyright © 2019 Nassir Ali. All rights reserved.
//

#include <stdio.h>
#include <cassert>
#include <iostream>
#include "../my_code/weather.h"

using namespace std;

int main() {
    GPS loc = GPS(46.3, 67.2);
    Weather irkutsk = Weather("Irkutsk", loc);
    cout << irkutsk << endl;
}

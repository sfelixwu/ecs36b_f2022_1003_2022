
#ifndef _GPS_H_
#define _GPS_H_

// GPS.h

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cstdlib>

// for Json::value
#include <json/json.h>
#include <json/reader.h>
#include <json/writer.h>
#include <json/value.h>

using namespace std;

class GPS_DD
{
 private:
  double latitude;
  double longitude;
 public:
  explicit GPS_DD();
  explicit GPS_DD(double, double);
  double getLatitude();
  double getLongitude();
  double distance(GPS_DD);
  Json::Value dump2JSON();
};

#endif /* _GPS_H_ */

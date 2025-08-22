#include "libkcountry.hpp"
#include "libktimezone.hpp"
#include "libktimezone.h"

const char* k_timezone_from_location(float param1, float param2) {
    return KTimeZone_FromLocation(param1, param2);
}

KCountry* k_timezone_country(const char* param1) {
    return KTimeZone_Country(param1);
}

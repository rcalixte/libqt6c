#include "libkcountry.hpp"
#include "libktimezone.hpp"
#include "libktimezone.h"

const char* k_timezone_from_location(float latitude, float longitude) {
    return KTimeZone_FromLocation(latitude, longitude);
}

KCountry* k_timezone_country(const char* ianaId) {
    return KTimeZone_Country(ianaId);
}

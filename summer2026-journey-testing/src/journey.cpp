#include "journey.h"

namespace GPS
{

Journey::Journey(std::vector<TimedWaypoint> timedWaypoints) : points{timedWaypoints} {}


// TODO: Stub definition needs implementing
metres Journey::netHeightGain() const
{
    return 0;
}

// TODO: Stub definition needs implementing
metres Journey::totalHeightGain() const
{
    return 0;
}

// TODO: Stub definition needs implementing
metresPerSecond Journey::maxSpeed() const
{
    return 0;
}

// TODO: Stub definition needs implementing
Waypoint Journey::highestWaypoint() const
{
    return Waypoint(0,0,0);
}

// TODO: Stub definition needs implementing
Waypoint Journey::lowestWaypoint() const
{
    return Waypoint(0,0,0);
}


}

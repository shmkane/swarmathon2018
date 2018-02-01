#ifndef distancepid_h
#define distancepid_h

#include "Waypoint.h"
#include "WaypointUtilities.h"
#include "../PID.h"

typedef struct distance_pid_params
{
    double goal_distance;
    double kp;
    double ki;
    double kd;
} DistancePIDParams;

class DistancePID : public Waypoint
{
    friend class DistancePIDDrive;
    public:
        DistancePID( LogicInputs *i, DistancePIDParams p );
    private:
        DistancePIDParams params;
        WaypointUtilities::PidPackage pids;
        WaypointUtilities::DrivingParams driving_params;

};

#endif

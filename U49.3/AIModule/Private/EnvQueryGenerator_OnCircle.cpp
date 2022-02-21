#include "EnvQueryGenerator_OnCircle.h"
#include "EnvQueryContext_Querier.h"

UEnvQueryGenerator_OnCircle::UEnvQueryGenerator_OnCircle() {
    this->PointOnCircleSpacingMethod = (EPointOnCircleSpacingMethod)176;
    this->AngleRadians = 6.28f;
    this->CircleCenter = UEnvQueryContext_Querier::StaticClass();
    this->bIgnoreAnyContextActorsWhenGeneratingCircle = false;
    this->bDefineArc = false;
}


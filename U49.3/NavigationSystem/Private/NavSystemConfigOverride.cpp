#include "NavSystemConfigOverride.h"

ANavSystemConfigOverride::ANavSystemConfigOverride() {
    this->NavigationSystemConfig = NULL;
    this->OverridePolicy = (ENavSystemOverridePolicy)216;
    this->bLoadOnClient = false;
}


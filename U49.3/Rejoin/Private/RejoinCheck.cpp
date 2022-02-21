#include "RejoinCheck.h"

URejoinCheck::URejoinCheck() {
    this->LastKnownStatus = (ERejoinStatus)88;
    this->bRejoinAfterCheck = false;
    this->bAttemptingRejoin = false;
}


#include "SocialParty.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=PartyBeaconClient -FallbackName=PartyBeaconClient
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=SpectatorBeaconClient -FallbackName=SpectatorBeaconClient

USocialParty::USocialParty() {
    this->ReservationBeaconClientClass = APartyBeaconClient::StaticClass();
    this->SpectatorBeaconClientClass = ASpectatorBeaconClient::StaticClass();
    this->bEnableAutomaticPartyRejoin = true;
    this->ReservationBeaconClient = NULL;
    this->SpectatorBeaconClient = NULL;
}


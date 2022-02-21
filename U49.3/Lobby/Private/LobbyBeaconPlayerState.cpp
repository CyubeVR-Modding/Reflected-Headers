#include "LobbyBeaconPlayerState.h"
#include "Net/UnrealNetwork.h"

void ALobbyBeaconPlayerState::OnRep_UniqueId() {
}

void ALobbyBeaconPlayerState::OnRep_PartyOwner() {
}

void ALobbyBeaconPlayerState::OnRep_InLobby() {
}

void ALobbyBeaconPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALobbyBeaconPlayerState, DisplayName);
    DOREPLIFETIME(ALobbyBeaconPlayerState, UniqueId);
    DOREPLIFETIME(ALobbyBeaconPlayerState, PartyOwnerUniqueId);
    DOREPLIFETIME(ALobbyBeaconPlayerState, bInLobby);
    DOREPLIFETIME(ALobbyBeaconPlayerState, ClientActor);
}

ALobbyBeaconPlayerState::ALobbyBeaconPlayerState() {
    this->bInLobby = false;
    this->ClientActor = NULL;
}


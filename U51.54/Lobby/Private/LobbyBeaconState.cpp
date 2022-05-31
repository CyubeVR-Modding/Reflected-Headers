#include "LobbyBeaconState.h"
#include "Net/UnrealNetwork.h"
#include "LobbyBeaconPlayerState.h"

void ALobbyBeaconState::OnRep_WaitForPlayersTimeRemaining() {
}

void ALobbyBeaconState::OnRep_LobbyStarted() {
}

void ALobbyBeaconState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALobbyBeaconState, bLobbyStarted);
    DOREPLIFETIME(ALobbyBeaconState, WaitForPlayersTimeRemaining);
    DOREPLIFETIME(ALobbyBeaconState, Players);
}

ALobbyBeaconState::ALobbyBeaconState() {
    this->MaxPlayers = 0;
    this->LobbyBeaconPlayerStateClass = ALobbyBeaconPlayerState::StaticClass();
    this->bLobbyStarted = false;
    this->WaitForPlayersTimeRemaining = 20.00f;
}


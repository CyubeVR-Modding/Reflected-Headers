#include "LevelSequencePlayer.h"

class UCameraComponent;
class ULevelSequence;
class UObject;
class ULevelSequencePlayer;
class ALevelSequenceActor;

UCameraComponent* ULevelSequencePlayer::GetActiveCameraComponent() const {
    return NULL;
}

ULevelSequencePlayer* ULevelSequencePlayer::CreateLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, ALevelSequenceActor*& OutActor) {
    return NULL;
}

ULevelSequencePlayer::ULevelSequencePlayer() {
}


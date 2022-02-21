#include "MovieScene.h"

UMovieScene::UMovieScene() {
    this->CameraCutTrack = NULL;
    this->EvaluationType = (EMovieSceneEvaluationType)24;
    this->ClockSource = (EUpdateClockSource)24;
}


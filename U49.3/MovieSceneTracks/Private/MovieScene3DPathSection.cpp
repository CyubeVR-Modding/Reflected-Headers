#include "MovieScene3DPathSection.h"

UMovieScene3DPathSection::UMovieScene3DPathSection() {
    this->FrontAxisEnum = (MovieScene3DPathSection_Axis)16;
    this->UpAxisEnum = (MovieScene3DPathSection_Axis)16;
    this->bFollow = true;
    this->bReverse = false;
    this->bForceUpright = false;
}


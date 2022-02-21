#include "MovieScene3DAttachSection.h"

UMovieScene3DAttachSection::UMovieScene3DAttachSection() {
    this->AttachmentLocationRule = (EAttachmentRule)128;
    this->AttachmentRotationRule = (EAttachmentRule)128;
    this->AttachmentScaleRule = (EAttachmentRule)128;
    this->DetachmentLocationRule = (EDetachmentRule)128;
    this->DetachmentRotationRule = (EDetachmentRule)128;
    this->DetachmentScaleRule = (EDetachmentRule)128;
}


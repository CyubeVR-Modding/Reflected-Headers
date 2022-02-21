#include "DatasmithImportOptions.h"

UDatasmithImportOptions::UDatasmithImportOptions() {
    this->SearchPackagePolicy = (EDatasmithImportSearchPackagePolicy)128;
    this->MaterialConflictPolicy = (EDatasmithImportAssetConflictPolicy)128;
    this->TextureConflictPolicy = (EDatasmithImportAssetConflictPolicy)128;
    this->StaticMeshActorImportPolicy = (EDatasmithImportActorPolicy)128;
    this->LightImportPolicy = (EDatasmithImportActorPolicy)128;
    this->CameraImportPolicy = (EDatasmithImportActorPolicy)128;
    this->OtherActorImportPolicy = (EDatasmithImportActorPolicy)128;
    this->MaterialQuality = (EDatasmithImportMaterialQuality)128;
}


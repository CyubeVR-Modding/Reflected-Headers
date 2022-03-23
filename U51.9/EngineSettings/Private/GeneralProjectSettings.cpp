#include "GeneralProjectSettings.h"

UGeneralProjectSettings::UGeneralProjectSettings() {
    this->CompanyName = TEXT("Stonebrick Studios UG");
    this->CopyrightNotice = TEXT("Copyright 2016-2017 Stonebrick Studios UG. All Rights Reserved.");
    this->Homepage = TEXT("www.stonebrickstudios.com");
    this->ProjectName = TEXT("cyubeVR");
    this->ProjectVersion = TEXT("0.0.1");
    this->SupportContact = TEXT("support@stonebrickstudios.com");
    this->ProjectDisplayedTitle = FText::FromString(TEXT("cyubeVR"));
    this->ProjectDebugTitleInfo = FText::FromString(TEXT("- Developer Build"));
    this->bShouldWindowPreserveAspectRatio = true;
    this->bUseBorderlessWindow = false;
    this->bStartInVR = true;
    this->bAllowWindowResize = true;
    this->bAllowClose = true;
    this->bAllowMaximize = true;
    this->bAllowMinimize = true;
}


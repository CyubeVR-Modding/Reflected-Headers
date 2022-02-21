#include "DLSSOverrideSettings.h"

UDLSSOverrideSettings::UDLSSOverrideSettings() {
    this->EnableDLSSInEditorViewportsOverride = (EDLSSSettingOverride)224;
    this->EnableScreenpercentageManipulationInDLSSEditorViewportsOverride = (EDLSSSettingOverride)224;
    this->EnableDLSSInPlayInEditorViewportsOverride = (EDLSSSettingOverride)224;
    this->bShowDLSSIncompatiblePluginsToolsWarnings = true;
    this->ShowDLSSSDebugOnScreenMessages = (EDLSSSettingOverride)224;
}


// Copyright 2024 Udon-Tobira, All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FBinaryFileUtilsModule: public IModuleInterface {
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

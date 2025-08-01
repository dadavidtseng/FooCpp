﻿//----------------------------------------------------------------------------------------------------
// Event.cpp
//----------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------
#include "Event.h"
#include "ManualPublicClass.h"

#define LOCTEXT_NAMESPACE "FEventModule"

//----------------------------------------------------------------------------------------------------
void FEventModule::StartupModule()
{
	FManualPublicClass Obj;
	Obj.DoSomething();
}

//----------------------------------------------------------------------------------------------------
void FEventModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FEventModule, Event)

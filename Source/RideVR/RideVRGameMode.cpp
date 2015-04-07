

#include "RideVR.h"
#include "RideVRGameMode.h"
#include "RideVRPlayerController.h"

ARideVRGameMode::ARideVRGameMode(const class FObjectInitializer& PCIP)
	: Super(PCIP)
{
	PlayerControllerClass = ARideVRPlayerController::StaticClass();
}



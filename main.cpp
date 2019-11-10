#include "cwmods/cwmods.h"

class BrightNightWrapper : GenericMod {
	virtual void Initialize() override {
		LoadLibraryA("Mods/BrightNight.cwmod");
	}
};

EXPORT BrightNightWrapper* MakeMod() {
	return new BrightNightWrapper();
}

#pragma once

#include "BUILD_ORDER.h"

class VulcanPhysicalDevice {
public:
	~VulcanPhysicalDevice();
	static VulcanPhysicalDevice* GetPhysicalDevice();
private:
	VulcanPhysicalDevice();
};
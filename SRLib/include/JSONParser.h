// SRLib.h : Include file for standard system include files,
// or project specific include files.

#pragma once
#include <fstream>
#include "json.hpp"
#include <iostream>

namespace SRLib
{
	namespace Parser
	{
		std::string getStringFromJsonFile(std::string path, std::string parameter);
		int getIntFromJsonFile(std::string path, std::string parameter);
	}
}

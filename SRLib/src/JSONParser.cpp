#include "JSONParser.h"
using json = nlohmann::json;
namespace SRLib
{
	namespace Parser
	{
		std::string getStringFromJsonFile(const std::string path, std::string parameter)
		{
			std::ifstream i(path);
			json j;
			j << i;
			return j[parameter];
		}

		int getIntFromJsonFile(const std::string path, std::string parameter)
		{
			std::ifstream i(path);
			json j;
			j << i;
			return j[parameter];
		}
	}
}

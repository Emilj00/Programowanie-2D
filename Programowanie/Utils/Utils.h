#pragma once

#include <string>

class Utils {

public:
	class Console {

	public:
		static double GetDoubleFromUser(std::string message);
		static int GetIntFromUser(std::string message);
		static std::string GetStringFromUser(std::string message);

		static void PrintHeader(std::string message);
	};
};
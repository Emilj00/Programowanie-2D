#pragma once

#include <string>


static class Utills {

public:
	static class Console {

	public:
		static double GetDoubleFromUser(std::string message);
		static int GetIntFromUser(std::string message);
		static std::string GetStringFromUser(std::string message);

		static void PrintHeader(std::string message);
	};
};
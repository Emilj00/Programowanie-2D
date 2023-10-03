#pragma once

static class Utills {

public:
	static class Console {

	public:
		static double GetDoubleFromUser(std::string text);
		static int GetIntFromUser(std::string message);
		static std::string GetStringFromUser(std::string message);

		static void PrintHeader(std::string message);
	};
};
#pragma once
#include <string>
#include <vector>
#include "libxl.h"

using namespace libxl;

struct Student
{
	int id;
	std::wstring name;
	std::vector<float> scoreList;
};

struct Score
{
	std::wstring nickname;
	float scoreTemporary;
	int matchID = 0;
};

int createStudentListSample(const TCHAR* filepath, int numScore);

int importScore(const TCHAR* filepath, int numScore);

int matchScore(std::vector<Student>& studentList, std::vector<std::vector<Score>>& scoreList, std::vector<int>& scoreListError);

int exportScore(std::vector<Student>& studentList, std::vector<int>& scoreListError, libxl::Sheet* sheet, int numScore);

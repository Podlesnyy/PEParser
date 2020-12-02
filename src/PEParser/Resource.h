#pragma once

#include <Windows.h>
#include <vector>
#include <string>
#include <iostream>
#include <memory>

struct Resource
{
	LPCWSTR lpType;
	LPWSTR lpName;
	LPVOID lpData;
	DWORD dwSize;

	Resource(LPCWSTR lpType, LPWSTR lpName, LPVOID lpData, DWORD dwSize);
	Resource(const Resource& src);
	~Resource();
	Resource& operator=(const Resource& rhs);
};
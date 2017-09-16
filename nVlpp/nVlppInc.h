#pragma once

#ifdef _DEBUG
#pragma comment(lib,"nVlppd.lib")
#pragma message("Automatically linking with nbasicd debug lib")
#else
#pragma comment(lib,"nVlpp.lib")
#pragma message("Automatically linking with nbasic release lib")
#endif

#include "vlpp.h"

#pragma once
#include <string>

#define DCONSOLE_SERVER "/tmp/dconsole-server.socket"
#define MAX_MESSAGE_SIZE 256

#define FAIL_CODE 1


#ifdef DEBUG
#include<iostream>
#define debug_helper(x) std::cerr << x << std::endl;
#else
#define debug_helper(x) \
    while (0)           \
    {                   \
    }
#endif

struct Message
{
    char tab_name[16];
    char data[128];
};

void exit_helper(std::string message, int code);

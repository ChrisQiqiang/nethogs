#include <sys/time.h>
#include <cassert>
#include <csignal>
#include <cstdarg>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <getopt.h>
#include <iostream>
#include <string>
#include <unistd.h>


long long getmstime(timeval *in)
{
    timeval tv;
    long long tm;
    if(in==NULL)
      gettimeofday(& tv, NULL);
    else
      tv = *in;  
    tm = (long long)(tv.tv_sec *1000 + (tv.tv_usec + 500) /1000);
    return tm;
}
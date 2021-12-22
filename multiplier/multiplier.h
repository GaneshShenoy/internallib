#pragma once

#ifdef WIN32
  #define MULTIPLIER_EXPORT __declspec(dllexport) 
#else
  #define MULTIPLIER_EXPORT  
#endif

MULTIPLIER_EXPORT int multiplyNum(int a, int b);
#ifndef MU_PARSER_TEMPLATE_MAGIC_H
#define MU_PARSER_TEMPLATE_MAGIC_H

#include <cmath>
#include "muParserError.h"
  
{
  
    //-----------------------------------------------------------------------------------------------
    //
    // Compile time type detection
    //
    //-----------------------------------------------------------------------------------------------
    
  /** \brief A class singling out integer types at compile time using 
             template meta programming.
  */ 
  template < typename T > 
  {
    
    {
      return false;
    }
   
  
  {
    
    {
      return true;
    }
   
  
  {
    
    {
      return true;
    }
   
  
  {
    
    {
      return true;
    }
   
  
  {
    
    {
      return true;
    }
   
  
  {
    
    {
      return true;
    }
   
  
  {
    
    {
      return true;
    }
   
  
  {
    
    {
      return true;
    }
   
  
  {
    
    {
      return true;
    }
   
  
    //-----------------------------------------------------------------------------------------------
    //
    // Standard math functions with dummy overload for integer types
    //
    //-----------------------------------------------------------------------------------------------
    
  /** \brief A template class for providing wrappers for essential math functions.

    This template is spezialized for several types in order to provide a unified interface
    for parser internal math function calls regardless of the data type.
  */ 
  template < typename T > 
  {
    
    {
      return sin (v);
    }
     
    {
      return cos (v);
    }
    
    {
      return tan (v);
    }
    
    {
      return asin (v);
    }
    
    {
      return acos (v);
    }
    
    {
      return atan (v);
    }
    
    {
      return atan2 (v1, v2);
    }
    
    {
      return sinh (v);
    }
    
    {
      return cosh (v);
    }
    
    {
      return tanh (v);
    }
    
    {
      return log (v + sqrt (v * v + 1));
    }
    
    {
      return log (v + sqrt (v * v - 1));
    }
    
    {
      return ((T) 0.5 * log ((1 + v) / (1 - v)));
    }
    
    {
      return log (v);
    }
    
    {
      return log (v) / log ((T) 2);
    }                           // Logarithm base 2
    static T Log10 (T v)
    {
      return log10 (v);
    }                           // Logarithm base 10
    static T Exp (T v)
    {
      return exp (v);
    }
    
    {
      return (v >= 0) ? v : -v;
    }
    
    {
      return sqrt (v);
    }
    
    {
      return floor (v + (T) 0.5);
    }
    
    {
      return (T) ((v < 0) ? -1 : (v > 0) ? 1 : 0);
    }
    
    {
      return std::pow (v1, v2);
    }
  



#endif  /* 
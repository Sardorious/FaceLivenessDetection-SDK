/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.9
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#define SWIGCSHARP
#define SWIG_DIRECTORS


#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__)) 
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__)) 
# else
#   define SWIGUNUSED 
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif 
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED 
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif 
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif



#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/* Support for throwing C# exceptions from C/C++. There are two types: 
 * Exceptions that take a message and ArgumentExceptions that take a message and a parameter name. */
typedef enum {
  SWIG_CSharpApplicationException,
  SWIG_CSharpArithmeticException,
  SWIG_CSharpDivideByZeroException,
  SWIG_CSharpIndexOutOfRangeException,
  SWIG_CSharpInvalidCastException,
  SWIG_CSharpInvalidOperationException,
  SWIG_CSharpIOException,
  SWIG_CSharpNullReferenceException,
  SWIG_CSharpOutOfMemoryException,
  SWIG_CSharpOverflowException,
  SWIG_CSharpSystemException
} SWIG_CSharpExceptionCodes;

typedef enum {
  SWIG_CSharpArgumentException,
  SWIG_CSharpArgumentNullException,
  SWIG_CSharpArgumentOutOfRangeException
} SWIG_CSharpExceptionArgumentCodes;

typedef void (SWIGSTDCALL* SWIG_CSharpExceptionCallback_t)(const char *);
typedef void (SWIGSTDCALL* SWIG_CSharpExceptionArgumentCallback_t)(const char *, const char *);

typedef struct {
  SWIG_CSharpExceptionCodes code;
  SWIG_CSharpExceptionCallback_t callback;
} SWIG_CSharpException_t;

typedef struct {
  SWIG_CSharpExceptionArgumentCodes code;
  SWIG_CSharpExceptionArgumentCallback_t callback;
} SWIG_CSharpExceptionArgument_t;

static SWIG_CSharpException_t SWIG_csharp_exceptions[] = {
  { SWIG_CSharpApplicationException, NULL },
  { SWIG_CSharpArithmeticException, NULL },
  { SWIG_CSharpDivideByZeroException, NULL },
  { SWIG_CSharpIndexOutOfRangeException, NULL },
  { SWIG_CSharpInvalidCastException, NULL },
  { SWIG_CSharpInvalidOperationException, NULL },
  { SWIG_CSharpIOException, NULL },
  { SWIG_CSharpNullReferenceException, NULL },
  { SWIG_CSharpOutOfMemoryException, NULL },
  { SWIG_CSharpOverflowException, NULL },
  { SWIG_CSharpSystemException, NULL }
};

static SWIG_CSharpExceptionArgument_t SWIG_csharp_exceptions_argument[] = {
  { SWIG_CSharpArgumentException, NULL },
  { SWIG_CSharpArgumentNullException, NULL },
  { SWIG_CSharpArgumentOutOfRangeException, NULL }
};

static void SWIGUNUSED SWIG_CSharpSetPendingException(SWIG_CSharpExceptionCodes code, const char *msg) {
  SWIG_CSharpExceptionCallback_t callback = SWIG_csharp_exceptions[SWIG_CSharpApplicationException].callback;
  if ((size_t)code < sizeof(SWIG_csharp_exceptions)/sizeof(SWIG_CSharpException_t)) {
    callback = SWIG_csharp_exceptions[code].callback;
  }
  callback(msg);
}

static void SWIGUNUSED SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpExceptionArgumentCodes code, const char *msg, const char *param_name) {
  SWIG_CSharpExceptionArgumentCallback_t callback = SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentException].callback;
  if ((size_t)code < sizeof(SWIG_csharp_exceptions_argument)/sizeof(SWIG_CSharpExceptionArgument_t)) {
    callback = SWIG_csharp_exceptions_argument[code].callback;
  }
  callback(msg, param_name);
}


#ifdef __cplusplus
extern "C" 
#endif
SWIGEXPORT void SWIGSTDCALL SWIGRegisterExceptionCallbacks_FaceLivenessDetectionSDK(
                                                SWIG_CSharpExceptionCallback_t applicationCallback,
                                                SWIG_CSharpExceptionCallback_t arithmeticCallback,
                                                SWIG_CSharpExceptionCallback_t divideByZeroCallback, 
                                                SWIG_CSharpExceptionCallback_t indexOutOfRangeCallback, 
                                                SWIG_CSharpExceptionCallback_t invalidCastCallback,
                                                SWIG_CSharpExceptionCallback_t invalidOperationCallback,
                                                SWIG_CSharpExceptionCallback_t ioCallback,
                                                SWIG_CSharpExceptionCallback_t nullReferenceCallback,
                                                SWIG_CSharpExceptionCallback_t outOfMemoryCallback, 
                                                SWIG_CSharpExceptionCallback_t overflowCallback, 
                                                SWIG_CSharpExceptionCallback_t systemCallback) {
  SWIG_csharp_exceptions[SWIG_CSharpApplicationException].callback = applicationCallback;
  SWIG_csharp_exceptions[SWIG_CSharpArithmeticException].callback = arithmeticCallback;
  SWIG_csharp_exceptions[SWIG_CSharpDivideByZeroException].callback = divideByZeroCallback;
  SWIG_csharp_exceptions[SWIG_CSharpIndexOutOfRangeException].callback = indexOutOfRangeCallback;
  SWIG_csharp_exceptions[SWIG_CSharpInvalidCastException].callback = invalidCastCallback;
  SWIG_csharp_exceptions[SWIG_CSharpInvalidOperationException].callback = invalidOperationCallback;
  SWIG_csharp_exceptions[SWIG_CSharpIOException].callback = ioCallback;
  SWIG_csharp_exceptions[SWIG_CSharpNullReferenceException].callback = nullReferenceCallback;
  SWIG_csharp_exceptions[SWIG_CSharpOutOfMemoryException].callback = outOfMemoryCallback;
  SWIG_csharp_exceptions[SWIG_CSharpOverflowException].callback = overflowCallback;
  SWIG_csharp_exceptions[SWIG_CSharpSystemException].callback = systemCallback;
}

#ifdef __cplusplus
extern "C" 
#endif
SWIGEXPORT void SWIGSTDCALL SWIGRegisterExceptionArgumentCallbacks_FaceLivenessDetectionSDK(
                                                SWIG_CSharpExceptionArgumentCallback_t argumentCallback,
                                                SWIG_CSharpExceptionArgumentCallback_t argumentNullCallback,
                                                SWIG_CSharpExceptionArgumentCallback_t argumentOutOfRangeCallback) {
  SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentException].callback = argumentCallback;
  SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentNullException].callback = argumentNullCallback;
  SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentOutOfRangeException].callback = argumentOutOfRangeCallback;
}


/* Callback for returning strings to C# without leaking memory */
typedef char * (SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char *);
static SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback = NULL;


#ifdef __cplusplus
extern "C" 
#endif
SWIGEXPORT void SWIGSTDCALL SWIGRegisterStringCallback_FaceLivenessDetectionSDK(SWIG_CSharpStringHelperCallback callback) {
  SWIG_csharp_string_callback = callback;
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, msg, ""); return nullreturn; } else

/* -----------------------------------------------------------------------------
 * director.swg
 *
 * This file contains support for director classes so that C# proxy 
 * methods can be called from C++.
 * ----------------------------------------------------------------------------- */

#ifdef __cplusplus

#if defined(DEBUG_DIRECTOR_OWNED)
#include <iostream>
#endif
#include <string>

namespace Swig {
  /* Director base class - not currently used in C# directors */
  class Director {
  };

  /* Base class for director exceptions */
  class DirectorException {
  protected:
    std::string swig_msg;

  public:
    DirectorException(const char* msg) : swig_msg(msg) {
    }
    DirectorException(const std::string &msg) : swig_msg(msg) {
    }
    const std::string& what() const {
      return swig_msg;
    }
    virtual ~DirectorException() {
    }
  };

  /* Pure virtual method exception */
  class DirectorPureVirtualException : public Swig::DirectorException {
  public:
    DirectorPureVirtualException(const char* msg) : DirectorException(std::string("Attempt to invoke pure virtual method ") + msg) {
    }
  };
}

#endif /* __cplusplus */



#include <stdint.h>		// Use the C99 official header


#include <string>


#include "FLD-SDK-API-PUBLIC.h"



/* ---------------------------------------------------
 * C++ director class methods
 * --------------------------------------------------- */

#include "FLD-SDK-API-PUBLIC-SWIG_cscharp.h"


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT int SWIGSTDCALL CSharp_FLD_SDK_VERSION_MAJOR_get() {
  int jresult ;
  int result;
  
  result = (int)(0);
  jresult = result; 
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_FLD_SDK_VERSION_MINOR_get() {
  int jresult ;
  int result;
  
  result = (int)(3);
  jresult = result; 
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_FLD_SDK_VERSION_MICRO_get() {
  int jresult ;
  int result;
  
  result = (int)(0);
  jresult = result; 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_new_FldSdkResult__SWIG_0() {
  void * jresult ;
  FaceLiveness::FldSdkResult *result = 0 ;
  
  result = (FaceLiveness::FldSdkResult *)new FaceLiveness::FldSdkResult();
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_new_FldSdkResult__SWIG_1(int jarg1, char * jarg2, char * jarg3, unsigned long jarg4) {
  void * jresult ;
  int arg1 ;
  char *arg2 = (char *) 0 ;
  char *arg3 = (char *) 0 ;
  size_t arg4 ;
  FaceLiveness::FldSdkResult *result = 0 ;
  
  arg1 = (int)jarg1; 
  arg2 = (char *)jarg2; 
  arg3 = (char *)jarg3; 
  arg4 = (size_t)jarg4; 
  result = (FaceLiveness::FldSdkResult *)new FaceLiveness::FldSdkResult(arg1,(char const *)arg2,(char const *)arg3,arg4);
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_new_FldSdkResult__SWIG_2(int jarg1, char * jarg2, char * jarg3) {
  void * jresult ;
  int arg1 ;
  char *arg2 = (char *) 0 ;
  char *arg3 = (char *) 0 ;
  FaceLiveness::FldSdkResult *result = 0 ;
  
  arg1 = (int)jarg1; 
  arg2 = (char *)jarg2; 
  arg3 = (char *)jarg3; 
  result = (FaceLiveness::FldSdkResult *)new FaceLiveness::FldSdkResult(arg1,(char const *)arg2,(char const *)arg3);
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_new_FldSdkResult__SWIG_3(void * jarg1) {
  void * jresult ;
  FaceLiveness::FldSdkResult *arg1 = 0 ;
  FaceLiveness::FldSdkResult *result = 0 ;
  
  arg1 = (FaceLiveness::FldSdkResult *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "FaceLiveness::FldSdkResult const & type is null", 0);
    return 0;
  } 
  result = (FaceLiveness::FldSdkResult *)new FaceLiveness::FldSdkResult((FaceLiveness::FldSdkResult const &)*arg1);
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_delete_FldSdkResult(void * jarg1) {
  FaceLiveness::FldSdkResult *arg1 = (FaceLiveness::FldSdkResult *) 0 ;
  
  arg1 = (FaceLiveness::FldSdkResult *)jarg1; 
  delete arg1;
}


SWIGEXPORT int SWIGSTDCALL CSharp_FldSdkResult_code(void * jarg1) {
  int jresult ;
  FaceLiveness::FldSdkResult *arg1 = (FaceLiveness::FldSdkResult *) 0 ;
  int result;
  
  arg1 = (FaceLiveness::FldSdkResult *)jarg1; 
  result = (int)((FaceLiveness::FldSdkResult const *)arg1)->code();
  jresult = result; 
  return jresult;
}


SWIGEXPORT char * SWIGSTDCALL CSharp_FldSdkResult_phrase(void * jarg1) {
  char * jresult ;
  FaceLiveness::FldSdkResult *arg1 = (FaceLiveness::FldSdkResult *) 0 ;
  char *result = 0 ;
  
  arg1 = (FaceLiveness::FldSdkResult *)jarg1; 
  result = (char *)((FaceLiveness::FldSdkResult const *)arg1)->phrase();
  jresult = SWIG_csharp_string_callback((const char *)result); 
  return jresult;
}


SWIGEXPORT char * SWIGSTDCALL CSharp_FldSdkResult_json(void * jarg1) {
  char * jresult ;
  FaceLiveness::FldSdkResult *arg1 = (FaceLiveness::FldSdkResult *) 0 ;
  char *result = 0 ;
  
  arg1 = (FaceLiveness::FldSdkResult *)jarg1; 
  result = (char *)((FaceLiveness::FldSdkResult const *)arg1)->json();
  jresult = SWIG_csharp_string_callback((const char *)result); 
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_FldSdkResult_numFaces(void * jarg1) {
  unsigned long jresult ;
  FaceLiveness::FldSdkResult *arg1 = (FaceLiveness::FldSdkResult *) 0 ;
  size_t result;
  
  arg1 = (FaceLiveness::FldSdkResult *)jarg1; 
  result = ((FaceLiveness::FldSdkResult const *)arg1)->numFaces();
  jresult = (unsigned long)result; 
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_FldSdkResult_isOK(void * jarg1) {
  unsigned int jresult ;
  FaceLiveness::FldSdkResult *arg1 = (FaceLiveness::FldSdkResult *) 0 ;
  bool result;
  
  arg1 = (FaceLiveness::FldSdkResult *)jarg1; 
  result = (bool)((FaceLiveness::FldSdkResult const *)arg1)->isOK();
  jresult = result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_delete_FldSdkParallelDeliveryCallback(void * jarg1) {
  FaceLiveness::FldSdkParallelDeliveryCallback *arg1 = (FaceLiveness::FldSdkParallelDeliveryCallback *) 0 ;
  
  arg1 = (FaceLiveness::FldSdkParallelDeliveryCallback *)jarg1; 
  delete arg1;
}


SWIGEXPORT void SWIGSTDCALL CSharp_FldSdkParallelDeliveryCallback_onNewResult(void * jarg1, void * jarg2) {
  FaceLiveness::FldSdkParallelDeliveryCallback *arg1 = (FaceLiveness::FldSdkParallelDeliveryCallback *) 0 ;
  FaceLiveness::FldSdkResult *arg2 = (FaceLiveness::FldSdkResult *) 0 ;
  
  arg1 = (FaceLiveness::FldSdkParallelDeliveryCallback *)jarg1; 
  arg2 = (FaceLiveness::FldSdkResult *)jarg2; 
  ((FaceLiveness::FldSdkParallelDeliveryCallback const *)arg1)->onNewResult((FaceLiveness::FldSdkResult const *)arg2);
}


SWIGEXPORT void * SWIGSTDCALL CSharp_FldSdkEngine_init__SWIG_0(char * jarg1, void * jarg2) {
  void * jresult ;
  char *arg1 = (char *) 0 ;
  FaceLiveness::FldSdkParallelDeliveryCallback *arg2 = (FaceLiveness::FldSdkParallelDeliveryCallback *) 0 ;
  FaceLiveness::FldSdkResult result;
  
  arg1 = (char *)jarg1; 
  arg2 = (FaceLiveness::FldSdkParallelDeliveryCallback *)jarg2; 
  result = FaceLiveness::FldSdkEngine::init((char const *)arg1,(FaceLiveness::FldSdkParallelDeliveryCallback const *)arg2);
  jresult = new FaceLiveness::FldSdkResult((const FaceLiveness::FldSdkResult &)result); 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_FldSdkEngine_init__SWIG_1(char * jarg1) {
  void * jresult ;
  char *arg1 = (char *) 0 ;
  FaceLiveness::FldSdkResult result;
  
  arg1 = (char *)jarg1; 
  result = FaceLiveness::FldSdkEngine::init((char const *)arg1);
  jresult = new FaceLiveness::FldSdkResult((const FaceLiveness::FldSdkResult &)result); 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_FldSdkEngine_init__SWIG_2() {
  void * jresult ;
  FaceLiveness::FldSdkResult result;
  
  result = FaceLiveness::FldSdkEngine::init();
  jresult = new FaceLiveness::FldSdkResult((const FaceLiveness::FldSdkResult &)result); 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_FldSdkEngine_deInit() {
  void * jresult ;
  FaceLiveness::FldSdkResult result;
  
  result = FaceLiveness::FldSdkEngine::deInit();
  jresult = new FaceLiveness::FldSdkResult((const FaceLiveness::FldSdkResult &)result); 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_FldSdkEngine_process__SWIG_0(int jarg1, void * jarg2, unsigned long jarg3, unsigned long jarg4, unsigned long jarg5, int jarg6) {
  void * jresult ;
  FaceLiveness::FLD_SDK_IMAGE_TYPE arg1 ;
  void *arg2 = (void *) 0 ;
  size_t arg3 ;
  size_t arg4 ;
  size_t arg5 ;
  int arg6 ;
  FaceLiveness::FldSdkResult result;
  
  arg1 = (FaceLiveness::FLD_SDK_IMAGE_TYPE)jarg1; 
  arg2 = jarg2; 
  arg3 = (size_t)jarg3; 
  arg4 = (size_t)jarg4; 
  arg5 = (size_t)jarg5; 
  arg6 = (int)jarg6; 
  result = FaceLiveness::FldSdkEngine::process(arg1,(void const *)arg2,arg3,arg4,arg5,arg6);
  jresult = new FaceLiveness::FldSdkResult((const FaceLiveness::FldSdkResult &)result); 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_FldSdkEngine_process__SWIG_1(int jarg1, void * jarg2, unsigned long jarg3, unsigned long jarg4, unsigned long jarg5) {
  void * jresult ;
  FaceLiveness::FLD_SDK_IMAGE_TYPE arg1 ;
  void *arg2 = (void *) 0 ;
  size_t arg3 ;
  size_t arg4 ;
  size_t arg5 ;
  FaceLiveness::FldSdkResult result;
  
  arg1 = (FaceLiveness::FLD_SDK_IMAGE_TYPE)jarg1; 
  arg2 = jarg2; 
  arg3 = (size_t)jarg3; 
  arg4 = (size_t)jarg4; 
  arg5 = (size_t)jarg5; 
  result = FaceLiveness::FldSdkEngine::process(arg1,(void const *)arg2,arg3,arg4,arg5);
  jresult = new FaceLiveness::FldSdkResult((const FaceLiveness::FldSdkResult &)result); 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_FldSdkEngine_process__SWIG_2(int jarg1, void * jarg2, unsigned long jarg3, unsigned long jarg4) {
  void * jresult ;
  FaceLiveness::FLD_SDK_IMAGE_TYPE arg1 ;
  void *arg2 = (void *) 0 ;
  size_t arg3 ;
  size_t arg4 ;
  FaceLiveness::FldSdkResult result;
  
  arg1 = (FaceLiveness::FLD_SDK_IMAGE_TYPE)jarg1; 
  arg2 = jarg2; 
  arg3 = (size_t)jarg3; 
  arg4 = (size_t)jarg4; 
  result = FaceLiveness::FldSdkEngine::process(arg1,(void const *)arg2,arg3,arg4);
  jresult = new FaceLiveness::FldSdkResult((const FaceLiveness::FldSdkResult &)result); 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_FldSdkEngine_process__SWIG_3(int jarg1, void * jarg2, void * jarg3, void * jarg4, unsigned long jarg5, unsigned long jarg6, unsigned long jarg7, unsigned long jarg8, unsigned long jarg9, unsigned long jarg10, int jarg11) {
  void * jresult ;
  FaceLiveness::FLD_SDK_IMAGE_TYPE arg1 ;
  void *arg2 = (void *) 0 ;
  void *arg3 = (void *) 0 ;
  void *arg4 = (void *) 0 ;
  size_t arg5 ;
  size_t arg6 ;
  size_t arg7 ;
  size_t arg8 ;
  size_t arg9 ;
  size_t arg10 ;
  int arg11 ;
  FaceLiveness::FldSdkResult result;
  
  arg1 = (FaceLiveness::FLD_SDK_IMAGE_TYPE)jarg1; 
  arg2 = jarg2; 
  arg3 = jarg3; 
  arg4 = jarg4; 
  arg5 = (size_t)jarg5; 
  arg6 = (size_t)jarg6; 
  arg7 = (size_t)jarg7; 
  arg8 = (size_t)jarg8; 
  arg9 = (size_t)jarg9; 
  arg10 = (size_t)jarg10; 
  arg11 = (int)jarg11; 
  result = FaceLiveness::FldSdkEngine::process(arg1,(void const *)arg2,(void const *)arg3,(void const *)arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11);
  jresult = new FaceLiveness::FldSdkResult((const FaceLiveness::FldSdkResult &)result); 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_FldSdkEngine_process__SWIG_4(int jarg1, void * jarg2, void * jarg3, void * jarg4, unsigned long jarg5, unsigned long jarg6, unsigned long jarg7, unsigned long jarg8, unsigned long jarg9, unsigned long jarg10) {
  void * jresult ;
  FaceLiveness::FLD_SDK_IMAGE_TYPE arg1 ;
  void *arg2 = (void *) 0 ;
  void *arg3 = (void *) 0 ;
  void *arg4 = (void *) 0 ;
  size_t arg5 ;
  size_t arg6 ;
  size_t arg7 ;
  size_t arg8 ;
  size_t arg9 ;
  size_t arg10 ;
  FaceLiveness::FldSdkResult result;
  
  arg1 = (FaceLiveness::FLD_SDK_IMAGE_TYPE)jarg1; 
  arg2 = jarg2; 
  arg3 = jarg3; 
  arg4 = jarg4; 
  arg5 = (size_t)jarg5; 
  arg6 = (size_t)jarg6; 
  arg7 = (size_t)jarg7; 
  arg8 = (size_t)jarg8; 
  arg9 = (size_t)jarg9; 
  arg10 = (size_t)jarg10; 
  result = FaceLiveness::FldSdkEngine::process(arg1,(void const *)arg2,(void const *)arg3,(void const *)arg4,arg5,arg6,arg7,arg8,arg9,arg10);
  jresult = new FaceLiveness::FldSdkResult((const FaceLiveness::FldSdkResult &)result); 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_FldSdkEngine_process__SWIG_5(int jarg1, void * jarg2, void * jarg3, void * jarg4, unsigned long jarg5, unsigned long jarg6, unsigned long jarg7, unsigned long jarg8, unsigned long jarg9) {
  void * jresult ;
  FaceLiveness::FLD_SDK_IMAGE_TYPE arg1 ;
  void *arg2 = (void *) 0 ;
  void *arg3 = (void *) 0 ;
  void *arg4 = (void *) 0 ;
  size_t arg5 ;
  size_t arg6 ;
  size_t arg7 ;
  size_t arg8 ;
  size_t arg9 ;
  FaceLiveness::FldSdkResult result;
  
  arg1 = (FaceLiveness::FLD_SDK_IMAGE_TYPE)jarg1; 
  arg2 = jarg2; 
  arg3 = jarg3; 
  arg4 = jarg4; 
  arg5 = (size_t)jarg5; 
  arg6 = (size_t)jarg6; 
  arg7 = (size_t)jarg7; 
  arg8 = (size_t)jarg8; 
  arg9 = (size_t)jarg9; 
  result = FaceLiveness::FldSdkEngine::process(arg1,(void const *)arg2,(void const *)arg3,(void const *)arg4,arg5,arg6,arg7,arg8,arg9);
  jresult = new FaceLiveness::FldSdkResult((const FaceLiveness::FldSdkResult &)result); 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_FldSdkEngine_requestRuntimeLicenseKey__SWIG_0(unsigned int jarg1) {
  void * jresult ;
  bool *arg1 = 0 ;
  bool temp1 ;
  FaceLiveness::FldSdkResult result;
  
  temp1 = jarg1 ? true : false; 
  arg1 = &temp1; 
  result = FaceLiveness::FldSdkEngine::requestRuntimeLicenseKey((bool const &)*arg1);
  jresult = new FaceLiveness::FldSdkResult((const FaceLiveness::FldSdkResult &)result); 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_FldSdkEngine_requestRuntimeLicenseKey__SWIG_1() {
  void * jresult ;
  FaceLiveness::FldSdkResult result;
  
  result = FaceLiveness::FldSdkEngine::requestRuntimeLicenseKey();
  jresult = new FaceLiveness::FldSdkResult((const FaceLiveness::FldSdkResult &)result); 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_FldSdkEngine_warmUp(int jarg1) {
  void * jresult ;
  FaceLiveness::FLD_SDK_IMAGE_TYPE arg1 ;
  FaceLiveness::FldSdkResult result;
  
  arg1 = (FaceLiveness::FLD_SDK_IMAGE_TYPE)jarg1; 
  result = FaceLiveness::FldSdkEngine::warmUp(arg1);
  jresult = new FaceLiveness::FldSdkResult((const FaceLiveness::FldSdkResult &)result); 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_delete_FldSdkEngine(void * jarg1) {
  FaceLiveness::FldSdkEngine *arg1 = (FaceLiveness::FldSdkEngine *) 0 ;
  
  arg1 = (FaceLiveness::FldSdkEngine *)jarg1; 
  delete arg1;
}


#ifdef __cplusplus
}
#endif


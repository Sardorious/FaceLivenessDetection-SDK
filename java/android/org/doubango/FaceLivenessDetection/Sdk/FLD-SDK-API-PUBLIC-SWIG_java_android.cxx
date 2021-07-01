/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.9
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#define SWIGJAVA
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



/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  jenv->ExceptionClear();
  excep = jenv->FindClass(except_ptr->java_exception);
  if (excep)
    jenv->ThrowNew(excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else

/* -----------------------------------------------------------------------------
 * director.swg
 *
 * This file contains support for director classes that proxy
 * method calls from C++ to Java extensions.
 * ----------------------------------------------------------------------------- */

#ifdef __cplusplus

#if defined(DEBUG_DIRECTOR_OWNED)
#include <iostream>
#endif

namespace Swig {
  /* Java object wrapper */
  class JObjectWrapper {
  public:
    JObjectWrapper() : jthis_(NULL), weak_global_(true) {
    }

    ~JObjectWrapper() {
      jthis_ = NULL;
      weak_global_ = true;
    }

    bool set(JNIEnv *jenv, jobject jobj, bool mem_own, bool weak_global) {
      if (!jthis_) {
        weak_global_ = weak_global || !mem_own; // hold as weak global if explicitly requested or not owned
        if (jobj)
          jthis_ = weak_global_ ? jenv->NewWeakGlobalRef(jobj) : jenv->NewGlobalRef(jobj);
#if defined(DEBUG_DIRECTOR_OWNED)
        std::cout << "JObjectWrapper::set(" << jobj << ", " << (weak_global ? "weak_global" : "global_ref") << ") -> " << jthis_ << std::endl;
#endif
        return true;
      } else {
#if defined(DEBUG_DIRECTOR_OWNED)
        std::cout << "JObjectWrapper::set(" << jobj << ", " << (weak_global ? "weak_global" : "global_ref") << ") -> already set" << std::endl;
#endif
        return false;
      }
    }

    jobject get(JNIEnv *jenv) const {
#if defined(DEBUG_DIRECTOR_OWNED)
      std::cout << "JObjectWrapper::get(";
      if (jthis_)
        std::cout << jthis_;
      else
        std::cout << "null";
      std::cout << ") -> return new local ref" << std::endl;
#endif
      return (jthis_ ? jenv->NewLocalRef(jthis_) : jthis_);
    }

    void release(JNIEnv *jenv) {
#if defined(DEBUG_DIRECTOR_OWNED)
      std::cout << "JObjectWrapper::release(" << jthis_ << "): " << (weak_global_ ? "weak global ref" : "global ref") << std::endl;
#endif
      if (jthis_) {
        if (weak_global_) {
          if (jenv->IsSameObject(jthis_, NULL) == JNI_FALSE)
            jenv->DeleteWeakGlobalRef((jweak)jthis_);
        } else
          jenv->DeleteGlobalRef(jthis_);
      }

      jthis_ = NULL;
      weak_global_ = true;
    }

    /* Only call peek if you know what you are doing wrt to weak/global references */
    jobject peek() {
      return jthis_;
    }

    /* Java proxy releases ownership of C++ object, C++ object is now
       responsible for destruction (creates NewGlobalRef to pin Java
       proxy) */
    void java_change_ownership(JNIEnv *jenv, jobject jself, bool take_or_release) {
      if (take_or_release) {  /* Java takes ownership of C++ object's lifetime. */
        if (!weak_global_) {
          jenv->DeleteGlobalRef(jthis_);
          jthis_ = jenv->NewWeakGlobalRef(jself);
          weak_global_ = true;
        }
      } else { /* Java releases ownership of C++ object's lifetime */
        if (weak_global_) {
          jenv->DeleteWeakGlobalRef((jweak)jthis_);
          jthis_ = jenv->NewGlobalRef(jself);
          weak_global_ = false;
        }
      }
    }

  private:
    /* pointer to Java object */
    jobject jthis_;
    /* Local or global reference flag */
    bool weak_global_;
  };

  /* director base class */
  class Director {
    /* pointer to Java virtual machine */
    JavaVM *swig_jvm_;

  protected:
#if defined (_MSC_VER) && (_MSC_VER<1300)
    class JNIEnvWrapper;
    friend class JNIEnvWrapper;
#endif
    /* Utility class for managing the JNI environment */
    class JNIEnvWrapper {
      const Director *director_;
      JNIEnv *jenv_;
      int env_status;
    public:
      JNIEnvWrapper(const Director *director) : director_(director), jenv_(0), env_status(0) {
#if defined(__ANDROID__)
        JNIEnv **jenv = &jenv_;
#else
        void **jenv = (void **)&jenv_;
#endif
        env_status = director_->swig_jvm_->GetEnv((void **)&jenv_, JNI_VERSION_1_2);
#if defined(SWIG_JAVA_ATTACH_CURRENT_THREAD_AS_DAEMON)
        // Attach a daemon thread to the JVM. Useful when the JVM should not wait for 
        // the thread to exit upon shutdown. Only for jdk-1.4 and later.
        director_->swig_jvm_->AttachCurrentThreadAsDaemon(jenv, NULL);
#else
        director_->swig_jvm_->AttachCurrentThread(jenv, NULL);
#endif
      }
      ~JNIEnvWrapper() {
#if !defined(SWIG_JAVA_NO_DETACH_CURRENT_THREAD)
        // Some JVMs, eg jdk-1.4.2 and lower on Solaris have a bug and crash with the DetachCurrentThread call.
        // However, without this call, the JVM hangs on exit when the thread was not created by the JVM and creates a memory leak.
        if (env_status == JNI_EDETACHED)
          director_->swig_jvm_->DetachCurrentThread();
#endif
      }
      JNIEnv *getJNIEnv() const {
        return jenv_;
      }
    };

    /* Java object wrapper */
    JObjectWrapper swig_self_;

    /* Disconnect director from Java object */
    void swig_disconnect_director_self(const char *disconn_method) {
      JNIEnvWrapper jnienv(this) ;
      JNIEnv *jenv = jnienv.getJNIEnv() ;
      jobject jobj = swig_self_.get(jenv);
#if defined(DEBUG_DIRECTOR_OWNED)
      std::cout << "Swig::Director::disconnect_director_self(" << jobj << ")" << std::endl;
#endif
      if (jobj && jenv->IsSameObject(jobj, NULL) == JNI_FALSE) {
        jmethodID disconn_meth = jenv->GetMethodID(jenv->GetObjectClass(jobj), disconn_method, "()V");
        if (disconn_meth) {
#if defined(DEBUG_DIRECTOR_OWNED)
          std::cout << "Swig::Director::disconnect_director_self upcall to " << disconn_method << std::endl;
#endif
          jenv->CallVoidMethod(jobj, disconn_meth);
        }
      }
      jenv->DeleteLocalRef(jobj);
    }

  public:
    Director(JNIEnv *jenv) : swig_jvm_((JavaVM *) NULL), swig_self_() {
      /* Acquire the Java VM pointer */
      jenv->GetJavaVM(&swig_jvm_);
    }

    virtual ~Director() {
      JNIEnvWrapper jnienv(this) ;
      JNIEnv *jenv = jnienv.getJNIEnv() ;
      swig_self_.release(jenv);
    }

    bool swig_set_self(JNIEnv *jenv, jobject jself, bool mem_own, bool weak_global) {
      return swig_self_.set(jenv, jself, mem_own, weak_global);
    }

    jobject swig_get_self(JNIEnv *jenv) const {
      return swig_self_.get(jenv);
    }

    // Change C++ object's ownership, relative to Java
    void swig_java_change_ownership(JNIEnv *jenv, jobject jself, bool take_or_release) {
      swig_self_.java_change_ownership(jenv, jself, take_or_release);
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

#include "FLD-SDK-API-PUBLIC-SWIG_java_android.h"


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_org_doubango_FaceLivenessDetection_Sdk_FaceLivenessDetectionSDKJNI_new_1FldSdkResult_1_1SWIG_10(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  FaceLiveness::FldSdkResult *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (FaceLiveness::FldSdkResult *)new FaceLiveness::FldSdkResult();
  *(FaceLiveness::FldSdkResult **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_doubango_FaceLivenessDetection_Sdk_FaceLivenessDetectionSDKJNI_new_1FldSdkResult_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jint jarg1, jstring jarg2, jstring jarg3, jlong jarg4) {
  jlong jresult = 0 ;
  int arg1 ;
  char *arg2 = (char *) 0 ;
  char *arg3 = (char *) 0 ;
  size_t arg4 ;
  FaceLiveness::FldSdkResult *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return 0;
  }
  arg3 = 0;
  if (jarg3) {
    arg3 = (char *)jenv->GetStringUTFChars(jarg3, 0);
    if (!arg3) return 0;
  }
  arg4 = (size_t)jarg4; 
  result = (FaceLiveness::FldSdkResult *)new FaceLiveness::FldSdkResult(arg1,(char const *)arg2,(char const *)arg3,arg4);
  *(FaceLiveness::FldSdkResult **)&jresult = result; 
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
  if (arg3) jenv->ReleaseStringUTFChars(jarg3, (const char *)arg3);
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_doubango_FaceLivenessDetection_Sdk_FaceLivenessDetectionSDKJNI_new_1FldSdkResult_1_1SWIG_12(JNIEnv *jenv, jclass jcls, jint jarg1, jstring jarg2, jstring jarg3) {
  jlong jresult = 0 ;
  int arg1 ;
  char *arg2 = (char *) 0 ;
  char *arg3 = (char *) 0 ;
  FaceLiveness::FldSdkResult *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return 0;
  }
  arg3 = 0;
  if (jarg3) {
    arg3 = (char *)jenv->GetStringUTFChars(jarg3, 0);
    if (!arg3) return 0;
  }
  result = (FaceLiveness::FldSdkResult *)new FaceLiveness::FldSdkResult(arg1,(char const *)arg2,(char const *)arg3);
  *(FaceLiveness::FldSdkResult **)&jresult = result; 
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
  if (arg3) jenv->ReleaseStringUTFChars(jarg3, (const char *)arg3);
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_doubango_FaceLivenessDetection_Sdk_FaceLivenessDetectionSDKJNI_new_1FldSdkResult_1_1SWIG_13(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  FaceLiveness::FldSdkResult *arg1 = 0 ;
  FaceLiveness::FldSdkResult *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(FaceLiveness::FldSdkResult **)&jarg1;
  if (!arg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "FaceLiveness::FldSdkResult const & reference is null");
    return 0;
  } 
  result = (FaceLiveness::FldSdkResult *)new FaceLiveness::FldSdkResult((FaceLiveness::FldSdkResult const &)*arg1);
  *(FaceLiveness::FldSdkResult **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_doubango_FaceLivenessDetection_Sdk_FaceLivenessDetectionSDKJNI_delete_1FldSdkResult(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  FaceLiveness::FldSdkResult *arg1 = (FaceLiveness::FldSdkResult *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(FaceLiveness::FldSdkResult **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_org_doubango_FaceLivenessDetection_Sdk_FaceLivenessDetectionSDKJNI_FldSdkResult_1code(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  FaceLiveness::FldSdkResult *arg1 = (FaceLiveness::FldSdkResult *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(FaceLiveness::FldSdkResult **)&jarg1; 
  result = (int)((FaceLiveness::FldSdkResult const *)arg1)->code();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_doubango_FaceLivenessDetection_Sdk_FaceLivenessDetectionSDKJNI_FldSdkResult_1phrase(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  FaceLiveness::FldSdkResult *arg1 = (FaceLiveness::FldSdkResult *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(FaceLiveness::FldSdkResult **)&jarg1; 
  result = (char *)((FaceLiveness::FldSdkResult const *)arg1)->phrase();
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_doubango_FaceLivenessDetection_Sdk_FaceLivenessDetectionSDKJNI_FldSdkResult_1json(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  FaceLiveness::FldSdkResult *arg1 = (FaceLiveness::FldSdkResult *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(FaceLiveness::FldSdkResult **)&jarg1; 
  result = (char *)((FaceLiveness::FldSdkResult const *)arg1)->json();
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_doubango_FaceLivenessDetection_Sdk_FaceLivenessDetectionSDKJNI_FldSdkResult_1numFaces(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  FaceLiveness::FldSdkResult *arg1 = (FaceLiveness::FldSdkResult *) 0 ;
  size_t result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(FaceLiveness::FldSdkResult **)&jarg1; 
  result = ((FaceLiveness::FldSdkResult const *)arg1)->numFaces();
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_doubango_FaceLivenessDetection_Sdk_FaceLivenessDetectionSDKJNI_FldSdkResult_1isOK(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  FaceLiveness::FldSdkResult *arg1 = (FaceLiveness::FldSdkResult *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(FaceLiveness::FldSdkResult **)&jarg1; 
  result = (bool)((FaceLiveness::FldSdkResult const *)arg1)->isOK();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_doubango_FaceLivenessDetection_Sdk_FaceLivenessDetectionSDKJNI_delete_1FldSdkParallelDeliveryCallback(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  FaceLiveness::FldSdkParallelDeliveryCallback *arg1 = (FaceLiveness::FldSdkParallelDeliveryCallback *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(FaceLiveness::FldSdkParallelDeliveryCallback **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_org_doubango_FaceLivenessDetection_Sdk_FaceLivenessDetectionSDKJNI_FldSdkParallelDeliveryCallback_1onNewResult(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  FaceLiveness::FldSdkParallelDeliveryCallback *arg1 = (FaceLiveness::FldSdkParallelDeliveryCallback *) 0 ;
  FaceLiveness::FldSdkResult *arg2 = (FaceLiveness::FldSdkResult *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(FaceLiveness::FldSdkParallelDeliveryCallback **)&jarg1; 
  arg2 = *(FaceLiveness::FldSdkResult **)&jarg2; 
  ((FaceLiveness::FldSdkParallelDeliveryCallback const *)arg1)->onNewResult((FaceLiveness::FldSdkResult const *)arg2);
}


SWIGEXPORT jlong JNICALL Java_org_doubango_FaceLivenessDetection_Sdk_FaceLivenessDetectionSDKJNI_FldSdkEngine_1init_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jstring jarg1, jlong jarg2, jobject jarg2_) {
  jlong jresult = 0 ;
  char *arg1 = (char *) 0 ;
  FaceLiveness::FldSdkParallelDeliveryCallback *arg2 = (FaceLiveness::FldSdkParallelDeliveryCallback *) 0 ;
  FaceLiveness::FldSdkResult result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg2_;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return 0;
  }
  arg2 = *(FaceLiveness::FldSdkParallelDeliveryCallback **)&jarg2; 
  result = FaceLiveness::FldSdkEngine::init((char const *)arg1,(FaceLiveness::FldSdkParallelDeliveryCallback const *)arg2);
  *(FaceLiveness::FldSdkResult **)&jresult = new FaceLiveness::FldSdkResult((const FaceLiveness::FldSdkResult &)result); 
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_doubango_FaceLivenessDetection_Sdk_FaceLivenessDetectionSDKJNI_FldSdkEngine_1init_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jlong jresult = 0 ;
  char *arg1 = (char *) 0 ;
  FaceLiveness::FldSdkResult result;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return 0;
  }
  result = FaceLiveness::FldSdkEngine::init((char const *)arg1);
  *(FaceLiveness::FldSdkResult **)&jresult = new FaceLiveness::FldSdkResult((const FaceLiveness::FldSdkResult &)result); 
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_doubango_FaceLivenessDetection_Sdk_FaceLivenessDetectionSDKJNI_FldSdkEngine_1init_1_1SWIG_12(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  FaceLiveness::FldSdkResult result;
  
  (void)jenv;
  (void)jcls;
  result = FaceLiveness::FldSdkEngine::init();
  *(FaceLiveness::FldSdkResult **)&jresult = new FaceLiveness::FldSdkResult((const FaceLiveness::FldSdkResult &)result); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_doubango_FaceLivenessDetection_Sdk_FaceLivenessDetectionSDKJNI_FldSdkEngine_1deInit(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  FaceLiveness::FldSdkResult result;
  
  (void)jenv;
  (void)jcls;
  result = FaceLiveness::FldSdkEngine::deInit();
  *(FaceLiveness::FldSdkResult **)&jresult = new FaceLiveness::FldSdkResult((const FaceLiveness::FldSdkResult &)result); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_doubango_FaceLivenessDetection_Sdk_FaceLivenessDetectionSDKJNI_FldSdkEngine_1process_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jint jarg1, jbyteArray jarg2, jlong jarg3, jlong jarg4, jlong jarg5, jint jarg6) {
  jlong jresult = 0 ;
  FaceLiveness::FLD_SDK_IMAGE_TYPE arg1 ;
  void *arg2 = (void *) 0 ;
  size_t arg3 ;
  size_t arg4 ;
  size_t arg5 ;
  int arg6 ;
  FaceLiveness::FldSdkResult result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (FaceLiveness::FLD_SDK_IMAGE_TYPE)jarg1; 
  
  arg2 = jenv->GetDirectBufferAddress(jarg2); 
  
  arg3 = (size_t)jarg3; 
  arg4 = (size_t)jarg4; 
  arg5 = (size_t)jarg5; 
  arg6 = (int)jarg6; 
  result = FaceLiveness::FldSdkEngine::process(arg1,(void const *)arg2,arg3,arg4,arg5,arg6);
  *(FaceLiveness::FldSdkResult **)&jresult = new FaceLiveness::FldSdkResult((const FaceLiveness::FldSdkResult &)result); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_doubango_FaceLivenessDetection_Sdk_FaceLivenessDetectionSDKJNI_FldSdkEngine_1process_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jint jarg1, jbyteArray jarg2, jlong jarg3, jlong jarg4, jlong jarg5) {
  jlong jresult = 0 ;
  FaceLiveness::FLD_SDK_IMAGE_TYPE arg1 ;
  void *arg2 = (void *) 0 ;
  size_t arg3 ;
  size_t arg4 ;
  size_t arg5 ;
  FaceLiveness::FldSdkResult result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (FaceLiveness::FLD_SDK_IMAGE_TYPE)jarg1; 
  
  arg2 = jenv->GetDirectBufferAddress(jarg2); 
  
  arg3 = (size_t)jarg3; 
  arg4 = (size_t)jarg4; 
  arg5 = (size_t)jarg5; 
  result = FaceLiveness::FldSdkEngine::process(arg1,(void const *)arg2,arg3,arg4,arg5);
  *(FaceLiveness::FldSdkResult **)&jresult = new FaceLiveness::FldSdkResult((const FaceLiveness::FldSdkResult &)result); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_doubango_FaceLivenessDetection_Sdk_FaceLivenessDetectionSDKJNI_FldSdkEngine_1process_1_1SWIG_12(JNIEnv *jenv, jclass jcls, jint jarg1, jbyteArray jarg2, jlong jarg3, jlong jarg4) {
  jlong jresult = 0 ;
  FaceLiveness::FLD_SDK_IMAGE_TYPE arg1 ;
  void *arg2 = (void *) 0 ;
  size_t arg3 ;
  size_t arg4 ;
  FaceLiveness::FldSdkResult result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (FaceLiveness::FLD_SDK_IMAGE_TYPE)jarg1; 
  
  arg2 = jenv->GetDirectBufferAddress(jarg2); 
  
  arg3 = (size_t)jarg3; 
  arg4 = (size_t)jarg4; 
  result = FaceLiveness::FldSdkEngine::process(arg1,(void const *)arg2,arg3,arg4);
  *(FaceLiveness::FldSdkResult **)&jresult = new FaceLiveness::FldSdkResult((const FaceLiveness::FldSdkResult &)result); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_doubango_FaceLivenessDetection_Sdk_FaceLivenessDetectionSDKJNI_FldSdkEngine_1process_1_1SWIG_13(JNIEnv *jenv, jclass jcls, jint jarg1, jbyteArray jarg2, jbyteArray jarg3, jbyteArray jarg4, jlong jarg5, jlong jarg6, jlong jarg7, jlong jarg8, jlong jarg9, jlong jarg10, jint jarg11) {
  jlong jresult = 0 ;
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
  
  (void)jenv;
  (void)jcls;
  arg1 = (FaceLiveness::FLD_SDK_IMAGE_TYPE)jarg1; 
  
  arg2 = jenv->GetDirectBufferAddress(jarg2); 
  
  
  arg3 = jenv->GetDirectBufferAddress(jarg3); 
  
  
  arg4 = jenv->GetDirectBufferAddress(jarg4); 
  
  arg5 = (size_t)jarg5; 
  arg6 = (size_t)jarg6; 
  arg7 = (size_t)jarg7; 
  arg8 = (size_t)jarg8; 
  arg9 = (size_t)jarg9; 
  arg10 = (size_t)jarg10; 
  arg11 = (int)jarg11; 
  result = FaceLiveness::FldSdkEngine::process(arg1,(void const *)arg2,(void const *)arg3,(void const *)arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11);
  *(FaceLiveness::FldSdkResult **)&jresult = new FaceLiveness::FldSdkResult((const FaceLiveness::FldSdkResult &)result); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_doubango_FaceLivenessDetection_Sdk_FaceLivenessDetectionSDKJNI_FldSdkEngine_1process_1_1SWIG_14(JNIEnv *jenv, jclass jcls, jint jarg1, jbyteArray jarg2, jbyteArray jarg3, jbyteArray jarg4, jlong jarg5, jlong jarg6, jlong jarg7, jlong jarg8, jlong jarg9, jlong jarg10) {
  jlong jresult = 0 ;
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
  
  (void)jenv;
  (void)jcls;
  arg1 = (FaceLiveness::FLD_SDK_IMAGE_TYPE)jarg1; 
  
  arg2 = jenv->GetDirectBufferAddress(jarg2); 
  
  
  arg3 = jenv->GetDirectBufferAddress(jarg3); 
  
  
  arg4 = jenv->GetDirectBufferAddress(jarg4); 
  
  arg5 = (size_t)jarg5; 
  arg6 = (size_t)jarg6; 
  arg7 = (size_t)jarg7; 
  arg8 = (size_t)jarg8; 
  arg9 = (size_t)jarg9; 
  arg10 = (size_t)jarg10; 
  result = FaceLiveness::FldSdkEngine::process(arg1,(void const *)arg2,(void const *)arg3,(void const *)arg4,arg5,arg6,arg7,arg8,arg9,arg10);
  *(FaceLiveness::FldSdkResult **)&jresult = new FaceLiveness::FldSdkResult((const FaceLiveness::FldSdkResult &)result); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_doubango_FaceLivenessDetection_Sdk_FaceLivenessDetectionSDKJNI_FldSdkEngine_1process_1_1SWIG_15(JNIEnv *jenv, jclass jcls, jint jarg1, jbyteArray jarg2, jbyteArray jarg3, jbyteArray jarg4, jlong jarg5, jlong jarg6, jlong jarg7, jlong jarg8, jlong jarg9) {
  jlong jresult = 0 ;
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
  
  (void)jenv;
  (void)jcls;
  arg1 = (FaceLiveness::FLD_SDK_IMAGE_TYPE)jarg1; 
  
  arg2 = jenv->GetDirectBufferAddress(jarg2); 
  
  
  arg3 = jenv->GetDirectBufferAddress(jarg3); 
  
  
  arg4 = jenv->GetDirectBufferAddress(jarg4); 
  
  arg5 = (size_t)jarg5; 
  arg6 = (size_t)jarg6; 
  arg7 = (size_t)jarg7; 
  arg8 = (size_t)jarg8; 
  arg9 = (size_t)jarg9; 
  result = FaceLiveness::FldSdkEngine::process(arg1,(void const *)arg2,(void const *)arg3,(void const *)arg4,arg5,arg6,arg7,arg8,arg9);
  *(FaceLiveness::FldSdkResult **)&jresult = new FaceLiveness::FldSdkResult((const FaceLiveness::FldSdkResult &)result); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_doubango_FaceLivenessDetection_Sdk_FaceLivenessDetectionSDKJNI_FldSdkEngine_1requestRuntimeLicenseKey_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jboolean jarg1) {
  jlong jresult = 0 ;
  bool *arg1 = 0 ;
  bool temp1 ;
  FaceLiveness::FldSdkResult result;
  
  (void)jenv;
  (void)jcls;
  temp1 = jarg1 ? true : false; 
  arg1 = &temp1; 
  result = FaceLiveness::FldSdkEngine::requestRuntimeLicenseKey((bool const &)*arg1);
  *(FaceLiveness::FldSdkResult **)&jresult = new FaceLiveness::FldSdkResult((const FaceLiveness::FldSdkResult &)result); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_doubango_FaceLivenessDetection_Sdk_FaceLivenessDetectionSDKJNI_FldSdkEngine_1requestRuntimeLicenseKey_1_1SWIG_11(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  FaceLiveness::FldSdkResult result;
  
  (void)jenv;
  (void)jcls;
  result = FaceLiveness::FldSdkEngine::requestRuntimeLicenseKey();
  *(FaceLiveness::FldSdkResult **)&jresult = new FaceLiveness::FldSdkResult((const FaceLiveness::FldSdkResult &)result); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_doubango_FaceLivenessDetection_Sdk_FaceLivenessDetectionSDKJNI_FldSdkEngine_1warmUp(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jlong jresult = 0 ;
  FaceLiveness::FLD_SDK_IMAGE_TYPE arg1 ;
  FaceLiveness::FldSdkResult result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (FaceLiveness::FLD_SDK_IMAGE_TYPE)jarg1; 
  result = FaceLiveness::FldSdkEngine::warmUp(arg1);
  *(FaceLiveness::FldSdkResult **)&jresult = new FaceLiveness::FldSdkResult((const FaceLiveness::FldSdkResult &)result); 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_doubango_FaceLivenessDetection_Sdk_FaceLivenessDetectionSDKJNI_delete_1FldSdkEngine(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  FaceLiveness::FldSdkEngine *arg1 = (FaceLiveness::FldSdkEngine *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(FaceLiveness::FldSdkEngine **)&jarg1; 
  delete arg1;
}


#ifdef __cplusplus
}
#endif


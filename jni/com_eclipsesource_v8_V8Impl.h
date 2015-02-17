/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_eclipsesource_v8_V8 */

#ifndef _Included_com_eclipsesource_v8_V8
#define _Included_com_eclipsesource_v8_V8
#ifdef __cplusplus
extern "C" {
#endif
#undef com_eclipsesource_v8_V8_VOID
#define com_eclipsesource_v8_V8_VOID 0L
#undef com_eclipsesource_v8_V8_UNKNOWN
#define com_eclipsesource_v8_V8_UNKNOWN 0L
#undef com_eclipsesource_v8_V8_INTEGER
#define com_eclipsesource_v8_V8_INTEGER 1L
#undef com_eclipsesource_v8_V8_DOUBLE
#define com_eclipsesource_v8_V8_DOUBLE 2L
#undef com_eclipsesource_v8_V8_BOOLEAN
#define com_eclipsesource_v8_V8_BOOLEAN 3L
#undef com_eclipsesource_v8_V8_STRING
#define com_eclipsesource_v8_V8_STRING 4L
#undef com_eclipsesource_v8_V8_V8_ARRAY
#define com_eclipsesource_v8_V8_V8_ARRAY 5L
#undef com_eclipsesource_v8_V8_V8_OBJECT
#define com_eclipsesource_v8_V8_V8_OBJECT 6L
#undef com_eclipsesource_v8_V8_UNDEFINED
#define com_eclipsesource_v8_V8_UNDEFINED 99L
/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _initNewV8Object
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1initNewV8Object
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _releaseRuntime
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1releaseRuntime
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _createIsolate
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1createIsolate
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeIntScript
 * Signature: (ILjava/lang/String;Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1executeIntScript
  (JNIEnv *, jobject, jint, jstring, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeDoubleScript
 * Signature: (ILjava/lang/String;Ljava/lang/String;I)D
 */
JNIEXPORT jdouble JNICALL Java_com_eclipsesource_v8_V8__1executeDoubleScript
  (JNIEnv *, jobject, jint, jstring, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeStringScript
 * Signature: (ILjava/lang/String;Ljava/lang/String;I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_eclipsesource_v8_V8__1executeStringScript
  (JNIEnv *, jobject, jint, jstring, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeBooleanScript
 * Signature: (ILjava/lang/String;Ljava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8__1executeBooleanScript
  (JNIEnv *, jobject, jint, jstring, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeScript
 * Signature: (IILjava/lang/String;Ljava/lang/String;I)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_eclipsesource_v8_V8__1executeScript
  (JNIEnv *, jobject, jint, jint, jstring, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeVoidScript
 * Signature: (ILjava/lang/String;Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1executeVoidScript
  (JNIEnv *, jobject, jint, jstring, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _release
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1release
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _contains
 * Signature: (IILjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8__1contains
  (JNIEnv *, jobject, jint, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getKeys
 * Signature: (II)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_eclipsesource_v8_V8__1getKeys
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getInteger
 * Signature: (IILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1getInteger
  (JNIEnv *, jobject, jint, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getBoolean
 * Signature: (IILjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8__1getBoolean
  (JNIEnv *, jobject, jint, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getDouble
 * Signature: (IILjava/lang/String;)D
 */
JNIEXPORT jdouble JNICALL Java_com_eclipsesource_v8_V8__1getDouble
  (JNIEnv *, jobject, jint, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getString
 * Signature: (IILjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_eclipsesource_v8_V8__1getString
  (JNIEnv *, jobject, jint, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _get
 * Signature: (IIILjava/lang/String;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_eclipsesource_v8_V8__1get
  (JNIEnv *, jobject, jint, jint, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeIntFunction
 * Signature: (IILjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1executeIntFunction
  (JNIEnv *, jobject, jint, jint, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeDoubleFunction
 * Signature: (IILjava/lang/String;I)D
 */
JNIEXPORT jdouble JNICALL Java_com_eclipsesource_v8_V8__1executeDoubleFunction
  (JNIEnv *, jobject, jint, jint, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeStringFunction
 * Signature: (IILjava/lang/String;I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_eclipsesource_v8_V8__1executeStringFunction
  (JNIEnv *, jobject, jint, jint, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeBooleanFunction
 * Signature: (IILjava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8__1executeBooleanFunction
  (JNIEnv *, jobject, jint, jint, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeFunction
 * Signature: (IIILjava/lang/String;I)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_eclipsesource_v8_V8__1executeFunction
  (JNIEnv *, jobject, jint, jint, jint, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeVoidFunction
 * Signature: (IILjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1executeVoidFunction
  (JNIEnv *, jobject, jint, jint, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _equals
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8__1equals
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _strictEquals
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8__1strictEquals
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _sameValue
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8__1sameValue
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _identityHash
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1identityHash
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _add
 * Signature: (IILjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1add__IILjava_lang_String_2I
  (JNIEnv *, jobject, jint, jint, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _addObject
 * Signature: (IILjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1addObject
  (JNIEnv *, jobject, jint, jint, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _add
 * Signature: (IILjava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1add__IILjava_lang_String_2Z
  (JNIEnv *, jobject, jint, jint, jstring, jboolean);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _add
 * Signature: (IILjava/lang/String;D)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1add__IILjava_lang_String_2D
  (JNIEnv *, jobject, jint, jint, jstring, jdouble);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _add
 * Signature: (IILjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1add__IILjava_lang_String_2Ljava_lang_String_2
  (JNIEnv *, jobject, jint, jint, jstring, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _addUndefined
 * Signature: (IILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1addUndefined
  (JNIEnv *, jobject, jint, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _registerJavaMethod
 * Signature: (IILjava/lang/String;IZ)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1registerJavaMethod
  (JNIEnv *, jobject, jint, jint, jstring, jint, jboolean);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _initNewV8Array
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1initNewV8Array
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _releaseArray
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1releaseArray
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetSize
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1arrayGetSize
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetInteger
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1arrayGetInteger
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetBoolean
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8__1arrayGetBoolean
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetDouble
 * Signature: (III)D
 */
JNIEXPORT jdouble JNICALL Java_com_eclipsesource_v8_V8__1arrayGetDouble
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetString
 * Signature: (III)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_eclipsesource_v8_V8__1arrayGetString
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGet
 * Signature: (IIII)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_eclipsesource_v8_V8__1arrayGet
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _addArrayIntItem
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1addArrayIntItem
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _addArrayBooleanItem
 * Signature: (IIZ)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1addArrayBooleanItem
  (JNIEnv *, jobject, jint, jint, jboolean);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _addArrayDoubleItem
 * Signature: (IID)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1addArrayDoubleItem
  (JNIEnv *, jobject, jint, jint, jdouble);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _addArrayStringItem
 * Signature: (IILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1addArrayStringItem
  (JNIEnv *, jobject, jint, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _addArrayObjectItem
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1addArrayObjectItem
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _addArrayUndefinedItem
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1addArrayUndefinedItem
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getType
 * Signature: (IILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1getType__IILjava_lang_String_2
  (JNIEnv *, jobject, jint, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getType
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1getType__III
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getArrayType
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1getArrayType
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getType
 * Signature: (IIII)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1getType__IIII
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _setPrototype
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1setPrototype
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _enableDebugSupport
 * Signature: (IIZ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8__1enableDebugSupport
  (JNIEnv *, jobject, jint, jint, jboolean);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _disableDebugSupport
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1disableDebugSupport
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _processDebugMessages
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1processDebugMessages
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetInts
 * Signature: (IIII)[I
 */
JNIEXPORT jintArray JNICALL Java_com_eclipsesource_v8_V8__1arrayGetInts__IIII
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetDoubles
 * Signature: (IIII)[D
 */
JNIEXPORT jdoubleArray JNICALL Java_com_eclipsesource_v8_V8__1arrayGetDoubles__IIII
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetBooleans
 * Signature: (IIII)[Z
 */
JNIEXPORT jbooleanArray JNICALL Java_com_eclipsesource_v8_V8__1arrayGetBooleans__IIII
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetStrings
 * Signature: (IIII)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_eclipsesource_v8_V8__1arrayGetStrings__IIII
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetInts
 * Signature: (IIII[I)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1arrayGetInts__IIII_3I
  (JNIEnv *, jobject, jint, jint, jint, jint, jintArray);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetDoubles
 * Signature: (IIII[D)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1arrayGetDoubles__IIII_3D
  (JNIEnv *, jobject, jint, jint, jint, jint, jdoubleArray);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetBooleans
 * Signature: (IIII[Z)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1arrayGetBooleans__IIII_3Z
  (JNIEnv *, jobject, jint, jint, jint, jint, jbooleanArray);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetStrings
 * Signature: (IIII[Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1arrayGetStrings__IIII_3Ljava_lang_String_2
  (JNIEnv *, jobject, jint, jint, jint, jint, jobjectArray);

#ifdef __cplusplus
}
#endif
#endif

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class ai_fedml_edge_nativemobilenn_NativeFedMLClientManager */

#ifndef _Included_ai_fedml_edge_nativemobilenn_NativeFedMLClientManager
#define _Included_ai_fedml_edge_nativemobilenn_NativeFedMLClientManager
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     ai_fedml_edge_nativemobilenn_NativeFedMLClientManager
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_ai_fedml_edge_nativemobilenn_NativeFedMLClientManager_create
  (JNIEnv *, jobject);

/*
 * Class:     ai_fedml_edge_nativemobilenn_NativeFedMLClientManager
 * Method:    release
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_ai_fedml_edge_nativemobilenn_NativeFedMLClientManager_release
  (JNIEnv *, jobject, jlong);

/*
 * Class:     ai_fedml_edge_nativemobilenn_NativeFedMLClientManager
 * Method:    init
 * Signature: (JLjava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIDILai/fedml/edge/nativemobilenn/TrainingCallback;)V
 */
JNIEXPORT void JNICALL Java_ai_fedml_edge_nativemobilenn_NativeFedMLClientManager_init
  (JNIEnv *, jobject, jlong, jstring, jstring, jstring, jint, jint, jint, jdouble, jint, jobject);

/*
 * Class:     ai_fedml_edge_nativemobilenn_NativeFedMLClientManager
 * Method:    train
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ai_fedml_edge_nativemobilenn_NativeFedMLClientManager_train
  (JNIEnv *, jobject, jlong);

/*
 * Class:     ai_fedml_edge_nativemobilenn_NativeFedMLClientManager
 * Method:    getEpochAndLoss
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ai_fedml_edge_nativemobilenn_NativeFedMLClientManager_getEpochAndLoss
  (JNIEnv *, jobject, jlong);

/*
 * Class:     ai_fedml_edge_nativemobilenn_NativeFedMLClientManager
 * Method:    stopTraining
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_ai_fedml_edge_nativemobilenn_NativeFedMLClientManager_stopTraining
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif

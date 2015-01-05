/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class ogles_gpgpu_OGJNIWrapper */

#ifndef _Included_ogles_gpgpu_OGJNIWrapper
#define _Included_ogles_gpgpu_OGJNIWrapper
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     ogles_gpgpu_OGJNIWrapper
 * Method:    getOutputFrameW
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ogles_1gpgpu_OGJNIWrapper_getOutputFrameW
  (JNIEnv *, jobject);

/*
 * Class:     ogles_gpgpu_OGJNIWrapper
 * Method:    getOutputFrameH
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ogles_1gpgpu_OGJNIWrapper_getOutputFrameH
  (JNIEnv *, jobject);

/*
 * Class:     ogles_gpgpu_OGJNIWrapper
 * Method:    init
 * Signature: (ZZ)V
 */
JNIEXPORT void JNICALL Java_ogles_1gpgpu_OGJNIWrapper_init
  (JNIEnv *, jobject, jboolean, jboolean);

/*
 * Class:     ogles_gpgpu_OGJNIWrapper
 * Method:    prepare
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_ogles_1gpgpu_OGJNIWrapper_prepare
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     ogles_gpgpu_OGJNIWrapper
 * Method:    cleanup
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ogles_1gpgpu_OGJNIWrapper_cleanup
  (JNIEnv *, jobject);

/*
 * Class:     ogles_gpgpu_OGJNIWrapper
 * Method:    setInputPixels
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_ogles_1gpgpu_OGJNIWrapper_setInputPixels
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     ogles_gpgpu_OGJNIWrapper
 * Method:    process
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ogles_1gpgpu_OGJNIWrapper_process
  (JNIEnv *, jobject);

/*
 * Class:     ogles_gpgpu_OGJNIWrapper
 * Method:    getOutputPixels
 * Signature: ()Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_ogles_1gpgpu_OGJNIWrapper_getOutputPixels
  (JNIEnv *, jobject);

/*
 * Class:     ogles_gpgpu_OGJNIWrapper
 * Method:    getTimeMeasurements
 * Signature: ()[D
 */
JNIEXPORT jdoubleArray JNICALL Java_ogles_1gpgpu_OGJNIWrapper_getTimeMeasurements
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif

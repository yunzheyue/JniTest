//
// Created by Administrator on 2018/7/12 0012.
//

#include "com_example_administrator_androidtest_six_JNIUtils.h"

JNIEXPORT jstring JNICALL Java_com_example_administrator_androidtest_1six_JNIUtils_sayHelloFromJNI
  (JNIEnv *env, jclass jcla){

    return (*env)->NewStringUTF(env,"xx");
  }


//
// Created by fengfl on 2019-04-17.
//

#include<com_example_fengfl_myapplication_FlJni.h>
jstring Java_com_example_fengfl_myapplication_FlJni_getHelloWorldStr
  (JNIEnv* env, jobject obj) {
    return (*(*env)).NewStringUTF(env,"hello world");
  }

jstring Java_com_example_fengfl_myapplication_FlJni_sayHello
  (JNIEnv* env, jobject obj) {
    return (*(*env)).NewStringUTF(env,"hello");
}

jstring Java_com_example_fengfl_myapplication_FlJni_sayHaHa
  (JNIEnv* env, jobject obj) {
    return (*(*env)).NewStringUTF(env,"haha");
  }

jstring Java_com_example_fengfl_myapplication_FlJni_sayHi
  (JNIEnv* env, jobject obj) {
    return (*(*env)).NewStringUTF(env,"hi");
}


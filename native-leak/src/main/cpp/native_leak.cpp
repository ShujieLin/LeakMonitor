#include <jni.h>
#include <string>

/*extern "C" JNIEXPORT jstring JNICALL
Java_com_shujie_native_1leak_NativeLib_stringFromJNI(
        JNIEnv* env,
        jobject *//* this *//*) {
    std::string hello = "Hello from C++ native leak";
    return env->NewStringUTF(hello.c_str());
}*/
extern "C"
JNIEXPORT jstring JNICALL
Java_com_shujie_leakmonitor_MainActivity_stringFromJNI(JNIEnv *env, jobject thiz) {
    std::string hello = "Hello from C++ native leak";
    return env->NewStringUTF(hello.c_str());
}
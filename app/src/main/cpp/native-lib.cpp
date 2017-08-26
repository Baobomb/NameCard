#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_tw_bao_namecard_nativetool_NativeTool_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

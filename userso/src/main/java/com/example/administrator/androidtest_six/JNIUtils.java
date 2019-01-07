package com.example.administrator.androidtest_six;

/**
 * autour : lbing
 * date : 2018/7/12 0012 16:12
 * className :
 * version : 1.0
 * description :
 */


public class JNIUtils {

    static {
        System.loadLibrary("JNIHello");
    }

    public native static String sayHelloFromJNI() ;
}

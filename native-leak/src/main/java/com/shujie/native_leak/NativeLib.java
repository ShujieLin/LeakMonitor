package com.shujie.native_leak;

public class NativeLib {

    // Used to load the 'native_leak' library on application startup.
    static {
        System.loadLibrary("native_leak");
    }

    /**
     * A native method that is implemented by the 'native_leak' native library,
     * which is packaged with this application.
     */
    //public native String stringFromJNI();
}
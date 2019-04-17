package com.example.fengfl.myapplication;

public class FlJni {

    static {
        System.loadLibrary("haha");
    }

    private native String getHelloWorldStr();
    private native String sayHello();
    private native String sayHaHa();
    private native String sayHi();
}

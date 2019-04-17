LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

#编译生成的so文件名
LOCAL_MODULE := haha
#要编译的c文件
LOCAL_SRC_FILES := haha.c

include $(BUILD_SHARED_LIBRARY)
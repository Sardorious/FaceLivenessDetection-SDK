/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.9
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.doubango.FaceLivenessDetection.Sdk;

public enum FLD_SDK_IMAGE_TYPE {
  FLD_SDK_IMAGE_TYPE_RGB24,
  FLD_SDK_IMAGE_TYPE_RGBA32,
  FLD_SDK_IMAGE_TYPE_BGRA32,
  FLD_SDK_IMAGE_TYPE_BGR24,
  FLD_SDK_IMAGE_TYPE_NV12,
  FLD_SDK_IMAGE_TYPE_NV21,
  FLD_SDK_IMAGE_TYPE_YUV420P,
  FLD_SDK_IMAGE_TYPE_YVU420P,
  FLD_SDK_IMAGE_TYPE_YUV422P,
  FLD_SDK_IMAGE_TYPE_YUV444P,
  FLD_SDK_IMAGE_TYPE_Y;

  public final int swigValue() {
    return swigValue;
  }

  public static FLD_SDK_IMAGE_TYPE swigToEnum(int swigValue) {
    FLD_SDK_IMAGE_TYPE[] swigValues = FLD_SDK_IMAGE_TYPE.class.getEnumConstants();
    if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
      return swigValues[swigValue];
    for (FLD_SDK_IMAGE_TYPE swigEnum : swigValues)
      if (swigEnum.swigValue == swigValue)
        return swigEnum;
    throw new IllegalArgumentException("No enum " + FLD_SDK_IMAGE_TYPE.class + " with value " + swigValue);
  }

  @SuppressWarnings("unused")
  private FLD_SDK_IMAGE_TYPE() {
    this.swigValue = SwigNext.next++;
  }

  @SuppressWarnings("unused")
  private FLD_SDK_IMAGE_TYPE(int swigValue) {
    this.swigValue = swigValue;
    SwigNext.next = swigValue+1;
  }

  @SuppressWarnings("unused")
  private FLD_SDK_IMAGE_TYPE(FLD_SDK_IMAGE_TYPE swigEnum) {
    this.swigValue = swigEnum.swigValue;
    SwigNext.next = this.swigValue+1;
  }

  private final int swigValue;

  private static class SwigNext {
    private static int next = 0;
  }
}


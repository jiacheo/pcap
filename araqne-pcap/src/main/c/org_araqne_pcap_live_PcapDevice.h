/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_araqne_pcap_live_PcapDevice */

#ifndef _Included_org_araqne_pcap_live_PcapDevice
#define _Included_org_araqne_pcap_live_PcapDevice
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_araqne_pcap_live_PcapDevice
 * Method:    open
 * Signature: (ILjava/lang/String;IZI)V
 */
JNIEXPORT void JNICALL Java_org_araqne_pcap_live_PcapDevice_open
  (JNIEnv *, jobject, jint, jstring, jint, jboolean, jint);

/*
 * Class:     org_araqne_pcap_live_PcapDevice
 * Method:    openBuffer
 * Signature: (ILjava/lang/String;IZI)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_org_araqne_pcap_live_PcapDevice_openBuffer
  (JNIEnv *, jobject, jint, jstring, jint, jboolean, jint);

/*
 * Class:     org_araqne_pcap_live_PcapDevice
 * Method:    getPacket
 * Signature: (I)Lorg/araqne/pcap/packet/PcapPacket;
 */
JNIEXPORT jobject JNICALL Java_org_araqne_pcap_live_PcapDevice_getPacket
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_araqne_pcap_live_PcapDevice
 * Method:    getPacketBuffered
 * Signature: (Ljava/nio/ByteBuffer;II)I
 */
JNIEXPORT jint JNICALL Java_org_araqne_pcap_live_PcapDevice_getPacketBuffered
  (JNIEnv *, jobject, jobject, jint, jint);

/*
 * Class:     org_araqne_pcap_live_PcapDevice
 * Method:    getTxBuffer
 * Signature: (Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_org_araqne_pcap_live_PcapDevice_getTxBuffer
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_araqne_pcap_live_PcapDevice
 * Method:    writeBuffer
 * Signature: (Ljava/nio/ByteBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_org_araqne_pcap_live_PcapDevice_writeBuffer
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     org_araqne_pcap_live_PcapDevice
 * Method:    write
 * Signature: (I[BII)V
 */
JNIEXPORT void JNICALL Java_org_araqne_pcap_live_PcapDevice_write
  (JNIEnv *, jobject, jint, jbyteArray, jint, jint);

/*
 * Class:     org_araqne_pcap_live_PcapDevice
 * Method:    setNonblock
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_araqne_pcap_live_PcapDevice_setNonblock
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_araqne_pcap_live_PcapDevice
 * Method:    isNonblock
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_araqne_pcap_live_PcapDevice_isNonblock
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_araqne_pcap_live_PcapDevice
 * Method:    setFilter
 * Signature: (ILjava/lang/String;II)V
 */
JNIEXPORT void JNICALL Java_org_araqne_pcap_live_PcapDevice_setFilter
  (JNIEnv *, jobject, jint, jstring, jint, jint);

/*
 * Class:     org_araqne_pcap_live_PcapDevice
 * Method:    getStat
 * Signature: (I)Lorg/araqne/pcap/live/PcapStat;
 */
JNIEXPORT jobject JNICALL Java_org_araqne_pcap_live_PcapDevice_getStat
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_araqne_pcap_live_PcapDevice
 * Method:    close
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_araqne_pcap_live_PcapDevice_close
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_araqne_pcap_live_PcapDevice
 * Method:    closeBuffer
 * Signature: (Ljava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_org_araqne_pcap_live_PcapDevice_closeBuffer
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_araqne_pcap_live_PcapDevice
 * Method:    getPcapLibVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_araqne_pcap_live_PcapDevice_getPcapLibVersion
  (JNIEnv *, jclass);

jobjectArray getAddressBindings(JNIEnv *, pcap_if_t *);
jbyteArray getAddress(JNIEnv *, struct sockaddr *);
jobject makePacket(JNIEnv *, struct pcap_pkthdr *, const u_char *);
jobject makePacketHeader(JNIEnv *, struct pcap_pkthdr *);
jobject makePacketPayload(JNIEnv *, const u_char *, jint);

#ifdef __cplusplus
}
#endif
#endif

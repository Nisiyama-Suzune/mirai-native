/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_itxtech_mirainative_Bridge */

#ifndef _Included_org_itxtech_mirainative_Bridge
#define _Included_org_itxtech_mirainative_Bridge
#ifdef __cplusplus
extern "C" {
#endif
#undef org_itxtech_mirainative_Bridge_PRI_MSG_SUBTYPE_FRIEND
#define org_itxtech_mirainative_Bridge_PRI_MSG_SUBTYPE_FRIEND 11L
#undef org_itxtech_mirainative_Bridge_PERM_SUBTYPE_CANCEL_ADMIN
#define org_itxtech_mirainative_Bridge_PERM_SUBTYPE_CANCEL_ADMIN 1L
#undef org_itxtech_mirainative_Bridge_PERM_SUBTYPE_SET_ADMIN
#define org_itxtech_mirainative_Bridge_PERM_SUBTYPE_SET_ADMIN 2L
#undef org_itxtech_mirainative_Bridge_MEMBER_LEAVE_QUIT
#define org_itxtech_mirainative_Bridge_MEMBER_LEAVE_QUIT 1L
#undef org_itxtech_mirainative_Bridge_MEMBER_LEAVE_KICK
#define org_itxtech_mirainative_Bridge_MEMBER_LEAVE_KICK 2L
#undef org_itxtech_mirainative_Bridge_GROUP_UNMUTE
#define org_itxtech_mirainative_Bridge_GROUP_UNMUTE 1L
#undef org_itxtech_mirainative_Bridge_GROUP_MUTE
#define org_itxtech_mirainative_Bridge_GROUP_MUTE 2L
/*
 * Class:     org_itxtech_mirainative_Bridge
 * Method:    loadNativePlugin
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_org_itxtech_mirainative_Bridge_loadNativePlugin
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     org_itxtech_mirainative_Bridge
 * Method:    freeNativePlugin
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_itxtech_mirainative_Bridge_freeNativePlugin
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_itxtech_mirainative_Bridge
 * Method:    pEvPrivateMessage
 * Signature: (ILjava/lang/String;IIJLjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_org_itxtech_mirainative_Bridge_pEvPrivateMessage
  (JNIEnv *, jobject, jint, jstring, jint, jint, jlong, jstring, jint);

/*
 * Class:     org_itxtech_mirainative_Bridge
 * Method:    pEvGroupMessage
 * Signature: (ILjava/lang/String;IIJJLjava/lang/String;Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_org_itxtech_mirainative_Bridge_pEvGroupMessage
  (JNIEnv *, jobject, jint, jstring, jint, jint, jlong, jlong, jstring, jstring, jint);

/*
 * Class:     org_itxtech_mirainative_Bridge
 * Method:    pEvGroupAdmin
 * Signature: (ILjava/lang/String;IIJJ)I
 */
JNIEXPORT jint JNICALL Java_org_itxtech_mirainative_Bridge_pEvGroupAdmin
  (JNIEnv *, jobject, jint, jstring, jint, jint, jlong, jlong);

/*
 * Class:     org_itxtech_mirainative_Bridge
 * Method:    pEvGroupMemberLeave
 * Signature: (ILjava/lang/String;IIJJJ)I
 */
JNIEXPORT jint JNICALL Java_org_itxtech_mirainative_Bridge_pEvGroupMemberLeave
  (JNIEnv *, jobject, jint, jstring, jint, jint, jlong, jlong, jlong);

/*
 * Class:     org_itxtech_mirainative_Bridge
 * Method:    pEvGroupBan
 * Signature: (ILjava/lang/String;IIJJJJ)I
 */
JNIEXPORT jint JNICALL Java_org_itxtech_mirainative_Bridge_pEvGroupBan
  (JNIEnv *, jobject, jint, jstring, jint, jint, jlong, jlong, jlong, jlong);

/*
 * Class:     org_itxtech_mirainative_Bridge
 * Method:    callIntMethod
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_itxtech_mirainative_Bridge_callIntMethod
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     org_itxtech_mirainative_Bridge
 * Method:    callStringMethod
 * Signature: (ILjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_itxtech_mirainative_Bridge_callStringMethod
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     org_itxtech_mirainative_Bridge
 * Method:    processMessage
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_itxtech_mirainative_Bridge_processMessage
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif

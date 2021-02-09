/*** Autogenerated by WIDL 6.1 from include/wbemtran.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __wbemtran_h__
#define __wbemtran_h__

/* Forward declarations */

#ifndef __WbemLevel1Login_FWD_DEFINED__
#define __WbemLevel1Login_FWD_DEFINED__
#ifdef __cplusplus
typedef class WbemLevel1Login WbemLevel1Login;
#else
typedef struct WbemLevel1Login WbemLevel1Login;
#endif /* defined __cplusplus */
#endif /* defined __WbemLevel1Login_FWD_DEFINED__ */

#ifndef __WbemLocalAddrRes_FWD_DEFINED__
#define __WbemLocalAddrRes_FWD_DEFINED__
#ifdef __cplusplus
typedef class WbemLocalAddrRes WbemLocalAddrRes;
#else
typedef struct WbemLocalAddrRes WbemLocalAddrRes;
#endif /* defined __cplusplus */
#endif /* defined __WbemLocalAddrRes_FWD_DEFINED__ */

#ifndef __WbemUninitializedClassObject_FWD_DEFINED__
#define __WbemUninitializedClassObject_FWD_DEFINED__
#ifdef __cplusplus
typedef class WbemUninitializedClassObject WbemUninitializedClassObject;
#else
typedef struct WbemUninitializedClassObject WbemUninitializedClassObject;
#endif /* defined __cplusplus */
#endif /* defined __WbemUninitializedClassObject_FWD_DEFINED__ */

#ifndef __WbemDCOMTransport_FWD_DEFINED__
#define __WbemDCOMTransport_FWD_DEFINED__
#ifdef __cplusplus
typedef class WbemDCOMTransport WbemDCOMTransport;
#else
typedef struct WbemDCOMTransport WbemDCOMTransport;
#endif /* defined __cplusplus */
#endif /* defined __WbemDCOMTransport_FWD_DEFINED__ */

#ifndef __IWbemLevel1Login_FWD_DEFINED__
#define __IWbemLevel1Login_FWD_DEFINED__
typedef interface IWbemLevel1Login IWbemLevel1Login;
#ifdef __cplusplus
interface IWbemLevel1Login;
#endif /* __cplusplus */
#endif

#ifndef __IWbemConnectorLogin_FWD_DEFINED__
#define __IWbemConnectorLogin_FWD_DEFINED__
typedef interface IWbemConnectorLogin IWbemConnectorLogin;
#ifdef __cplusplus
interface IWbemConnectorLogin;
#endif /* __cplusplus */
#endif

#ifndef __IWbemAddressResolution_FWD_DEFINED__
#define __IWbemAddressResolution_FWD_DEFINED__
typedef interface IWbemAddressResolution IWbemAddressResolution;
#ifdef __cplusplus
interface IWbemAddressResolution;
#endif /* __cplusplus */
#endif

#ifndef __IWbemTransport_FWD_DEFINED__
#define __IWbemTransport_FWD_DEFINED__
typedef interface IWbemTransport IWbemTransport;
#ifdef __cplusplus
interface IWbemTransport;
#endif /* __cplusplus */
#endif

#ifndef __IWbemConstructClassObject_FWD_DEFINED__
#define __IWbemConstructClassObject_FWD_DEFINED__
typedef interface IWbemConstructClassObject IWbemConstructClassObject;
#ifdef __cplusplus
interface IWbemConstructClassObject;
#endif /* __cplusplus */
#endif

#ifndef __IWbemClientTransport_FWD_DEFINED__
#define __IWbemClientTransport_FWD_DEFINED__
typedef interface IWbemClientTransport IWbemClientTransport;
#ifdef __cplusplus
interface IWbemClientTransport;
#endif /* __cplusplus */
#endif

#ifndef __IWbemClientConnectionTransport_FWD_DEFINED__
#define __IWbemClientConnectionTransport_FWD_DEFINED__
typedef interface IWbemClientConnectionTransport IWbemClientConnectionTransport;
#ifdef __cplusplus
interface IWbemClientConnectionTransport;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <objidl.h>
#include <oleidl.h>
#include <oaidl.h>
#include <wbemcli.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#ifndef __IWbemTransport_FWD_DEFINED__
#define __IWbemTransport_FWD_DEFINED__
typedef interface IWbemTransport IWbemTransport;
#ifdef __cplusplus
interface IWbemTransport;
#endif /* __cplusplus */
#endif

#ifndef __IWbemLevel1Login_FWD_DEFINED__
#define __IWbemLevel1Login_FWD_DEFINED__
typedef interface IWbemLevel1Login IWbemLevel1Login;
#ifdef __cplusplus
interface IWbemLevel1Login;
#endif /* __cplusplus */
#endif

#ifndef __IWbemConnectorLogin_FWD_DEFINED__
#define __IWbemConnectorLogin_FWD_DEFINED__
typedef interface IWbemConnectorLogin IWbemConnectorLogin;
#ifdef __cplusplus
interface IWbemConnectorLogin;
#endif /* __cplusplus */
#endif

#ifndef __IWbemAddressResolution_FWD_DEFINED__
#define __IWbemAddressResolution_FWD_DEFINED__
typedef interface IWbemAddressResolution IWbemAddressResolution;
#ifdef __cplusplus
interface IWbemAddressResolution;
#endif /* __cplusplus */
#endif

#ifndef __IWbemClientTransport_FWD_DEFINED__
#define __IWbemClientTransport_FWD_DEFINED__
typedef interface IWbemClientTransport IWbemClientTransport;
#ifdef __cplusplus
interface IWbemClientTransport;
#endif /* __cplusplus */
#endif

#ifndef __IWbemClientConnectionTransport_FWD_DEFINED__
#define __IWbemClientConnectionTransport_FWD_DEFINED__
typedef interface IWbemClientConnectionTransport IWbemClientConnectionTransport;
#ifdef __cplusplus
interface IWbemClientConnectionTransport;
#endif /* __cplusplus */
#endif

typedef enum tag_WBEM_LOGIN_TYPE {
    WBEM_FLAG_INPROC_LOGIN = 0,
    WBEM_FLAG_LOCAL_LOGIN = 1,
    WBEM_FLAG_REMOTE_LOGIN = 2,
    WBEM_AUTHENTICATION_METHOD_MASK = 0xf,
    WBEM_FLAG_USE_MULTIPLE_CHALLENGES = 0x10
} WBEM_LOGIN_TYPE;
typedef BYTE *WBEM_128BITS;
#ifndef __WbemTransports_v1_LIBRARY_DEFINED__
#define __WbemTransports_v1_LIBRARY_DEFINED__

DEFINE_GUID(LIBID_WbemTransports_v1, 0x027947f3, 0xd731, 0x11ce, 0xa3,0x57, 0x00,0x00,0x00,0x00,0x00,0x01);

/*****************************************************************************
 * WbemLevel1Login coclass
 */

DEFINE_GUID(CLSID_WbemLevel1Login, 0x8bc3f05e, 0xd86b, 0x11d0, 0xa0,0x75, 0x00,0xc0,0x4f,0xb6,0x88,0x20);

#ifdef __cplusplus
class DECLSPEC_UUID("8bc3f05e-d86b-11d0-a075-00c04fb68820") WbemLevel1Login;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(WbemLevel1Login, 0x8bc3f05e, 0xd86b, 0x11d0, 0xa0,0x75, 0x00,0xc0,0x4f,0xb6,0x88,0x20)
#endif
#endif

/*****************************************************************************
 * WbemLocalAddrRes coclass
 */

DEFINE_GUID(CLSID_WbemLocalAddrRes, 0xa1044801, 0x8f7e, 0x11d1, 0x9e,0x7c, 0x00,0xc0,0x4f,0xc3,0x24,0xa8);

#ifdef __cplusplus
class DECLSPEC_UUID("a1044801-8f7e-11d1-9e7c-00c04fc324a8") WbemLocalAddrRes;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(WbemLocalAddrRes, 0xa1044801, 0x8f7e, 0x11d1, 0x9e,0x7c, 0x00,0xc0,0x4f,0xc3,0x24,0xa8)
#endif
#endif

/*****************************************************************************
 * WbemUninitializedClassObject coclass
 */

DEFINE_GUID(CLSID_WbemUninitializedClassObject, 0x7a0227f6, 0x7108, 0x11d1, 0xad,0x90, 0x00,0xc0,0x4f,0xd8,0xfd,0xff);

#ifdef __cplusplus
class DECLSPEC_UUID("7a0227f6-7108-11d1-ad90-00c04fd8fdff") WbemUninitializedClassObject;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(WbemUninitializedClassObject, 0x7a0227f6, 0x7108, 0x11d1, 0xad,0x90, 0x00,0xc0,0x4f,0xd8,0xfd,0xff)
#endif
#endif

/*****************************************************************************
 * WbemDCOMTransport coclass
 */

DEFINE_GUID(CLSID_WbemDCOMTransport, 0xf7ce2e13, 0x8c90, 0x11d1, 0x9e,0x7b, 0x00,0xc0,0x4f,0xc3,0x24,0xa8);

#ifdef __cplusplus
class DECLSPEC_UUID("f7ce2e13-8c90-11d1-9e7b-00c04fc324a8") WbemDCOMTransport;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(WbemDCOMTransport, 0xf7ce2e13, 0x8c90, 0x11d1, 0x9e,0x7b, 0x00,0xc0,0x4f,0xc3,0x24,0xa8)
#endif
#endif

#endif /* __WbemTransports_v1_LIBRARY_DEFINED__ */
/*****************************************************************************
 * IWbemLevel1Login interface
 */
#ifndef __IWbemLevel1Login_INTERFACE_DEFINED__
#define __IWbemLevel1Login_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWbemLevel1Login, 0xf309ad18, 0xd86a, 0x11d0, 0xa0,0x75, 0x00,0xc0,0x4f,0xb6,0x88,0x20);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("f309ad18-d86a-11d0-a075-00c04fb68820")
IWbemLevel1Login : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE EstablishPosition(
        LPWSTR wszLocaleList,
        DWORD dwNumLocales,
        DWORD *reserved) = 0;

    virtual HRESULT STDMETHODCALLTYPE RequestChallenge(
        LPWSTR wszNetworkResource,
        LPWSTR wszUser,
        WBEM_128BITS Nonce) = 0;

    virtual HRESULT STDMETHODCALLTYPE WBEMLogin(
        LPWSTR wszPreferredLocale,
        WBEM_128BITS AccessToken,
        LONG lFlags,
        IWbemContext *pCtx,
        IWbemServices **ppNamespace) = 0;

    virtual HRESULT STDMETHODCALLTYPE NTLMLogin(
        LPWSTR wszNetworkResource,
        LPWSTR wszPreferredLocale,
        LONG lFlags,
        IWbemContext *pCtx,
        IWbemServices **ppNamespace) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWbemLevel1Login, 0xf309ad18, 0xd86a, 0x11d0, 0xa0,0x75, 0x00,0xc0,0x4f,0xb6,0x88,0x20)
#endif
#else
typedef struct IWbemLevel1LoginVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWbemLevel1Login *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWbemLevel1Login *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWbemLevel1Login *This);

    /*** IWbemLevel1Login methods ***/
    HRESULT (STDMETHODCALLTYPE *EstablishPosition)(
        IWbemLevel1Login *This,
        LPWSTR wszLocaleList,
        DWORD dwNumLocales,
        DWORD *reserved);

    HRESULT (STDMETHODCALLTYPE *RequestChallenge)(
        IWbemLevel1Login *This,
        LPWSTR wszNetworkResource,
        LPWSTR wszUser,
        WBEM_128BITS Nonce);

    HRESULT (STDMETHODCALLTYPE *WBEMLogin)(
        IWbemLevel1Login *This,
        LPWSTR wszPreferredLocale,
        WBEM_128BITS AccessToken,
        LONG lFlags,
        IWbemContext *pCtx,
        IWbemServices **ppNamespace);

    HRESULT (STDMETHODCALLTYPE *NTLMLogin)(
        IWbemLevel1Login *This,
        LPWSTR wszNetworkResource,
        LPWSTR wszPreferredLocale,
        LONG lFlags,
        IWbemContext *pCtx,
        IWbemServices **ppNamespace);

    END_INTERFACE
} IWbemLevel1LoginVtbl;

interface IWbemLevel1Login {
    CONST_VTBL IWbemLevel1LoginVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWbemLevel1Login_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWbemLevel1Login_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWbemLevel1Login_Release(This) (This)->lpVtbl->Release(This)
/*** IWbemLevel1Login methods ***/
#define IWbemLevel1Login_EstablishPosition(This,wszLocaleList,dwNumLocales,reserved) (This)->lpVtbl->EstablishPosition(This,wszLocaleList,dwNumLocales,reserved)
#define IWbemLevel1Login_RequestChallenge(This,wszNetworkResource,wszUser,Nonce) (This)->lpVtbl->RequestChallenge(This,wszNetworkResource,wszUser,Nonce)
#define IWbemLevel1Login_WBEMLogin(This,wszPreferredLocale,AccessToken,lFlags,pCtx,ppNamespace) (This)->lpVtbl->WBEMLogin(This,wszPreferredLocale,AccessToken,lFlags,pCtx,ppNamespace)
#define IWbemLevel1Login_NTLMLogin(This,wszNetworkResource,wszPreferredLocale,lFlags,pCtx,ppNamespace) (This)->lpVtbl->NTLMLogin(This,wszNetworkResource,wszPreferredLocale,lFlags,pCtx,ppNamespace)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IWbemLevel1Login_QueryInterface(IWbemLevel1Login* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IWbemLevel1Login_AddRef(IWbemLevel1Login* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IWbemLevel1Login_Release(IWbemLevel1Login* This) {
    return This->lpVtbl->Release(This);
}
/*** IWbemLevel1Login methods ***/
static FORCEINLINE HRESULT IWbemLevel1Login_EstablishPosition(IWbemLevel1Login* This,LPWSTR wszLocaleList,DWORD dwNumLocales,DWORD *reserved) {
    return This->lpVtbl->EstablishPosition(This,wszLocaleList,dwNumLocales,reserved);
}
static FORCEINLINE HRESULT IWbemLevel1Login_RequestChallenge(IWbemLevel1Login* This,LPWSTR wszNetworkResource,LPWSTR wszUser,WBEM_128BITS Nonce) {
    return This->lpVtbl->RequestChallenge(This,wszNetworkResource,wszUser,Nonce);
}
static FORCEINLINE HRESULT IWbemLevel1Login_WBEMLogin(IWbemLevel1Login* This,LPWSTR wszPreferredLocale,WBEM_128BITS AccessToken,LONG lFlags,IWbemContext *pCtx,IWbemServices **ppNamespace) {
    return This->lpVtbl->WBEMLogin(This,wszPreferredLocale,AccessToken,lFlags,pCtx,ppNamespace);
}
static FORCEINLINE HRESULT IWbemLevel1Login_NTLMLogin(IWbemLevel1Login* This,LPWSTR wszNetworkResource,LPWSTR wszPreferredLocale,LONG lFlags,IWbemContext *pCtx,IWbemServices **ppNamespace) {
    return This->lpVtbl->NTLMLogin(This,wszNetworkResource,wszPreferredLocale,lFlags,pCtx,ppNamespace);
}
#endif
#endif

#endif


#endif  /* __IWbemLevel1Login_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWbemConnectorLogin interface
 */
#ifndef __IWbemConnectorLogin_INTERFACE_DEFINED__
#define __IWbemConnectorLogin_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWbemConnectorLogin, 0xd8ec9cb1, 0xb135, 0x4f10, 0x8b,0x1b, 0xc7,0x18,0x8b,0xb0,0xd1,0x86);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("d8ec9cb1-b135-4f10-8b1b-c7188bb0d186")
IWbemConnectorLogin : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE ConnectorLogin(
        LPWSTR wszNetworkResource,
        LPWSTR wszPreferredLocale,
        LONG lFlags,
        IWbemContext *pCtx,
        REFIID riid,
        void **pInterface) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWbemConnectorLogin, 0xd8ec9cb1, 0xb135, 0x4f10, 0x8b,0x1b, 0xc7,0x18,0x8b,0xb0,0xd1,0x86)
#endif
#else
typedef struct IWbemConnectorLoginVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWbemConnectorLogin *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWbemConnectorLogin *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWbemConnectorLogin *This);

    /*** IWbemConnectorLogin methods ***/
    HRESULT (STDMETHODCALLTYPE *ConnectorLogin)(
        IWbemConnectorLogin *This,
        LPWSTR wszNetworkResource,
        LPWSTR wszPreferredLocale,
        LONG lFlags,
        IWbemContext *pCtx,
        REFIID riid,
        void **pInterface);

    END_INTERFACE
} IWbemConnectorLoginVtbl;

interface IWbemConnectorLogin {
    CONST_VTBL IWbemConnectorLoginVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWbemConnectorLogin_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWbemConnectorLogin_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWbemConnectorLogin_Release(This) (This)->lpVtbl->Release(This)
/*** IWbemConnectorLogin methods ***/
#define IWbemConnectorLogin_ConnectorLogin(This,wszNetworkResource,wszPreferredLocale,lFlags,pCtx,riid,pInterface) (This)->lpVtbl->ConnectorLogin(This,wszNetworkResource,wszPreferredLocale,lFlags,pCtx,riid,pInterface)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IWbemConnectorLogin_QueryInterface(IWbemConnectorLogin* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IWbemConnectorLogin_AddRef(IWbemConnectorLogin* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IWbemConnectorLogin_Release(IWbemConnectorLogin* This) {
    return This->lpVtbl->Release(This);
}
/*** IWbemConnectorLogin methods ***/
static FORCEINLINE HRESULT IWbemConnectorLogin_ConnectorLogin(IWbemConnectorLogin* This,LPWSTR wszNetworkResource,LPWSTR wszPreferredLocale,LONG lFlags,IWbemContext *pCtx,REFIID riid,void **pInterface) {
    return This->lpVtbl->ConnectorLogin(This,wszNetworkResource,wszPreferredLocale,lFlags,pCtx,riid,pInterface);
}
#endif
#endif

#endif


#endif  /* __IWbemConnectorLogin_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWbemAddressResolution interface
 */
#ifndef __IWbemAddressResolution_INTERFACE_DEFINED__
#define __IWbemAddressResolution_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWbemAddressResolution, 0xf7ce2e12, 0x8c90, 0x11d1, 0x9e,0x7b, 0x00,0xc0,0x4f,0xc3,0x24,0xa8);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("f7ce2e12-8c90-11d1-9e7b-00c04fc324a8")
IWbemAddressResolution : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Resolve(
        LPWSTR wszNamespacePath,
        LPWSTR wszAddressType,
        DWORD *pdwAddressLength,
        BYTE **pabBinaryAddress) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWbemAddressResolution, 0xf7ce2e12, 0x8c90, 0x11d1, 0x9e,0x7b, 0x00,0xc0,0x4f,0xc3,0x24,0xa8)
#endif
#else
typedef struct IWbemAddressResolutionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWbemAddressResolution *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWbemAddressResolution *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWbemAddressResolution *This);

    /*** IWbemAddressResolution methods ***/
    HRESULT (STDMETHODCALLTYPE *Resolve)(
        IWbemAddressResolution *This,
        LPWSTR wszNamespacePath,
        LPWSTR wszAddressType,
        DWORD *pdwAddressLength,
        BYTE **pabBinaryAddress);

    END_INTERFACE
} IWbemAddressResolutionVtbl;

interface IWbemAddressResolution {
    CONST_VTBL IWbemAddressResolutionVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWbemAddressResolution_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWbemAddressResolution_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWbemAddressResolution_Release(This) (This)->lpVtbl->Release(This)
/*** IWbemAddressResolution methods ***/
#define IWbemAddressResolution_Resolve(This,wszNamespacePath,wszAddressType,pdwAddressLength,pabBinaryAddress) (This)->lpVtbl->Resolve(This,wszNamespacePath,wszAddressType,pdwAddressLength,pabBinaryAddress)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IWbemAddressResolution_QueryInterface(IWbemAddressResolution* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IWbemAddressResolution_AddRef(IWbemAddressResolution* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IWbemAddressResolution_Release(IWbemAddressResolution* This) {
    return This->lpVtbl->Release(This);
}
/*** IWbemAddressResolution methods ***/
static FORCEINLINE HRESULT IWbemAddressResolution_Resolve(IWbemAddressResolution* This,LPWSTR wszNamespacePath,LPWSTR wszAddressType,DWORD *pdwAddressLength,BYTE **pabBinaryAddress) {
    return This->lpVtbl->Resolve(This,wszNamespacePath,wszAddressType,pdwAddressLength,pabBinaryAddress);
}
#endif
#endif

#endif


#endif  /* __IWbemAddressResolution_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWbemTransport interface
 */
#ifndef __IWbemTransport_INTERFACE_DEFINED__
#define __IWbemTransport_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWbemTransport, 0x553fe584, 0x2156, 0x11d0, 0xb6,0xae, 0x00,0xaa,0x00,0x32,0x40,0xc7);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("553fe584-2156-11d0-b6ae-00aa003240c7")
IWbemTransport : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Initialize(
        ) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWbemTransport, 0x553fe584, 0x2156, 0x11d0, 0xb6,0xae, 0x00,0xaa,0x00,0x32,0x40,0xc7)
#endif
#else
typedef struct IWbemTransportVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWbemTransport *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWbemTransport *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWbemTransport *This);

    /*** IWbemTransport methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IWbemTransport *This);

    END_INTERFACE
} IWbemTransportVtbl;

interface IWbemTransport {
    CONST_VTBL IWbemTransportVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWbemTransport_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWbemTransport_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWbemTransport_Release(This) (This)->lpVtbl->Release(This)
/*** IWbemTransport methods ***/
#define IWbemTransport_Initialize(This) (This)->lpVtbl->Initialize(This)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IWbemTransport_QueryInterface(IWbemTransport* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IWbemTransport_AddRef(IWbemTransport* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IWbemTransport_Release(IWbemTransport* This) {
    return This->lpVtbl->Release(This);
}
/*** IWbemTransport methods ***/
static FORCEINLINE HRESULT IWbemTransport_Initialize(IWbemTransport* This) {
    return This->lpVtbl->Initialize(This);
}
#endif
#endif

#endif


#endif  /* __IWbemTransport_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWbemConstructClassObject interface
 */
#ifndef __IWbemConstructClassObject_INTERFACE_DEFINED__
#define __IWbemConstructClassObject_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWbemConstructClassObject, 0x9ef76194, 0x70d5, 0x11d1, 0xad,0x90, 0x00,0xc0,0x4f,0xd8,0xfd,0xff);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("9ef76194-70d5-11d1-ad90-00c04fd8fdff")
IWbemConstructClassObject : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE SetInheritanceChain(
        LONG lNumAntecedents,
        LPWSTR *awszAntecedents) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetPropertyOrigin(
        LPCWSTR wszPropertyName,
        LONG lOriginIndex) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetMethodOrigin(
        LPCWSTR wszMethodName,
        LONG lOriginIndex) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetServerNamespace(
        LPCWSTR wszServer,
        LPCWSTR wszNamespace) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWbemConstructClassObject, 0x9ef76194, 0x70d5, 0x11d1, 0xad,0x90, 0x00,0xc0,0x4f,0xd8,0xfd,0xff)
#endif
#else
typedef struct IWbemConstructClassObjectVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWbemConstructClassObject *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWbemConstructClassObject *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWbemConstructClassObject *This);

    /*** IWbemConstructClassObject methods ***/
    HRESULT (STDMETHODCALLTYPE *SetInheritanceChain)(
        IWbemConstructClassObject *This,
        LONG lNumAntecedents,
        LPWSTR *awszAntecedents);

    HRESULT (STDMETHODCALLTYPE *SetPropertyOrigin)(
        IWbemConstructClassObject *This,
        LPCWSTR wszPropertyName,
        LONG lOriginIndex);

    HRESULT (STDMETHODCALLTYPE *SetMethodOrigin)(
        IWbemConstructClassObject *This,
        LPCWSTR wszMethodName,
        LONG lOriginIndex);

    HRESULT (STDMETHODCALLTYPE *SetServerNamespace)(
        IWbemConstructClassObject *This,
        LPCWSTR wszServer,
        LPCWSTR wszNamespace);

    END_INTERFACE
} IWbemConstructClassObjectVtbl;

interface IWbemConstructClassObject {
    CONST_VTBL IWbemConstructClassObjectVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWbemConstructClassObject_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWbemConstructClassObject_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWbemConstructClassObject_Release(This) (This)->lpVtbl->Release(This)
/*** IWbemConstructClassObject methods ***/
#define IWbemConstructClassObject_SetInheritanceChain(This,lNumAntecedents,awszAntecedents) (This)->lpVtbl->SetInheritanceChain(This,lNumAntecedents,awszAntecedents)
#define IWbemConstructClassObject_SetPropertyOrigin(This,wszPropertyName,lOriginIndex) (This)->lpVtbl->SetPropertyOrigin(This,wszPropertyName,lOriginIndex)
#define IWbemConstructClassObject_SetMethodOrigin(This,wszMethodName,lOriginIndex) (This)->lpVtbl->SetMethodOrigin(This,wszMethodName,lOriginIndex)
#define IWbemConstructClassObject_SetServerNamespace(This,wszServer,wszNamespace) (This)->lpVtbl->SetServerNamespace(This,wszServer,wszNamespace)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IWbemConstructClassObject_QueryInterface(IWbemConstructClassObject* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IWbemConstructClassObject_AddRef(IWbemConstructClassObject* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IWbemConstructClassObject_Release(IWbemConstructClassObject* This) {
    return This->lpVtbl->Release(This);
}
/*** IWbemConstructClassObject methods ***/
static FORCEINLINE HRESULT IWbemConstructClassObject_SetInheritanceChain(IWbemConstructClassObject* This,LONG lNumAntecedents,LPWSTR *awszAntecedents) {
    return This->lpVtbl->SetInheritanceChain(This,lNumAntecedents,awszAntecedents);
}
static FORCEINLINE HRESULT IWbemConstructClassObject_SetPropertyOrigin(IWbemConstructClassObject* This,LPCWSTR wszPropertyName,LONG lOriginIndex) {
    return This->lpVtbl->SetPropertyOrigin(This,wszPropertyName,lOriginIndex);
}
static FORCEINLINE HRESULT IWbemConstructClassObject_SetMethodOrigin(IWbemConstructClassObject* This,LPCWSTR wszMethodName,LONG lOriginIndex) {
    return This->lpVtbl->SetMethodOrigin(This,wszMethodName,lOriginIndex);
}
static FORCEINLINE HRESULT IWbemConstructClassObject_SetServerNamespace(IWbemConstructClassObject* This,LPCWSTR wszServer,LPCWSTR wszNamespace) {
    return This->lpVtbl->SetServerNamespace(This,wszServer,wszNamespace);
}
#endif
#endif

#endif


#endif  /* __IWbemConstructClassObject_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWbemClientTransport interface
 */
#ifndef __IWbemClientTransport_INTERFACE_DEFINED__
#define __IWbemClientTransport_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWbemClientTransport, 0xf7ce2e11, 0x8c90, 0x11d1, 0x9e,0x7b, 0x00,0xc0,0x4f,0xc3,0x24,0xa8);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("f7ce2e11-8c90-11d1-9e7b-00c04fc324a8")
IWbemClientTransport : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE ConnectServer(
        BSTR strAddressType,
        DWORD dwBinaryAddressLength,
        BYTE *abBinaryAddress,
        BSTR strNetworkResource,
        BSTR strUser,
        BSTR strPassword,
        BSTR strLocale,
        LONG lSecurityFlags,
        BSTR strAuthority,
        IWbemContext *pCtx,
        IWbemServices **ppNamespace) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWbemClientTransport, 0xf7ce2e11, 0x8c90, 0x11d1, 0x9e,0x7b, 0x00,0xc0,0x4f,0xc3,0x24,0xa8)
#endif
#else
typedef struct IWbemClientTransportVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWbemClientTransport *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWbemClientTransport *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWbemClientTransport *This);

    /*** IWbemClientTransport methods ***/
    HRESULT (STDMETHODCALLTYPE *ConnectServer)(
        IWbemClientTransport *This,
        BSTR strAddressType,
        DWORD dwBinaryAddressLength,
        BYTE *abBinaryAddress,
        BSTR strNetworkResource,
        BSTR strUser,
        BSTR strPassword,
        BSTR strLocale,
        LONG lSecurityFlags,
        BSTR strAuthority,
        IWbemContext *pCtx,
        IWbemServices **ppNamespace);

    END_INTERFACE
} IWbemClientTransportVtbl;

interface IWbemClientTransport {
    CONST_VTBL IWbemClientTransportVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWbemClientTransport_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWbemClientTransport_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWbemClientTransport_Release(This) (This)->lpVtbl->Release(This)
/*** IWbemClientTransport methods ***/
#define IWbemClientTransport_ConnectServer(This,strAddressType,dwBinaryAddressLength,abBinaryAddress,strNetworkResource,strUser,strPassword,strLocale,lSecurityFlags,strAuthority,pCtx,ppNamespace) (This)->lpVtbl->ConnectServer(This,strAddressType,dwBinaryAddressLength,abBinaryAddress,strNetworkResource,strUser,strPassword,strLocale,lSecurityFlags,strAuthority,pCtx,ppNamespace)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IWbemClientTransport_QueryInterface(IWbemClientTransport* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IWbemClientTransport_AddRef(IWbemClientTransport* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IWbemClientTransport_Release(IWbemClientTransport* This) {
    return This->lpVtbl->Release(This);
}
/*** IWbemClientTransport methods ***/
static FORCEINLINE HRESULT IWbemClientTransport_ConnectServer(IWbemClientTransport* This,BSTR strAddressType,DWORD dwBinaryAddressLength,BYTE *abBinaryAddress,BSTR strNetworkResource,BSTR strUser,BSTR strPassword,BSTR strLocale,LONG lSecurityFlags,BSTR strAuthority,IWbemContext *pCtx,IWbemServices **ppNamespace) {
    return This->lpVtbl->ConnectServer(This,strAddressType,dwBinaryAddressLength,abBinaryAddress,strNetworkResource,strUser,strPassword,strLocale,lSecurityFlags,strAuthority,pCtx,ppNamespace);
}
#endif
#endif

#endif


#endif  /* __IWbemClientTransport_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWbemClientConnectionTransport interface
 */
#ifndef __IWbemClientConnectionTransport_INTERFACE_DEFINED__
#define __IWbemClientConnectionTransport_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWbemClientConnectionTransport, 0xa889c72a, 0xfcc1, 0x4a9e, 0xaf,0x61, 0xed,0x07,0x13,0x33,0xfb,0x5b);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("a889c72a-fcc1-4a9e-af61-ed071333fb5b")
IWbemClientConnectionTransport : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Open(
        BSTR strAddressType,
        DWORD dwBinaryAddressLength,
        BYTE *abBinaryAddress,
        const BSTR strObject,
        const BSTR strUser,
        const BSTR strPassword,
        const BSTR strLocale,
        LONG lFlags,
        IWbemContext *pCtx,
        REFIID riid,
        void **pInterface,
        IWbemCallResult **pCallRes) = 0;

    virtual HRESULT STDMETHODCALLTYPE OpenAsync(
        BSTR strAddressType,
        DWORD dwBinaryAddressLength,
        BYTE *abBinaryAddress,
        const BSTR strObject,
        const BSTR strUser,
        const BSTR strPassword,
        const BSTR strLocale,
        LONG lFlags,
        IWbemContext *pCtx,
        REFIID riid,
        IWbemObjectSink *pResponseHandler) = 0;

    virtual HRESULT STDMETHODCALLTYPE Cancel(
        LONG lFlags,
        IWbemObjectSink *pHandler) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWbemClientConnectionTransport, 0xa889c72a, 0xfcc1, 0x4a9e, 0xaf,0x61, 0xed,0x07,0x13,0x33,0xfb,0x5b)
#endif
#else
typedef struct IWbemClientConnectionTransportVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWbemClientConnectionTransport *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWbemClientConnectionTransport *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWbemClientConnectionTransport *This);

    /*** IWbemClientConnectionTransport methods ***/
    HRESULT (STDMETHODCALLTYPE *Open)(
        IWbemClientConnectionTransport *This,
        BSTR strAddressType,
        DWORD dwBinaryAddressLength,
        BYTE *abBinaryAddress,
        const BSTR strObject,
        const BSTR strUser,
        const BSTR strPassword,
        const BSTR strLocale,
        LONG lFlags,
        IWbemContext *pCtx,
        REFIID riid,
        void **pInterface,
        IWbemCallResult **pCallRes);

    HRESULT (STDMETHODCALLTYPE *OpenAsync)(
        IWbemClientConnectionTransport *This,
        BSTR strAddressType,
        DWORD dwBinaryAddressLength,
        BYTE *abBinaryAddress,
        const BSTR strObject,
        const BSTR strUser,
        const BSTR strPassword,
        const BSTR strLocale,
        LONG lFlags,
        IWbemContext *pCtx,
        REFIID riid,
        IWbemObjectSink *pResponseHandler);

    HRESULT (STDMETHODCALLTYPE *Cancel)(
        IWbemClientConnectionTransport *This,
        LONG lFlags,
        IWbemObjectSink *pHandler);

    END_INTERFACE
} IWbemClientConnectionTransportVtbl;

interface IWbemClientConnectionTransport {
    CONST_VTBL IWbemClientConnectionTransportVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWbemClientConnectionTransport_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWbemClientConnectionTransport_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWbemClientConnectionTransport_Release(This) (This)->lpVtbl->Release(This)
/*** IWbemClientConnectionTransport methods ***/
#define IWbemClientConnectionTransport_Open(This,strAddressType,dwBinaryAddressLength,abBinaryAddress,strObject,strUser,strPassword,strLocale,lFlags,pCtx,riid,pInterface,pCallRes) (This)->lpVtbl->Open(This,strAddressType,dwBinaryAddressLength,abBinaryAddress,strObject,strUser,strPassword,strLocale,lFlags,pCtx,riid,pInterface,pCallRes)
#define IWbemClientConnectionTransport_OpenAsync(This,strAddressType,dwBinaryAddressLength,abBinaryAddress,strObject,strUser,strPassword,strLocale,lFlags,pCtx,riid,pResponseHandler) (This)->lpVtbl->OpenAsync(This,strAddressType,dwBinaryAddressLength,abBinaryAddress,strObject,strUser,strPassword,strLocale,lFlags,pCtx,riid,pResponseHandler)
#define IWbemClientConnectionTransport_Cancel(This,lFlags,pHandler) (This)->lpVtbl->Cancel(This,lFlags,pHandler)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IWbemClientConnectionTransport_QueryInterface(IWbemClientConnectionTransport* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IWbemClientConnectionTransport_AddRef(IWbemClientConnectionTransport* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IWbemClientConnectionTransport_Release(IWbemClientConnectionTransport* This) {
    return This->lpVtbl->Release(This);
}
/*** IWbemClientConnectionTransport methods ***/
static FORCEINLINE HRESULT IWbemClientConnectionTransport_Open(IWbemClientConnectionTransport* This,BSTR strAddressType,DWORD dwBinaryAddressLength,BYTE *abBinaryAddress,const BSTR strObject,const BSTR strUser,const BSTR strPassword,const BSTR strLocale,LONG lFlags,IWbemContext *pCtx,REFIID riid,void **pInterface,IWbemCallResult **pCallRes) {
    return This->lpVtbl->Open(This,strAddressType,dwBinaryAddressLength,abBinaryAddress,strObject,strUser,strPassword,strLocale,lFlags,pCtx,riid,pInterface,pCallRes);
}
static FORCEINLINE HRESULT IWbemClientConnectionTransport_OpenAsync(IWbemClientConnectionTransport* This,BSTR strAddressType,DWORD dwBinaryAddressLength,BYTE *abBinaryAddress,const BSTR strObject,const BSTR strUser,const BSTR strPassword,const BSTR strLocale,LONG lFlags,IWbemContext *pCtx,REFIID riid,IWbemObjectSink *pResponseHandler) {
    return This->lpVtbl->OpenAsync(This,strAddressType,dwBinaryAddressLength,abBinaryAddress,strObject,strUser,strPassword,strLocale,lFlags,pCtx,riid,pResponseHandler);
}
static FORCEINLINE HRESULT IWbemClientConnectionTransport_Cancel(IWbemClientConnectionTransport* This,LONG lFlags,IWbemObjectSink *pHandler) {
    return This->lpVtbl->Cancel(This,lFlags,pHandler);
}
#endif
#endif

#endif


#endif  /* __IWbemClientConnectionTransport_INTERFACE_DEFINED__ */

#endif
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __wbemtran_h__ */

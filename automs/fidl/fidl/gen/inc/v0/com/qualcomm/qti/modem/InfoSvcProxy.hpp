/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.2.0.v202012010850.
* Used org.franca.core 0.13.1.201807231814.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V0_COM_QUALCOMM_QTI_MODEM_Info_Svc_PROXY_HPP_
#define V0_COM_QUALCOMM_QTI_MODEM_Info_Svc_PROXY_HPP_

#include <v0/com/qualcomm/qti/modem/InfoSvcProxyBase.hpp>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif


#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v0 {
namespace com {
namespace qualcomm {
namespace qti {
namespace modem {

template <typename ... _AttributeExtensions>
class InfoSvcProxy
    : virtual public InfoSvc,
      virtual public InfoSvcProxyBase,
      virtual public _AttributeExtensions... {
public:
    InfoSvcProxy(std::shared_ptr<CommonAPI::Proxy> delegate);
    ~InfoSvcProxy();

    typedef InfoSvc InterfaceType;


    /**
     * Returns the CommonAPI address of the remote partner this proxy communicates with.
     */
    virtual const CommonAPI::Address &getAddress() const;

    /**
     * Returns true if the remote partner for this proxy is currently known to be available.
     */
    virtual bool isAvailable() const;

    /**
     * Returns true if the remote partner for this proxy is available.
     */
    virtual bool isAvailableBlocking() const;

    /**
     * Returns the wrapper class that is used to (de-)register for notifications about
     * the availability of the remote partner of this proxy.
     */
    virtual CommonAPI::ProxyStatusEvent& getProxyStatusEvent();

    /**
     * Returns the wrapper class that is used to access version information of the remote
     * partner of this proxy.
     */
    virtual CommonAPI::InterfaceVersionAttribute& getInterfaceVersionAttribute();

    virtual std::future<void> getCompletionFuture();

    /**
     * Calls GetImei with synchronous semantics.
     *
     * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void GetImei(CommonAPI::CallStatus &_internalCallStatus, ::v0::com::qualcomm::qti::modem::CommonTypes::Result &_error, std::string &_imei, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls GetImei with asynchronous semantics.
     *
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> GetImeiAsync(GetImeiAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);



 private:
    std::shared_ptr< InfoSvcProxyBase> delegate_;
};

typedef InfoSvcProxy<> InfoSvcProxyDefault;


//
// InfoSvcProxy Implementation
//
template <typename ... _AttributeExtensions>
InfoSvcProxy<_AttributeExtensions...>::InfoSvcProxy(std::shared_ptr<CommonAPI::Proxy> delegate):
        _AttributeExtensions(*(std::dynamic_pointer_cast< InfoSvcProxyBase>(delegate)))...,
        delegate_(std::dynamic_pointer_cast< InfoSvcProxyBase>(delegate)) {
}

template <typename ... _AttributeExtensions>
InfoSvcProxy<_AttributeExtensions...>::~InfoSvcProxy() {
}

template <typename ... _AttributeExtensions>
void InfoSvcProxy<_AttributeExtensions...>::GetImei(CommonAPI::CallStatus &_internalCallStatus, ::v0::com::qualcomm::qti::modem::CommonTypes::Result &_error, std::string &_imei, const CommonAPI::CallInfo *_info) {
    delegate_->GetImei(_internalCallStatus, _error, _imei, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> InfoSvcProxy<_AttributeExtensions...>::GetImeiAsync(GetImeiAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->GetImeiAsync(_callback, _info);
}

template <typename ... _AttributeExtensions>
const CommonAPI::Address &InfoSvcProxy<_AttributeExtensions...>::getAddress() const {
    return delegate_->getAddress();
}

template <typename ... _AttributeExtensions>
bool InfoSvcProxy<_AttributeExtensions...>::isAvailable() const {
    return delegate_->isAvailable();
}

template <typename ... _AttributeExtensions>
bool InfoSvcProxy<_AttributeExtensions...>::isAvailableBlocking() const {
    return delegate_->isAvailableBlocking();
}

template <typename ... _AttributeExtensions>
CommonAPI::ProxyStatusEvent& InfoSvcProxy<_AttributeExtensions...>::getProxyStatusEvent() {
    return delegate_->getProxyStatusEvent();
}

template <typename ... _AttributeExtensions>
CommonAPI::InterfaceVersionAttribute& InfoSvcProxy<_AttributeExtensions...>::getInterfaceVersionAttribute() {
    return delegate_->getInterfaceVersionAttribute();
}


template <typename ... _AttributeExtensions>
std::future<void> InfoSvcProxy<_AttributeExtensions...>::getCompletionFuture() {
    return delegate_->getCompletionFuture();
}

} // namespace modem
} // namespace qti
} // namespace qualcomm
} // namespace com
} // namespace v0



// Compatibility
namespace v0_1 = v0;

#endif // V0_COM_QUALCOMM_QTI_MODEM_Info_Svc_PROXY_HPP_

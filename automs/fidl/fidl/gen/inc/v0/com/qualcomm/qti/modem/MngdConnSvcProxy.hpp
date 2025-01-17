/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.2.0.v202012010850.
* Used org.franca.core 0.13.1.201807231814.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V0_COM_QUALCOMM_QTI_MODEM_Mngd_Conn_Svc_PROXY_HPP_
#define V0_COM_QUALCOMM_QTI_MODEM_Mngd_Conn_Svc_PROXY_HPP_

#include <v0/com/qualcomm/qti/modem/MngdConnSvcProxyBase.hpp>


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
class MngdConnSvcProxy
    : virtual public MngdConnSvc,
      virtual public MngdConnSvcProxyBase,
      virtual public _AttributeExtensions... {
public:
    MngdConnSvcProxy(std::shared_ptr<CommonAPI::Proxy> delegate);
    ~MngdConnSvcProxy();

    typedef MngdConnSvc InterfaceType;


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
     * Calls StartData with synchronous semantics.
     *
     * All const parameters are input parameters to this method.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void StartData(std::string _name, CommonAPI::CallStatus &_internalCallStatus, ::v0::com::qualcomm::qti::modem::CommonTypes::Result &_error, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls StartData with asynchronous semantics.
     *
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> StartDataAsync(const std::string &_name, StartDataAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls StopData with synchronous semantics.
     *
     * All const parameters are input parameters to this method.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void StopData(std::string _name, CommonAPI::CallStatus &_internalCallStatus, ::v0::com::qualcomm::qti::modem::CommonTypes::Result &_error, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls StopData with asynchronous semantics.
     *
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> StopDataAsync(const std::string &_name, StopDataAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls GetDataList with synchronous semantics.
     *
     * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void GetDataList(CommonAPI::CallStatus &_internalCallStatus, ::v0::com::qualcomm::qti::modem::CommonTypes::Result &_error, uint8_t &_dataNum, std::vector< std::string > &_name, std::vector< MngdConnSvc::DataState > &_dataState, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls GetDataList with asynchronous semantics.
     *
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> GetDataListAsync(GetDataListAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls GetDataIpv4Info with synchronous semantics.
     *
     * All const parameters are input parameters to this method.
     * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void GetDataIpv4Info(std::string _name, CommonAPI::CallStatus &_internalCallStatus, ::v0::com::qualcomm::qti::modem::CommonTypes::Result &_error, std::string &_ifName, MngdConnSvc::DataIpInfo &_ipv4Info, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls GetDataIpv4Info with asynchronous semantics.
     *
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> GetDataIpv4InfoAsync(const std::string &_name, GetDataIpv4InfoAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Returns the wrapper class that provides access to the broadcast DataState.
     */
    virtual DataStateEvent& getDataStateEvent() {
        return delegate_->getDataStateEvent();
    }



 private:
    std::shared_ptr< MngdConnSvcProxyBase> delegate_;
};

typedef MngdConnSvcProxy<> MngdConnSvcProxyDefault;


//
// MngdConnSvcProxy Implementation
//
template <typename ... _AttributeExtensions>
MngdConnSvcProxy<_AttributeExtensions...>::MngdConnSvcProxy(std::shared_ptr<CommonAPI::Proxy> delegate):
        _AttributeExtensions(*(std::dynamic_pointer_cast< MngdConnSvcProxyBase>(delegate)))...,
        delegate_(std::dynamic_pointer_cast< MngdConnSvcProxyBase>(delegate)) {
}

template <typename ... _AttributeExtensions>
MngdConnSvcProxy<_AttributeExtensions...>::~MngdConnSvcProxy() {
}

template <typename ... _AttributeExtensions>
void MngdConnSvcProxy<_AttributeExtensions...>::StartData(std::string _name, CommonAPI::CallStatus &_internalCallStatus, ::v0::com::qualcomm::qti::modem::CommonTypes::Result &_error, const CommonAPI::CallInfo *_info) {
    delegate_->StartData(_name, _internalCallStatus, _error, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> MngdConnSvcProxy<_AttributeExtensions...>::StartDataAsync(const std::string &_name, StartDataAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->StartDataAsync(_name, _callback, _info);
}
template <typename ... _AttributeExtensions>
void MngdConnSvcProxy<_AttributeExtensions...>::StopData(std::string _name, CommonAPI::CallStatus &_internalCallStatus, ::v0::com::qualcomm::qti::modem::CommonTypes::Result &_error, const CommonAPI::CallInfo *_info) {
    delegate_->StopData(_name, _internalCallStatus, _error, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> MngdConnSvcProxy<_AttributeExtensions...>::StopDataAsync(const std::string &_name, StopDataAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->StopDataAsync(_name, _callback, _info);
}
template <typename ... _AttributeExtensions>
void MngdConnSvcProxy<_AttributeExtensions...>::GetDataList(CommonAPI::CallStatus &_internalCallStatus, ::v0::com::qualcomm::qti::modem::CommonTypes::Result &_error, uint8_t &_dataNum, std::vector< std::string > &_name, std::vector< MngdConnSvc::DataState > &_dataState, const CommonAPI::CallInfo *_info) {
    delegate_->GetDataList(_internalCallStatus, _error, _dataNum, _name, _dataState, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> MngdConnSvcProxy<_AttributeExtensions...>::GetDataListAsync(GetDataListAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->GetDataListAsync(_callback, _info);
}
template <typename ... _AttributeExtensions>
void MngdConnSvcProxy<_AttributeExtensions...>::GetDataIpv4Info(std::string _name, CommonAPI::CallStatus &_internalCallStatus, ::v0::com::qualcomm::qti::modem::CommonTypes::Result &_error, std::string &_ifName, MngdConnSvc::DataIpInfo &_ipv4Info, const CommonAPI::CallInfo *_info) {
    delegate_->GetDataIpv4Info(_name, _internalCallStatus, _error, _ifName, _ipv4Info, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> MngdConnSvcProxy<_AttributeExtensions...>::GetDataIpv4InfoAsync(const std::string &_name, GetDataIpv4InfoAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->GetDataIpv4InfoAsync(_name, _callback, _info);
}

template <typename ... _AttributeExtensions>
const CommonAPI::Address &MngdConnSvcProxy<_AttributeExtensions...>::getAddress() const {
    return delegate_->getAddress();
}

template <typename ... _AttributeExtensions>
bool MngdConnSvcProxy<_AttributeExtensions...>::isAvailable() const {
    return delegate_->isAvailable();
}

template <typename ... _AttributeExtensions>
bool MngdConnSvcProxy<_AttributeExtensions...>::isAvailableBlocking() const {
    return delegate_->isAvailableBlocking();
}

template <typename ... _AttributeExtensions>
CommonAPI::ProxyStatusEvent& MngdConnSvcProxy<_AttributeExtensions...>::getProxyStatusEvent() {
    return delegate_->getProxyStatusEvent();
}

template <typename ... _AttributeExtensions>
CommonAPI::InterfaceVersionAttribute& MngdConnSvcProxy<_AttributeExtensions...>::getInterfaceVersionAttribute() {
    return delegate_->getInterfaceVersionAttribute();
}


template <typename ... _AttributeExtensions>
std::future<void> MngdConnSvcProxy<_AttributeExtensions...>::getCompletionFuture() {
    return delegate_->getCompletionFuture();
}

} // namespace modem
} // namespace qti
} // namespace qualcomm
} // namespace com
} // namespace v0



// Compatibility
namespace v0_1 = v0;

#endif // V0_COM_QUALCOMM_QTI_MODEM_Mngd_Conn_Svc_PROXY_HPP_

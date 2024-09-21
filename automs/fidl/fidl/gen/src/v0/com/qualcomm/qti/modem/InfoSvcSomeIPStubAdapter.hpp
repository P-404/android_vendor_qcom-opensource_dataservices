/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.0.v202012010944.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */
#ifndef V0_COM_QUALCOMM_QTI_MODEM_INFO_SVC_SOMEIP_STUB_ADAPTER_HPP_
#define V0_COM_QUALCOMM_QTI_MODEM_INFO_SVC_SOMEIP_STUB_ADAPTER_HPP_

#include <v0/com/qualcomm/qti/modem/InfoSvcStub.hpp>
#include <v0/com/qualcomm/qti/modem/CommonTypesSomeIPDeployment.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <CommonAPI/SomeIP/AddressTranslator.hpp>
#include <CommonAPI/SomeIP/StubAdapterHelper.hpp>
#include <CommonAPI/SomeIP/StubAdapter.hpp>
#include <CommonAPI/SomeIP/Factory.hpp>
#include <CommonAPI/SomeIP/Types.hpp>
#include <CommonAPI/SomeIP/Constants.hpp>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v0 {
namespace com {
namespace qualcomm {
namespace qti {
namespace modem {

template <typename _Stub = ::v0::com::qualcomm::qti::modem::InfoSvcStub, typename... _Stubs>
class InfoSvcSomeIPStubAdapterInternal
    : public virtual InfoSvcStubAdapter,
      public CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...>,
      public std::enable_shared_from_this< InfoSvcSomeIPStubAdapterInternal<_Stub, _Stubs...>>
{
public:
    typedef CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...> InfoSvcSomeIPStubAdapterHelper;

    ~InfoSvcSomeIPStubAdapterInternal() {
        deactivateManagedInstances();
        InfoSvcSomeIPStubAdapterHelper::deinit();
    }

    void deactivateManagedInstances() {}
    
    CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v0::com::qualcomm::qti::modem::InfoSvcStub,
        CommonAPI::Version
    > getInfoSvcInterfaceVersionStubDispatcher;

    /*
     * description: 
     * Retrieves the International Mobile Equipment Identity (IMEI).
     */
    CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v0::com::qualcomm::qti::modem::InfoSvcStub,
        std::tuple< >,
        std::tuple< ::v0::com::qualcomm::qti::modem::CommonTypes::Result, std::string>,
        std::tuple< >,
        std::tuple< ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t, CommonAPI::SomeIP::StringDeployment>
    > getImeiStubDispatcher;
    
    InfoSvcSomeIPStubAdapterInternal(
        const CommonAPI::SomeIP::Address &_address,
        const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub):
        CommonAPI::SomeIP::StubAdapter(_address, _connection),
        InfoSvcSomeIPStubAdapterHelper(
            _address,
            _connection,
            std::dynamic_pointer_cast< InfoSvcStub>(_stub)),
        getInfoSvcInterfaceVersionStubDispatcher(&InfoSvcStub::lockInterfaceVersionAttribute, &InfoSvcStub::getInterfaceVersion, false, true),
        getImeiStubDispatcher(
            &InfoSvcStub::GetImei,
            false,
            _stub->hasElement(0),
            std::make_tuple(),
            std::make_tuple(&::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment, static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)))
        
    {
        /*
         * description: 
         * Retrieves the International Mobile Equipment Identity (IMEI).
         */
        InfoSvcSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x753a) }, &getImeiStubDispatcher );
        // Provided events/fields
    }

    // Register/Unregister event handlers for selective broadcasts
    void registerSelectiveEventHandlers();
    void unregisterSelectiveEventHandlers();

};


template <typename _Stub, typename... _Stubs>
void InfoSvcSomeIPStubAdapterInternal<_Stub, _Stubs...>::registerSelectiveEventHandlers() {
}

template <typename _Stub, typename... _Stubs>
void InfoSvcSomeIPStubAdapterInternal<_Stub, _Stubs...>::unregisterSelectiveEventHandlers() {
}

template <typename _Stub = ::v0::com::qualcomm::qti::modem::InfoSvcStub, typename... _Stubs>
class InfoSvcSomeIPStubAdapter
    : public InfoSvcSomeIPStubAdapterInternal<_Stub, _Stubs...> {
public:
    InfoSvcSomeIPStubAdapter(const CommonAPI::SomeIP::Address &_address,
                                            const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
                                            const std::shared_ptr<CommonAPI::StubBase> &_stub)
        : CommonAPI::SomeIP::StubAdapter(_address, _connection),
          InfoSvcSomeIPStubAdapterInternal<_Stub, _Stubs...>(_address, _connection, _stub) {
    }
};

} // namespace modem
} // namespace qti
} // namespace qualcomm
} // namespace com
} // namespace v0

#endif // V0_COM_QUALCOMM_QTI_MODEM_Info_Svc_SOMEIP_STUB_ADAPTER_HPP_
